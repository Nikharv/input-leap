/********************************************************************************
** Form generated from reading UI file 'ServerConfigDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERCONFIGDIALOG_H
#define UI_SERVERCONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "NewScreenWidget.h"
#include "ScreenSetupView.h"
#include "TrashScreenWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ServerConfigDialog
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *m_pTabWidget;
    QWidget *m_pTabScreens;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    TrashScreenWidget *m_pTrashScreenWidget;
    QLabel *label_2;
    NewScreenWidget *m_pLabelNewScreenWidget;
    ScreenSetupView *m_pScreenSetupView;
    QLabel *label_3;
    QSpacerItem *spacerItem;
    QWidget *m_pTabHotkeys;
    QHBoxLayout *hboxLayout1;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QListWidget *m_pListHotkeys;
    QPushButton *m_pButtonNewHotkey;
    QPushButton *m_pButtonEditHotkey;
    QPushButton *m_pButtonRemoveHotkey;
    QSpacerItem *spacerItem1;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    QListWidget *m_pListActions;
    QPushButton *m_pButtonNewAction;
    QPushButton *m_pButtonEditAction;
    QPushButton *m_pButtonRemoveAction;
    QSpacerItem *spacerItem2;
    QWidget *m_pTabAdvanced;
    QGridLayout *gridLayout2;
    QGroupBox *m_pGroupSwitch;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout2;
    QCheckBox *m_pCheckBoxSwitchDelay;
    QSpacerItem *spacerItem3;
    QSpinBox *m_pSpinBoxSwitchDelay;
    QLabel *m_pLabel_14;
    QVBoxLayout *vboxLayout3;
    QHBoxLayout *hboxLayout3;
    QCheckBox *m_pCheckBoxSwitchDoubleTap;
    QSpacerItem *spacerItem4;
    QSpinBox *m_pSpinBoxSwitchDoubleTap;
    QLabel *m_pLabel_15;
    QLabel *label_4;
    QSpacerItem *spacerItem5;
    QGroupBox *m_pGroupOptions;
    QGridLayout *gridLayout3;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout;
    QLabel *m_pLabelSharingSize;
    QSpinBox *m_pSpinBoxClipboardSizeLimit;
    QCheckBox *m_pCheckBoxWin32KeepForeground;
    QCheckBox *m_pCheckBoxRelativeMouseMoves;
    QCheckBox *m_pCheckBoxScreenSaverSync;
    QHBoxLayout *hboxLayout4;
    QCheckBox *m_pCheckBoxHeartbeat;
    QSpacerItem *spacerItem6;
    QSpinBox *m_pSpinBoxHeartbeat;
    QLabel *m_pLabel_16;
    QSpacerItem *spacerItem7;
    QCheckBox *m_pCheckBoxEnableDragAndDrop;
    QCheckBox *m_pCheckBoxIgnoreAutoConfigClient;
    QCheckBox *m_pCheckBoxEnableClipboard;
    QGroupBox *m_pGroupSwitchCorners;
    QGridLayout *gridLayout4;
    QCheckBox *m_pCheckBoxCornerTopLeft;
    QCheckBox *m_pCheckBoxCornerTopRight;
    QCheckBox *m_pCheckBoxCornerBottomLeft;
    QCheckBox *m_pCheckBoxCornerBottomRight;
    QSpacerItem *spacerItem8;
    QHBoxLayout *hboxLayout5;
    QLabel *label;
    QSpinBox *m_pSpinBoxSwitchCornerSize;
    QSpacerItem *spacerItem9;
    QSpacerItem *spacerItem10;
    QDialogButtonBox *m_pButtonBox;

    void setupUi(QDialog *ServerConfigDialog)
    {
        if (ServerConfigDialog->objectName().isEmpty())
            ServerConfigDialog->setObjectName("ServerConfigDialog");
        ServerConfigDialog->resize(816, 545);
        vboxLayout = new QVBoxLayout(ServerConfigDialog);
        vboxLayout->setObjectName("vboxLayout");
        m_pTabWidget = new QTabWidget(ServerConfigDialog);
        m_pTabWidget->setObjectName("m_pTabWidget");
        m_pTabScreens = new QWidget();
        m_pTabScreens->setObjectName("m_pTabScreens");
        vboxLayout1 = new QVBoxLayout(m_pTabScreens);
        vboxLayout1->setObjectName("vboxLayout1");
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName("hboxLayout");
        m_pTrashScreenWidget = new TrashScreenWidget(m_pTabScreens);
        m_pTrashScreenWidget->setObjectName("m_pTrashScreenWidget");
        m_pTrashScreenWidget->setAcceptDrops(true);
        m_pTrashScreenWidget->setFrameShape(QFrame::StyledPanel);
        m_pTrashScreenWidget->setFrameShadow(QFrame::Raised);
        m_pTrashScreenWidget->setPixmap(QPixmap(QString::fromUtf8(":/res/icons/64x64/user-trash.png")));

        hboxLayout->addWidget(m_pTrashScreenWidget);

        label_2 = new QLabel(m_pTabScreens);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        hboxLayout->addWidget(label_2);

        m_pLabelNewScreenWidget = new NewScreenWidget(m_pTabScreens);
        m_pLabelNewScreenWidget->setObjectName("m_pLabelNewScreenWidget");
        m_pLabelNewScreenWidget->setFrameShape(QFrame::StyledPanel);
        m_pLabelNewScreenWidget->setFrameShadow(QFrame::Raised);
        m_pLabelNewScreenWidget->setPixmap(QPixmap(QString::fromUtf8(":/res/icons/64x64/video-display.png")));

        hboxLayout->addWidget(m_pLabelNewScreenWidget);


        vboxLayout1->addLayout(hboxLayout);

        m_pScreenSetupView = new ScreenSetupView(m_pTabScreens);
        m_pScreenSetupView->setObjectName("m_pScreenSetupView");
        m_pScreenSetupView->setMinimumSize(QSize(0, 273));
        m_pScreenSetupView->setMaximumSize(QSize(16777215, 273));
        m_pScreenSetupView->setAcceptDrops(true);
        m_pScreenSetupView->setAutoFillBackground(false);
        m_pScreenSetupView->setFrameShape(QFrame::StyledPanel);
        m_pScreenSetupView->setFrameShadow(QFrame::Sunken);

        vboxLayout1->addWidget(m_pScreenSetupView);

        label_3 = new QLabel(m_pTabScreens);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(true);

        vboxLayout1->addWidget(label_3);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        vboxLayout1->addItem(spacerItem);

        m_pTabWidget->addTab(m_pTabScreens, QString());
        m_pTabHotkeys = new QWidget();
        m_pTabHotkeys->setObjectName("m_pTabHotkeys");
        hboxLayout1 = new QHBoxLayout(m_pTabHotkeys);
        hboxLayout1->setObjectName("hboxLayout1");
        groupBox = new QGroupBox(m_pTabHotkeys);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        m_pListHotkeys = new QListWidget(groupBox);
        m_pListHotkeys->setObjectName("m_pListHotkeys");

        gridLayout->addWidget(m_pListHotkeys, 0, 0, 4, 1);

        m_pButtonNewHotkey = new QPushButton(groupBox);
        m_pButtonNewHotkey->setObjectName("m_pButtonNewHotkey");
        m_pButtonNewHotkey->setEnabled(true);

        gridLayout->addWidget(m_pButtonNewHotkey, 0, 1, 1, 1);

        m_pButtonEditHotkey = new QPushButton(groupBox);
        m_pButtonEditHotkey->setObjectName("m_pButtonEditHotkey");
        m_pButtonEditHotkey->setEnabled(false);

        gridLayout->addWidget(m_pButtonEditHotkey, 1, 1, 1, 1);

        m_pButtonRemoveHotkey = new QPushButton(groupBox);
        m_pButtonRemoveHotkey->setObjectName("m_pButtonRemoveHotkey");
        m_pButtonRemoveHotkey->setEnabled(false);

        gridLayout->addWidget(m_pButtonRemoveHotkey, 2, 1, 1, 1);

        spacerItem1 = new QSpacerItem(75, 161, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(spacerItem1, 3, 1, 1, 1);


        hboxLayout1->addWidget(groupBox);

        groupBox_2 = new QGroupBox(m_pTabHotkeys);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout1 = new QGridLayout(groupBox_2);
        gridLayout1->setObjectName("gridLayout1");
        m_pListActions = new QListWidget(groupBox_2);
        m_pListActions->setObjectName("m_pListActions");

        gridLayout1->addWidget(m_pListActions, 0, 0, 4, 1);

        m_pButtonNewAction = new QPushButton(groupBox_2);
        m_pButtonNewAction->setObjectName("m_pButtonNewAction");
        m_pButtonNewAction->setEnabled(false);

        gridLayout1->addWidget(m_pButtonNewAction, 0, 1, 1, 1);

        m_pButtonEditAction = new QPushButton(groupBox_2);
        m_pButtonEditAction->setObjectName("m_pButtonEditAction");
        m_pButtonEditAction->setEnabled(false);

        gridLayout1->addWidget(m_pButtonEditAction, 1, 1, 1, 1);

        m_pButtonRemoveAction = new QPushButton(groupBox_2);
        m_pButtonRemoveAction->setObjectName("m_pButtonRemoveAction");
        m_pButtonRemoveAction->setEnabled(false);

        gridLayout1->addWidget(m_pButtonRemoveAction, 2, 1, 1, 1);

        spacerItem2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout1->addItem(spacerItem2, 3, 1, 1, 1);


        hboxLayout1->addWidget(groupBox_2);

        m_pTabWidget->addTab(m_pTabHotkeys, QString());
        m_pTabAdvanced = new QWidget();
        m_pTabAdvanced->setObjectName("m_pTabAdvanced");
        gridLayout2 = new QGridLayout(m_pTabAdvanced);
        gridLayout2->setObjectName("gridLayout2");
        m_pGroupSwitch = new QGroupBox(m_pTabAdvanced);
        m_pGroupSwitch->setObjectName("m_pGroupSwitch");
        vboxLayout2 = new QVBoxLayout(m_pGroupSwitch);
        vboxLayout2->setObjectName("vboxLayout2");
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName("hboxLayout2");
        m_pCheckBoxSwitchDelay = new QCheckBox(m_pGroupSwitch);
        m_pCheckBoxSwitchDelay->setObjectName("m_pCheckBoxSwitchDelay");
        m_pCheckBoxSwitchDelay->setEnabled(true);

        hboxLayout2->addWidget(m_pCheckBoxSwitchDelay);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout2->addItem(spacerItem3);

        m_pSpinBoxSwitchDelay = new QSpinBox(m_pGroupSwitch);
        m_pSpinBoxSwitchDelay->setObjectName("m_pSpinBoxSwitchDelay");
        m_pSpinBoxSwitchDelay->setEnabled(false);
        m_pSpinBoxSwitchDelay->setMinimum(10);
        m_pSpinBoxSwitchDelay->setMaximum(10000);
        m_pSpinBoxSwitchDelay->setSingleStep(10);
        m_pSpinBoxSwitchDelay->setValue(250);

        hboxLayout2->addWidget(m_pSpinBoxSwitchDelay);

        m_pLabel_14 = new QLabel(m_pGroupSwitch);
        m_pLabel_14->setObjectName("m_pLabel_14");

        hboxLayout2->addWidget(m_pLabel_14);


        vboxLayout2->addLayout(hboxLayout2);

        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setObjectName("vboxLayout3");
        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName("hboxLayout3");
        m_pCheckBoxSwitchDoubleTap = new QCheckBox(m_pGroupSwitch);
        m_pCheckBoxSwitchDoubleTap->setObjectName("m_pCheckBoxSwitchDoubleTap");
        m_pCheckBoxSwitchDoubleTap->setEnabled(true);

        hboxLayout3->addWidget(m_pCheckBoxSwitchDoubleTap);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout3->addItem(spacerItem4);

        m_pSpinBoxSwitchDoubleTap = new QSpinBox(m_pGroupSwitch);
        m_pSpinBoxSwitchDoubleTap->setObjectName("m_pSpinBoxSwitchDoubleTap");
        m_pSpinBoxSwitchDoubleTap->setEnabled(false);
        m_pSpinBoxSwitchDoubleTap->setMinimum(10);
        m_pSpinBoxSwitchDoubleTap->setMaximum(10000);
        m_pSpinBoxSwitchDoubleTap->setSingleStep(10);
        m_pSpinBoxSwitchDoubleTap->setValue(250);

        hboxLayout3->addWidget(m_pSpinBoxSwitchDoubleTap);

        m_pLabel_15 = new QLabel(m_pGroupSwitch);
        m_pLabel_15->setObjectName("m_pLabel_15");

        hboxLayout3->addWidget(m_pLabel_15);


        vboxLayout3->addLayout(hboxLayout3);

        label_4 = new QLabel(m_pGroupSwitch);
        label_4->setObjectName("label_4");
        label_4->setWordWrap(true);

        vboxLayout3->addWidget(label_4);


        vboxLayout2->addLayout(vboxLayout3);

        spacerItem5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        vboxLayout2->addItem(spacerItem5);


        gridLayout2->addWidget(m_pGroupSwitch, 0, 0, 1, 1);

        m_pGroupOptions = new QGroupBox(m_pTabAdvanced);
        m_pGroupOptions->setObjectName("m_pGroupOptions");
        gridLayout3 = new QGridLayout(m_pGroupOptions);
        gridLayout3->setObjectName("gridLayout3");
        groupBox_3 = new QGroupBox(m_pGroupOptions);
        groupBox_3->setObjectName("groupBox_3");
        horizontalLayout = new QHBoxLayout(groupBox_3);
        horizontalLayout->setObjectName("horizontalLayout");
        m_pLabelSharingSize = new QLabel(groupBox_3);
        m_pLabelSharingSize->setObjectName("m_pLabelSharingSize");

        horizontalLayout->addWidget(m_pLabelSharingSize);

        m_pSpinBoxClipboardSizeLimit = new QSpinBox(groupBox_3);
        m_pSpinBoxClipboardSizeLimit->setObjectName("m_pSpinBoxClipboardSizeLimit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_pSpinBoxClipboardSizeLimit->sizePolicy().hasHeightForWidth());
        m_pSpinBoxClipboardSizeLimit->setSizePolicy(sizePolicy1);
        m_pSpinBoxClipboardSizeLimit->setToolTipDuration(-3);
        m_pSpinBoxClipboardSizeLimit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        m_pSpinBoxClipboardSizeLimit->setMinimum(1000000);
        m_pSpinBoxClipboardSizeLimit->setMaximum(100000000);
        m_pSpinBoxClipboardSizeLimit->setSingleStep(1000);
        m_pSpinBoxClipboardSizeLimit->setValue(3000000);

        horizontalLayout->addWidget(m_pSpinBoxClipboardSizeLimit);


        gridLayout3->addWidget(groupBox_3, 7, 0, 1, 1);

        m_pCheckBoxWin32KeepForeground = new QCheckBox(m_pGroupOptions);
        m_pCheckBoxWin32KeepForeground->setObjectName("m_pCheckBoxWin32KeepForeground");
        m_pCheckBoxWin32KeepForeground->setEnabled(true);

        gridLayout3->addWidget(m_pCheckBoxWin32KeepForeground, 3, 0, 1, 1);

        m_pCheckBoxRelativeMouseMoves = new QCheckBox(m_pGroupOptions);
        m_pCheckBoxRelativeMouseMoves->setObjectName("m_pCheckBoxRelativeMouseMoves");
        m_pCheckBoxRelativeMouseMoves->setEnabled(true);

        gridLayout3->addWidget(m_pCheckBoxRelativeMouseMoves, 1, 0, 1, 1);

        m_pCheckBoxScreenSaverSync = new QCheckBox(m_pGroupOptions);
        m_pCheckBoxScreenSaverSync->setObjectName("m_pCheckBoxScreenSaverSync");
        m_pCheckBoxScreenSaverSync->setEnabled(true);

        gridLayout3->addWidget(m_pCheckBoxScreenSaverSync, 2, 0, 1, 1);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName("hboxLayout4");
        m_pCheckBoxHeartbeat = new QCheckBox(m_pGroupOptions);
        m_pCheckBoxHeartbeat->setObjectName("m_pCheckBoxHeartbeat");
        m_pCheckBoxHeartbeat->setEnabled(true);

        hboxLayout4->addWidget(m_pCheckBoxHeartbeat);

        spacerItem6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout4->addItem(spacerItem6);

        m_pSpinBoxHeartbeat = new QSpinBox(m_pGroupOptions);
        m_pSpinBoxHeartbeat->setObjectName("m_pSpinBoxHeartbeat");
        m_pSpinBoxHeartbeat->setEnabled(false);
        m_pSpinBoxHeartbeat->setMinimum(1000);
        m_pSpinBoxHeartbeat->setMaximum(30000);
        m_pSpinBoxHeartbeat->setSingleStep(1000);
        m_pSpinBoxHeartbeat->setValue(5000);

        hboxLayout4->addWidget(m_pSpinBoxHeartbeat);

        m_pLabel_16 = new QLabel(m_pGroupOptions);
        m_pLabel_16->setObjectName("m_pLabel_16");

        hboxLayout4->addWidget(m_pLabel_16);


        gridLayout3->addLayout(hboxLayout4, 0, 0, 1, 1);

        spacerItem7 = new QSpacerItem(20, 16, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout3->addItem(spacerItem7, 9, 0, 1, 1);

        m_pCheckBoxEnableDragAndDrop = new QCheckBox(m_pGroupOptions);
        m_pCheckBoxEnableDragAndDrop->setObjectName("m_pCheckBoxEnableDragAndDrop");

        gridLayout3->addWidget(m_pCheckBoxEnableDragAndDrop, 5, 0, 1, 1);

        m_pCheckBoxIgnoreAutoConfigClient = new QCheckBox(m_pGroupOptions);
        m_pCheckBoxIgnoreAutoConfigClient->setObjectName("m_pCheckBoxIgnoreAutoConfigClient");

        gridLayout3->addWidget(m_pCheckBoxIgnoreAutoConfigClient, 4, 0, 1, 1);

        m_pCheckBoxEnableClipboard = new QCheckBox(m_pGroupOptions);
        m_pCheckBoxEnableClipboard->setObjectName("m_pCheckBoxEnableClipboard");
        m_pCheckBoxEnableClipboard->setChecked(true);

        gridLayout3->addWidget(m_pCheckBoxEnableClipboard, 6, 0, 1, 1);


        gridLayout2->addWidget(m_pGroupOptions, 0, 1, 1, 1);

        m_pGroupSwitchCorners = new QGroupBox(m_pTabAdvanced);
        m_pGroupSwitchCorners->setObjectName("m_pGroupSwitchCorners");
        m_pGroupSwitchCorners->setChecked(false);
        gridLayout4 = new QGridLayout(m_pGroupSwitchCorners);
        gridLayout4->setObjectName("gridLayout4");
        m_pCheckBoxCornerTopLeft = new QCheckBox(m_pGroupSwitchCorners);
        m_pCheckBoxCornerTopLeft->setObjectName("m_pCheckBoxCornerTopLeft");

        gridLayout4->addWidget(m_pCheckBoxCornerTopLeft, 0, 0, 1, 2);

        m_pCheckBoxCornerTopRight = new QCheckBox(m_pGroupSwitchCorners);
        m_pCheckBoxCornerTopRight->setObjectName("m_pCheckBoxCornerTopRight");

        gridLayout4->addWidget(m_pCheckBoxCornerTopRight, 0, 2, 1, 2);

        m_pCheckBoxCornerBottomLeft = new QCheckBox(m_pGroupSwitchCorners);
        m_pCheckBoxCornerBottomLeft->setObjectName("m_pCheckBoxCornerBottomLeft");

        gridLayout4->addWidget(m_pCheckBoxCornerBottomLeft, 1, 0, 1, 2);

        m_pCheckBoxCornerBottomRight = new QCheckBox(m_pGroupSwitchCorners);
        m_pCheckBoxCornerBottomRight->setObjectName("m_pCheckBoxCornerBottomRight");

        gridLayout4->addWidget(m_pCheckBoxCornerBottomRight, 1, 2, 1, 2);

        spacerItem8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout4->addItem(spacerItem8, 2, 0, 1, 1);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName("hboxLayout5");
        label = new QLabel(m_pGroupSwitchCorners);
        label->setObjectName("label");

        hboxLayout5->addWidget(label);

        m_pSpinBoxSwitchCornerSize = new QSpinBox(m_pGroupSwitchCorners);
        m_pSpinBoxSwitchCornerSize->setObjectName("m_pSpinBoxSwitchCornerSize");
        m_pSpinBoxSwitchCornerSize->setMaximum(9999);

        hboxLayout5->addWidget(m_pSpinBoxSwitchCornerSize);


        gridLayout4->addLayout(hboxLayout5, 2, 1, 1, 2);

        spacerItem9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout4->addItem(spacerItem9, 2, 3, 1, 1);


        gridLayout2->addWidget(m_pGroupSwitchCorners, 1, 0, 1, 2);

        spacerItem10 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout2->addItem(spacerItem10, 2, 0, 1, 1);

        m_pTabWidget->addTab(m_pTabAdvanced, QString());

        vboxLayout->addWidget(m_pTabWidget);

        m_pButtonBox = new QDialogButtonBox(ServerConfigDialog);
        m_pButtonBox->setObjectName("m_pButtonBox");
        m_pButtonBox->setOrientation(Qt::Horizontal);
        m_pButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(m_pButtonBox);

#if QT_CONFIG(shortcut)
        label->setBuddy(m_pSpinBoxSwitchCornerSize);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ServerConfigDialog);
        QObject::connect(m_pButtonBox, &QDialogButtonBox::accepted, ServerConfigDialog, qOverload<>(&QDialog::accept));
        QObject::connect(m_pButtonBox, &QDialogButtonBox::rejected, ServerConfigDialog, qOverload<>(&QDialog::reject));
        QObject::connect(m_pCheckBoxSwitchDelay, &QCheckBox::toggled, m_pSpinBoxSwitchDelay, &QSpinBox::setEnabled);
        QObject::connect(m_pCheckBoxSwitchDoubleTap, &QCheckBox::toggled, m_pSpinBoxSwitchDoubleTap, &QSpinBox::setEnabled);
        QObject::connect(m_pCheckBoxHeartbeat, &QCheckBox::toggled, m_pSpinBoxHeartbeat, &QSpinBox::setEnabled);
        QObject::connect(m_pListHotkeys, &QListWidget::itemDoubleClicked, m_pButtonEditHotkey, qOverload<>(&QPushButton::click));
        QObject::connect(m_pListActions, &QListWidget::itemDoubleClicked, m_pButtonEditAction, qOverload<>(&QPushButton::click));

        QMetaObject::connectSlotsByName(ServerConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *ServerConfigDialog)
    {
        ServerConfigDialog->setWindowTitle(QCoreApplication::translate("ServerConfigDialog", "Server Configuration", nullptr));
#if QT_CONFIG(tooltip)
        m_pTrashScreenWidget->setToolTip(QCoreApplication::translate("ServerConfigDialog", "Drag a screen from the grid to the trashcan to remove it.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_pTrashScreenWidget->setText(QString());
        label_2->setText(QCoreApplication::translate("ServerConfigDialog", "Configure the layout of your InputLeap server configuration.", nullptr));
#if QT_CONFIG(tooltip)
        m_pLabelNewScreenWidget->setToolTip(QCoreApplication::translate("ServerConfigDialog", "Drag this button to the grid to add a new screen.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_pLabelNewScreenWidget->setText(QString());
        label_3->setText(QCoreApplication::translate("ServerConfigDialog", "Drag new screens to the grid or move existing ones around.\n"
"Drag a screen to the trashcan to delete it.\n"
"Double click on a screen to edit its settings.", nullptr));
        m_pTabWidget->setTabText(m_pTabWidget->indexOf(m_pTabScreens), QCoreApplication::translate("ServerConfigDialog", "Screens and links", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ServerConfigDialog", "&Hotkeys", nullptr));
        m_pButtonNewHotkey->setText(QCoreApplication::translate("ServerConfigDialog", "&New", nullptr));
        m_pButtonEditHotkey->setText(QCoreApplication::translate("ServerConfigDialog", "&Edit", nullptr));
        m_pButtonRemoveHotkey->setText(QCoreApplication::translate("ServerConfigDialog", "&Remove", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ServerConfigDialog", "A&ctions", nullptr));
        m_pButtonNewAction->setText(QCoreApplication::translate("ServerConfigDialog", "Ne&w", nullptr));
        m_pButtonEditAction->setText(QCoreApplication::translate("ServerConfigDialog", "E&dit", nullptr));
        m_pButtonRemoveAction->setText(QCoreApplication::translate("ServerConfigDialog", "Re&move", nullptr));
        m_pTabWidget->setTabText(m_pTabWidget->indexOf(m_pTabHotkeys), QCoreApplication::translate("ServerConfigDialog", "Hotkeys", nullptr));
        m_pGroupSwitch->setTitle(QCoreApplication::translate("ServerConfigDialog", "&Switch", nullptr));
        m_pCheckBoxSwitchDelay->setText(QCoreApplication::translate("ServerConfigDialog", "Switch &after waiting", nullptr));
        m_pLabel_14->setText(QCoreApplication::translate("ServerConfigDialog", "ms", nullptr));
        m_pCheckBoxSwitchDoubleTap->setText(QCoreApplication::translate("ServerConfigDialog", "Switch on double &tap within", nullptr));
        m_pLabel_15->setText(QCoreApplication::translate("ServerConfigDialog", "ms", nullptr));
        label_4->setText(QCoreApplication::translate("ServerConfigDialog", "Bump against the screen edge with the mouse pointer twice in quick succession.", nullptr));
        m_pGroupOptions->setTitle(QCoreApplication::translate("ServerConfigDialog", "&Options", nullptr));
        groupBox_3->setTitle(QString());
        m_pLabelSharingSize->setText(QCoreApplication::translate("ServerConfigDialog", "Max Clipboard sharing size", nullptr));
#if QT_CONFIG(tooltip)
        m_pSpinBoxClipboardSizeLimit->setToolTip(QCoreApplication::translate("ServerConfigDialog", "Clipboard sharing size in bytes", nullptr));
#endif // QT_CONFIG(tooltip)
        m_pCheckBoxWin32KeepForeground->setText(QCoreApplication::translate("ServerConfigDialog", "Don't take &foreground window on Windows servers", nullptr));
        m_pCheckBoxRelativeMouseMoves->setText(QCoreApplication::translate("ServerConfigDialog", "Use &relative mouse moves", nullptr));
        m_pCheckBoxScreenSaverSync->setText(QCoreApplication::translate("ServerConfigDialog", "S&ynchronize screen savers", nullptr));
        m_pCheckBoxHeartbeat->setText(QCoreApplication::translate("ServerConfigDialog", "&Check clients every", nullptr));
        m_pLabel_16->setText(QCoreApplication::translate("ServerConfigDialog", "ms", nullptr));
        m_pCheckBoxEnableDragAndDrop->setText(QCoreApplication::translate("ServerConfigDialog", "Enable drag and drop file transfers", nullptr));
        m_pCheckBoxIgnoreAutoConfigClient->setText(QCoreApplication::translate("ServerConfigDialog", "Ignore auto config clients", nullptr));
        m_pCheckBoxEnableClipboard->setText(QCoreApplication::translate("ServerConfigDialog", "Enable clipboard sharing", nullptr));
        m_pGroupSwitchCorners->setTitle(QCoreApplication::translate("ServerConfigDialog", "&Dead corners", nullptr));
        m_pCheckBoxCornerTopLeft->setText(QCoreApplication::translate("ServerConfigDialog", "To&p-left", nullptr));
        m_pCheckBoxCornerTopRight->setText(QCoreApplication::translate("ServerConfigDialog", "Top-rig&ht", nullptr));
        m_pCheckBoxCornerBottomLeft->setText(QCoreApplication::translate("ServerConfigDialog", "&Bottom-left", nullptr));
        m_pCheckBoxCornerBottomRight->setText(QCoreApplication::translate("ServerConfigDialog", "Bottom-ri&ght", nullptr));
        label->setText(QCoreApplication::translate("ServerConfigDialog", "Cor&ner Size:", nullptr));
        m_pTabWidget->setTabText(m_pTabWidget->indexOf(m_pTabAdvanced), QCoreApplication::translate("ServerConfigDialog", "Advanced server settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServerConfigDialog: public Ui_ServerConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERCONFIGDIALOG_H
