/* $Id$ */
/** @file
 * VBox Qt GUI - UIInformation class declaration.
 */

/*
 * Copyright (C) 2016 Oracle Corporation
 *
 * This file is part of VirtualBox Open Source Edition (OSE), as
 * available from http://www.virtualbox.org. This file is free software;
 * you can redistribute it and/or modify it under the terms of the GNU
 * General Public License (GPL) as published by the Free Software
 * Foundation, in version 2 as it comes in the "COPYING" file of the
 * VirtualBox OSE distribution. VirtualBox OSE is distributed in the
 * hope that it will be useful, but WITHOUT ANY WARRANTY of any kind.
 */

#ifndef ___UIInformation_h___
#define ___UIInformation_h___

/* Qt includes: */
#include <QWidget>
#include <QListView>

/* COM includes: */
#include "COMEnums.h"
#include "CMachine.h"
#include "CConsole.h"

/* Forward declarations: */
class QVBoxLayout;
class UIInformationView;
class UIInformationModel;

/** QWidget extension
  * providing GUI with configuration-information tab in session-information window. */
class UIInformation : public QWidget
{
    Q_OBJECT;

public:

    /** Constructs information-tab passing @a pParent to the QWidget base-class constructor.
      * @param machine is machine reference.
      * @param console is machine console reference. */
    UIInformation(QWidget *pParent, const CMachine &machine, const CConsole &console);

private:

    /** Prepares main-layout. */
    void prepareMainLayout();

    /** Prepares model. */
    void prepareModel();

    /** Prepares view. */
    void prepareView();

    /** Holds the machine instance. */
    CMachine m_machine;
    /** Holds the console instance. */
    CConsole m_console;
    /** Holds the instance of main-layout we create. */
    QVBoxLayout *m_pMainLayout;
    /** Holds the instance of model we create. */
    UIInformationModel *m_pModel;
    /** Holds the instance of view we create. */
    UIInformationView *m_pView;
};

#endif /* !___UIInformation_h___ */

