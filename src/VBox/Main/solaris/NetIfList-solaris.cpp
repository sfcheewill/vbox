/* $Id$ */
/** @file
 * Main - NetIfList, Solaris implementation.
 */

/*
 * Copyright (C) 2008 Sun Microsystems, Inc.
 *
 * This file is part of VirtualBox Open Source Edition (OSE), as
 * available from http://www.virtualbox.org. This file is free software;
 * you can redistribute it and/or modify it under the terms of the GNU
 * General Public License (GPL) as published by the Free Software
 * Foundation, in version 2 as it comes in the "COPYING" file of the
 * VirtualBox OSE distribution. VirtualBox OSE is distributed in the
 * hope that it will be useful, but WITHOUT ANY WARRANTY of any kind.
 *
 * The contents of this file may alternatively be used under the terms
 * of the Common Development and Distribution License Version 1.0
 * (CDDL) only, as it comes in the "COPYING.CDDL" file of the
 * VirtualBox OSE distribution, in which case the provisions of the
 * CDDL are applicable instead of those of the GPL.
 *
 * You may elect to license modified versions of this file under the
 * terms and conditions of either the GPL or the CDDL or both.
 *
 * Please contact Sun Microsystems, Inc., 4150 Network Circle, Santa
 * Clara, CA 95054 USA or visit http://www.sun.com if you need
 * additional information or have any questions.
 */



/*******************************************************************************
*   Header Files                                                               *
*******************************************************************************/
#define LOG_GROUP LOG_GROUP_MAIN

#include <iprt/err.h>

#include "netif.h"

#include <list>
#include <map>

#ifdef VBOX_WITH_HOSTNETIF_API

#include <fcntl.h>
#include <unistd.h>
#include <stropts.h>
#include <errno.h>
#include <limits.h>
#include <stdio.h>
#ifdef VBOX_SOLARIS_NSL_RESOLVED
# include <libdevinfo.h>
#endif
#include <net/if.h>
#include <sys/socket.h>
#include <sys/sockio.h>
#include <net/if_arp.h>
#include <net/if.h>
#include <sys/types.h>

static void vboxSolarisAddHostIface(char *pszIface, int Instance, PCRTMAC pMac, void *pvHostNetworkInterfaceList)
{
    std::list<ComObjPtr <HostNetworkInterface> > *pList = (std::list<ComObjPtr <HostNetworkInterface> > *)pvHostNetworkInterfaceList;
    Assert(pList);

    typedef std::map <std::string, std::string> NICMap;
    typedef std::pair <std::string, std::string> NICPair;
    static NICMap SolarisNICMap;
    if (SolarisNICMap.empty())
    {
        SolarisNICMap.insert(NICPair("afe", "ADMtek Centaur/Comet Fast Ethernet"));
        SolarisNICMap.insert(NICPair("aggr", "Link Aggregation Interface"));
        SolarisNICMap.insert(NICPair("bge", "Broadcom BCM57xx Gigabit Ethernet"));
        SolarisNICMap.insert(NICPair("ce", "Cassini Gigabit Ethernet"));
        SolarisNICMap.insert(NICPair("chxge", "Chelsio Ethernet"));
        SolarisNICMap.insert(NICPair("dmfe", "Davicom Fast Ethernet"));
        SolarisNICMap.insert(NICPair("dnet", "DEC 21040/41 21140 Ethernet"));
        SolarisNICMap.insert(NICPair("e1000", "Intel PRO/1000 Gigabit Ethernet"));
        SolarisNICMap.insert(NICPair("e1000g", "Intel PRO/1000 Gigabit Ethernet"));
        SolarisNICMap.insert(NICPair("elx", "3COM EtherLink III Ethernet"));
        SolarisNICMap.insert(NICPair("elxl", "3COM Ethernet"));
        SolarisNICMap.insert(NICPair("eri", "eri Fast Ethernet"));
        SolarisNICMap.insert(NICPair("ge", "GEM Gigabit Ethernet"));
        SolarisNICMap.insert(NICPair("hme", "SUNW,hme Fast-Ethernet"));
        SolarisNICMap.insert(NICPair("ipge", "PCI-E Gigabit Ethernet"));
        SolarisNICMap.insert(NICPair("iprb", "Intel 82557/58/59 Ethernet"));
        SolarisNICMap.insert(NICPair("mxfe", "Macronix 98715 Fast Ethernet"));
        SolarisNICMap.insert(NICPair("nge", "Nvidia Gigabit Ethernet"));
        SolarisNICMap.insert(NICPair("pcelx", "3COM EtherLink III PCMCIA Ethernet"));
        SolarisNICMap.insert(NICPair("pcn", "AMD PCnet Ethernet"));
        SolarisNICMap.insert(NICPair("qfe", "SUNW,qfe Quad Fast-Ethernet"));
        SolarisNICMap.insert(NICPair("rge", "Realtek Gigabit Ethernet"));
        SolarisNICMap.insert(NICPair("rtls", "Realtek 8139 Fast Ethernet"));
        SolarisNICMap.insert(NICPair("skge", "SksKonnect Gigabit Ethernet"));
        SolarisNICMap.insert(NICPair("spwr", "SMC EtherPower II 10/100 (9432) Ethernet"));
        SolarisNICMap.insert(NICPair("vnic", "Virtual Network Interface Ethernet"));
        SolarisNICMap.insert(NICPair("xge", "Neterior Xframe Gigabit Ethernet"));
        SolarisNICMap.insert(NICPair("xge", "Neterior Xframe 10Gigabit Ethernet"));
    }

    /*
     * Try picking up description from our NIC map.
     */
    char szNICInstance[128];
    RTStrPrintf(szNICInstance, sizeof(szNICInstance), "%s%d", pszIface, Instance);
    char szNICDesc[256];
    std::string Description = SolarisNICMap[pszIface];
    if (Description != "")
        RTStrPrintf(szNICDesc, sizeof(szNICDesc), "%s - %s", szNICInstance, Description.c_str());
    else
        RTStrPrintf(szNICDesc, sizeof(szNICDesc), "%s - Ethernet", szNICInstance);

    /*
     * Construct UUID with interface name and the MAC address if available.
     */
    RTUUID Uuid;
    RTUuidClear(&Uuid);
    memcpy(&Uuid, szNICInstance, RT_MIN(strlen(szNICInstance), sizeof(Uuid)));
    Uuid.Gen.u8ClockSeqHiAndReserved = (Uuid.Gen.u8ClockSeqHiAndReserved & 0x3f) | 0x80;
    Uuid.Gen.u16TimeHiAndVersion = (Uuid.Gen.u16TimeHiAndVersion & 0x0fff) | 0x4000;
    if (pMac)
    {
        Uuid.Gen.au8Node[0] = pMac->au8[0];
        Uuid.Gen.au8Node[1] = pMac->au8[1];
        Uuid.Gen.au8Node[2] = pMac->au8[2];
        Uuid.Gen.au8Node[3] = pMac->au8[3];
        Uuid.Gen.au8Node[4] = pMac->au8[4];
        Uuid.Gen.au8Node[5] = pMac->au8[5];
    }

    ComObjPtr<HostNetworkInterface> IfObj;
    IfObj.createObject();
    if (SUCCEEDED(IfObj->init(Bstr(szNICDesc), Guid(Uuid))))
        pList->push_back(IfObj);
}

static boolean_t vboxSolarisAddLinkHostIface(const char *pszIface, void *pvHostNetworkInterfaceList)
{
    /*
     * Clip off the zone instance number from the interface name (if any).
     */
    char szIfaceName[128];
    strcpy(szIfaceName, pszIface);
    char *pszColon = (char *)memchr(szIfaceName, ':', sizeof(szIfaceName));
    if (pszColon)
        *pszColon = '\0';

    /*
     * Get the instance number from the interface name, then clip it off.
     */
    int cbInstance = 0;
    int cbIface = strlen(szIfaceName);
    const char *pszEnd = pszIface + cbIface - 1;
    for (int i = 0; i < cbIface - 1; i++)
    {
        if (!RT_C_IS_DIGIT(*pszEnd))
            break;
        cbInstance++;
        pszEnd--;
    }

    int Instance = atoi(pszEnd + 1);
    strncpy(szIfaceName, pszIface, cbIface - cbInstance);
    szIfaceName[cbIface - cbInstance] = '\0';

    /*
     * Add the interface.
     */
    vboxSolarisAddHostIface(szIfaceName, Instance, NULL, pvHostNetworkInterfaceList);

    /*
     * Continue walking...
     */
    return _B_FALSE;
}

static bool vboxSolarisSortNICList(const ComObjPtr <HostNetworkInterface> Iface1, const ComObjPtr <HostNetworkInterface> Iface2)
{
    Bstr Iface1Str;
    (*Iface1).COMGETTER(Name) (Iface1Str.asOutParam());

    Bstr Iface2Str;
    (*Iface2).COMGETTER(Name) (Iface2Str.asOutParam());

    return Iface1Str < Iface2Str;
}

static bool vboxSolarisSameNIC(const ComObjPtr <HostNetworkInterface> Iface1, const ComObjPtr <HostNetworkInterface> Iface2)
{
    Bstr Iface1Str;
    (*Iface1).COMGETTER(Name) (Iface1Str.asOutParam());

    Bstr Iface2Str;
    (*Iface2).COMGETTER(Name) (Iface2Str.asOutParam());

    return (Iface1Str == Iface2Str);
}

# ifdef VBOX_SOLARIS_NSL_RESOLVED
static int vboxSolarisAddPhysHostIface(di_node_t Node, di_minor_t Minor, void *pvHostNetworkInterfaceList)
{
    /*
     * Skip aggregations.
     */
    if (!strcmp(di_driver_name(Node), "aggr"))
        return DI_WALK_CONTINUE;

    /*
     * Skip softmacs.
     */
    if (!strcmp(di_driver_name(Node), "softmac"))
        return DI_WALK_CONTINUE;

    vboxSolarisAddHostIface(di_driver_name(Node), di_instance(Node), NULL, pvHostNetworkInterfaceList);
    return DI_WALK_CONTINUE;
}
# endif /* VBOX_SOLARIS_NSL_RESOLVED */

int NetIfList(std::list <ComObjPtr <HostNetworkInterface> > &list)
{

#  ifdef VBOX_SOLARIS_NSL_RESOLVED

    /*
     * Use libdevinfo for determining all physical interfaces.
     */
    di_node_t Root;
    Root = di_init("/", DINFOCACHE);
    if (Root != DI_NODE_NIL)
    {
        di_walk_minor(Root, DDI_NT_NET, 0, &list, vboxSolarisAddPhysHostIface);
        di_fini(Root);
    }

    /*
     * Use libdlpi for determining all DLPI interfaces.
     */
    if (VBoxSolarisLibDlpiFound())
        g_pfnLibDlpiWalk(vboxSolarisAddLinkHostIface, &list, 0);

#  endif    /* VBOX_SOLARIS_NSL_RESOLVED */

    /*
     * This gets only the list of all plumbed logical interfaces.
     * This is needed for zones which cannot access the device tree
     * and in this case we just let them use the list of plumbed interfaces
     * on the zone.
     */
    int Sock = socket(PF_INET, SOCK_DGRAM, IPPROTO_IP);
    if (Sock > 0)
    {
        struct lifnum IfNum;
        memset(&IfNum, 0, sizeof(IfNum));
        IfNum.lifn_family = AF_INET;
        int rc = ioctl(Sock, SIOCGLIFNUM, &IfNum);
        if (!rc)
        {
            struct lifreq Ifaces[24];
            struct lifconf IfConfig;
            memset(&IfConfig, 0, sizeof(IfConfig));
            IfConfig.lifc_family = AF_INET;
            IfConfig.lifc_len = sizeof(Ifaces);
            IfConfig.lifc_buf = (caddr_t)&(Ifaces[0]);
            rc = ioctl(Sock, SIOCGLIFCONF, &IfConfig);
            if (!rc)
            {
                for (int i = 0; i < IfNum.lifn_count; i++)
                {
                    /*
                     * Skip loopback interfaces.
                     */
                    if (!strncmp(Ifaces[i].lifr_name, "lo", 2))
                        continue;

                    NETIFINFO Info;
                    memset(&Info, 0, sizeof(Info));
                    rc = ioctl(Sock, SIOCGLIFADDR, &(Ifaces[i]));
                    if (rc >= 0)
                    {
                        memcpy(Info.IPAddress.au8, &Ifaces[i].lifr_addr.sa_data, Info.IPAddress.au8);
                        // SIOCGLIFNETMASK
                        struct arpreq ArpReq;
                        memcpy(&ArpReq.arp_pa, &Ifaces[i].lifr_addr, sizeof(struct sockaddr_in));

                        /*
                         * We might fail if the interface has not been assigned an IP address.
                         * That doesn't matter; as long as it's plumbed we can pick it up.
                         * But, if it has not acquired an IP address we cannot obtain it's MAC
                         * address this way, so we just use all zeros there.
                         */
                        rc = ioctl(Sock, SIOCGARP, &ArpReq);
                        if (rc >= 0)
                            memcpy(&Info.MACAddress, ArpReq.arp_ha.sa_data, sizeof(Info.MACAddress));

#if 0
                        char szNICDesc[LIFNAMSIZ + 256];
                        char *pszIface = Ifaces[i].lifr_name;
                        strcpy(szNICDesc, pszIface);

                        vboxSolarisAddLinkHostIface(pszIface, &list);
#endif
                    }

                    rc = ioctl(Sock, SIOCGLIFNETMASK, &(Ifaces[i]));
                    if (rc >= 0)
                    {
                        memcpy(Info.IPNetMask.au8, &Ifaces[i].lifr_addr.sa_data, Info.IPNetMask.au8);
                    }
                    rc = ioctl(Sock, SIOCGLIFFLAGS, &(Ifaces[i]));
                    if (rc >= 0)
                    {
                        Info.enmStatus = Ifaces[i].lifr_flags & IFF_UP ? NETIF_S_UP : NETIF_S_DOWN;
                    }
                    char *pszIface = Ifaces[i].lifr_name;
                    vboxSolarisAddLinkHostIface(pszIface, &list);
                }
            }
        }
        close(Sock);
    }

    /*
     * Weed out duplicates caused by dlpi_walk inconsistencies across Nevadas.
     */
    list.sort(vboxSolarisSortNICList);
    list.unique(vboxSolarisSameNIC);

    return VINF_SUCCESS;
}
#else
int NetIfList(std::list <ComObjPtr <HostNetworkInterface> > &list)
{
    return VERR_NOT_IMPLEMENTED;
}
#endif
