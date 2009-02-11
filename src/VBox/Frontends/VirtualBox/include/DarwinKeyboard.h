/** @file
 * Common GUI Library - Darwin Keyboard routines.
 *
 * @todo Move this up somewhere so that the two SDL GUIs can use this code too.
 */

/*
 * Copyright (C) 2006-2007 Sun Microsystems, Inc.
 *
 * This file is part of VirtualBox Open Source Edition (OSE), as
 * available from http://www.virtualbox.org. This file is free software;
 * you can redistribute it and/or modify it under the terms of the GNU
 * General Public License (GPL) as published by the Free Software
 * Foundation, in version 2 as it comes in the "COPYING" file of the
 * VirtualBox OSE distribution. VirtualBox OSE is distributed in the
 * hope that it will be useful, but WITHOUT ANY WARRANTY of any kind.
 *
 * Please contact Sun Microsystems, Inc., 4150 Network Circle, Santa
 * Clara, CA 95054 USA or visit http://www.sun.com if you need
 * additional information or have any questions.
 */


#ifndef ___DarwinKeyboard_h___
#define ___DarwinKeyboard_h___

#include <iprt/cdefs.h>
#include <CoreFoundation/CFBase.h>

__BEGIN_DECLS

/** Private hack for missing rightCmdKey enum. */
#define kEventKeyModifierRightCmdKeyMask (1<<27)

/** The scancode mask. */
#define VBOXKEY_SCANCODE_MASK       0x007f
/** Extended key. */
#define VBOXKEY_EXTENDED            0x0080
/** Modifier key. */
#define VBOXKEY_MODIFIER            0x0400
/** Lock key (like num lock and caps lock). */
#define VBOXKEY_LOCK                0x0800

unsigned DarwinKeycodeToSet1Scancode(unsigned uKeyCode);
UInt32   DarwinAdjustModifierMask(UInt32 fModifiers, const void *pvCocoaEvent);
unsigned DarwinModifierMaskToSet1Scancode(UInt32 fModifiers);
unsigned DarwinModifierMaskToDarwinKeycode(UInt32 fModifiers);
UInt32   DarwinKeyCodeToDarwinModifierMask(unsigned uKeyCode);
void     DarwinDisableGlobalHotKeys(bool fDisable);
void     DarwinGrabKeyboard(bool fGlobalHotkeys);
void     DarwinReleaseKeyboard(void);

__END_DECLS

#endif

