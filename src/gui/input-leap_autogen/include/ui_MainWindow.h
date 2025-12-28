/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *m_pActionAbout;
    QAction *m_pActionQuit;
    QAction *m_pActionStartCmdApp;
    QAction *m_pActionStopCmdApp;
    QAction *m_pActionMinimize;
    QAction *m_pActionRestore;
    QAction *m_pActionSave;
    QAction *m_pActionSettings;
    QAction *m_pActionShowLog;
    QAction *m_pActionSendFile;
    QAction *m_pActionReload;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *m_pGroupServer;
    QVBoxLayout *vboxLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *m_pLabelIpAddresses;
    QRadioButton *m_pRadioInternalConfig;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *m_pButtonConfigureServer;
    QSpacerItem *spacerItem;
    QRadioButton *m_pRadioExternalConfig;
    QHBoxLayout *hboxLayout;
    QLabel *m_pLabelConfigurationFile;
    QLineEdit *m_pLineEditConfigFile;
    QPushButton *m_pButtonBrowseConfigFile;
    QGroupBox *m_pGroupClient;
    QFormLayout *formLayout_3;
    QLabel *label_5;
    QLabel *m_pLabelScreenName;
    QLabel *m_pLabelServerName;
    QLineEdit *m_pLineEditHostname;
    QCheckBox *m_pCheckBoxAutoConfig;
    QComboBox *m_pComboServerList;
    QHBoxLayout *horizontalLayout_3;
    QLabel *m_pLabelFingerprint;
    QLabel *m_pLabelLocalFingerprint;
    QToolButton *toolbutton_show_fingerprint;
    QFrame *frame_fingerprint_details;
    QGridLayout *gridLayout;
    QLabel *label_sha256_randomart;
    QLabel *label_sha1;
    QLabel *label_sha1_fingerprint_full;
    QLabel *label_sha256;
    QLabel *label_sha256_fingerprint_full;
    QHBoxLayout *horizontalLayout;
    QLabel *m_pLabelPadlock;
    QLabel *m_pStatusLabel;
    QSpacerItem *spacer;
    QPushButton *m_pButtonReload;
    QPushButton *m_pButtonToggleStart;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        m_pActionAbout = new QAction(MainWindow);
        m_pActionAbout->setObjectName("m_pActionAbout");
#if QT_CONFIG(shortcut)
        m_pActionAbout->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        m_pActionAbout->setMenuRole(QAction::AboutRole);
        m_pActionQuit = new QAction(MainWindow);
        m_pActionQuit->setObjectName("m_pActionQuit");
#if QT_CONFIG(shortcut)
        m_pActionQuit->setShortcut(QString::fromUtf8("Ctrl+Q"));
#endif // QT_CONFIG(shortcut)
        m_pActionQuit->setMenuRole(QAction::QuitRole);
        m_pActionStartCmdApp = new QAction(MainWindow);
        m_pActionStartCmdApp->setObjectName("m_pActionStartCmdApp");
#if QT_CONFIG(shortcut)
        m_pActionStartCmdApp->setShortcut(QString::fromUtf8("Ctrl+S"));
#endif // QT_CONFIG(shortcut)
        m_pActionStopCmdApp = new QAction(MainWindow);
        m_pActionStopCmdApp->setObjectName("m_pActionStopCmdApp");
        m_pActionStopCmdApp->setEnabled(false);
#if QT_CONFIG(shortcut)
        m_pActionStopCmdApp->setShortcut(QString::fromUtf8("Ctrl+T"));
#endif // QT_CONFIG(shortcut)
        m_pActionMinimize = new QAction(MainWindow);
        m_pActionMinimize->setObjectName("m_pActionMinimize");
#if QT_CONFIG(shortcut)
        m_pActionMinimize->setShortcut(QString::fromUtf8("F5"));
#endif // QT_CONFIG(shortcut)
        m_pActionRestore = new QAction(MainWindow);
        m_pActionRestore->setObjectName("m_pActionRestore");
#if QT_CONFIG(shortcut)
        m_pActionRestore->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        m_pActionSave = new QAction(MainWindow);
        m_pActionSave->setObjectName("m_pActionSave");
#if QT_CONFIG(shortcut)
        m_pActionSave->setShortcut(QString::fromUtf8("Ctrl+Alt+S"));
#endif // QT_CONFIG(shortcut)
        m_pActionSettings = new QAction(MainWindow);
        m_pActionSettings->setObjectName("m_pActionSettings");
#if QT_CONFIG(shortcut)
        m_pActionSettings->setShortcut(QString::fromUtf8("F4"));
#endif // QT_CONFIG(shortcut)
        m_pActionSettings->setMenuRole(QAction::PreferencesRole);
        m_pActionShowLog = new QAction(MainWindow);
        m_pActionShowLog->setObjectName("m_pActionShowLog");
#if QT_CONFIG(shortcut)
        m_pActionShowLog->setShortcut(QString::fromUtf8("F2"));
#endif // QT_CONFIG(shortcut)
        m_pActionSendFile = new QAction(MainWindow);
        m_pActionSendFile->setObjectName("m_pActionSendFile");
#if QT_CONFIG(shortcut)
        m_pActionSendFile->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        m_pActionSendFile->setMenuRole(QAction::NoRole);
        m_pActionReload = new QAction(MainWindow);
        m_pActionReload->setObjectName("m_pActionReload");
#if QT_CONFIG(shortcut)
        m_pActionReload->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        m_pGroupServer = new QGroupBox(centralwidget);
        m_pGroupServer->setObjectName("m_pGroupServer");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_pGroupServer->sizePolicy().hasHeightForWidth());
        m_pGroupServer->setSizePolicy(sizePolicy1);
        m_pGroupServer->setCheckable(true);
        m_pGroupServer->setChecked(true);
        vboxLayout = new QVBoxLayout(m_pGroupServer);
        vboxLayout->setObjectName("vboxLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_2 = new QLabel(m_pGroupServer);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_2);

        m_pLabelIpAddresses = new QLabel(m_pGroupServer);
        m_pLabelIpAddresses->setObjectName("m_pLabelIpAddresses");
        m_pLabelIpAddresses->setText(QString::fromUtf8(""));

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, m_pLabelIpAddresses);


        vboxLayout->addLayout(formLayout);

        m_pRadioInternalConfig = new QRadioButton(m_pGroupServer);
        m_pRadioInternalConfig->setObjectName("m_pRadioInternalConfig");
        m_pRadioInternalConfig->setChecked(true);

        vboxLayout->addWidget(m_pRadioInternalConfig);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        m_pButtonConfigureServer = new QPushButton(m_pGroupServer);
        m_pButtonConfigureServer->setObjectName("m_pButtonConfigureServer");

        horizontalLayout_4->addWidget(m_pButtonConfigureServer);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(spacerItem);


        vboxLayout->addLayout(horizontalLayout_4);

        m_pRadioExternalConfig = new QRadioButton(m_pGroupServer);
        m_pRadioExternalConfig->setObjectName("m_pRadioExternalConfig");

        vboxLayout->addWidget(m_pRadioExternalConfig);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName("hboxLayout");
        m_pLabelConfigurationFile = new QLabel(m_pGroupServer);
        m_pLabelConfigurationFile->setObjectName("m_pLabelConfigurationFile");

        hboxLayout->addWidget(m_pLabelConfigurationFile);

        m_pLineEditConfigFile = new QLineEdit(m_pGroupServer);
        m_pLineEditConfigFile->setObjectName("m_pLineEditConfigFile");
        m_pLineEditConfigFile->setEnabled(false);

        hboxLayout->addWidget(m_pLineEditConfigFile);

        m_pButtonBrowseConfigFile = new QPushButton(m_pGroupServer);
        m_pButtonBrowseConfigFile->setObjectName("m_pButtonBrowseConfigFile");
        m_pButtonBrowseConfigFile->setEnabled(false);

        hboxLayout->addWidget(m_pButtonBrowseConfigFile);


        vboxLayout->addLayout(hboxLayout);


        verticalLayout_2->addWidget(m_pGroupServer);

        m_pGroupClient = new QGroupBox(centralwidget);
        m_pGroupClient->setObjectName("m_pGroupClient");
        sizePolicy1.setHeightForWidth(m_pGroupClient->sizePolicy().hasHeightForWidth());
        m_pGroupClient->setSizePolicy(sizePolicy1);
        m_pGroupClient->setCheckable(true);
        m_pGroupClient->setChecked(true);
        formLayout_3 = new QFormLayout(m_pGroupClient);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_5 = new QLabel(m_pGroupClient);
        label_5->setObjectName("label_5");

        formLayout_3->setWidget(0, QFormLayout::ItemRole::LabelRole, label_5);

        m_pLabelScreenName = new QLabel(m_pGroupClient);
        m_pLabelScreenName->setObjectName("m_pLabelScreenName");
        m_pLabelScreenName->setText(QString::fromUtf8(""));

        formLayout_3->setWidget(0, QFormLayout::ItemRole::FieldRole, m_pLabelScreenName);

        m_pLabelServerName = new QLabel(m_pGroupClient);
        m_pLabelServerName->setObjectName("m_pLabelServerName");

        formLayout_3->setWidget(2, QFormLayout::ItemRole::LabelRole, m_pLabelServerName);

        m_pLineEditHostname = new QLineEdit(m_pGroupClient);
        m_pLineEditHostname->setObjectName("m_pLineEditHostname");

        formLayout_3->setWidget(2, QFormLayout::ItemRole::FieldRole, m_pLineEditHostname);

        m_pCheckBoxAutoConfig = new QCheckBox(m_pGroupClient);
        m_pCheckBoxAutoConfig->setObjectName("m_pCheckBoxAutoConfig");

        formLayout_3->setWidget(3, QFormLayout::ItemRole::LabelRole, m_pCheckBoxAutoConfig);

        m_pComboServerList = new QComboBox(m_pGroupClient);
        m_pComboServerList->setObjectName("m_pComboServerList");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_pComboServerList->sizePolicy().hasHeightForWidth());
        m_pComboServerList->setSizePolicy(sizePolicy2);
        m_pComboServerList->setMinimumSize(QSize(120, 0));

        formLayout_3->setWidget(3, QFormLayout::ItemRole::FieldRole, m_pComboServerList);


        verticalLayout_2->addWidget(m_pGroupClient);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        m_pLabelFingerprint = new QLabel(centralwidget);
        m_pLabelFingerprint->setObjectName("m_pLabelFingerprint");
        sizePolicy2.setHeightForWidth(m_pLabelFingerprint->sizePolicy().hasHeightForWidth());
        m_pLabelFingerprint->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(m_pLabelFingerprint);

        m_pLabelLocalFingerprint = new QLabel(centralwidget);
        m_pLabelLocalFingerprint->setObjectName("m_pLabelLocalFingerprint");
        m_pLabelLocalFingerprint->setTextFormat(Qt::PlainText);

        horizontalLayout_3->addWidget(m_pLabelLocalFingerprint);

        toolbutton_show_fingerprint = new QToolButton(centralwidget);
        toolbutton_show_fingerprint->setObjectName("toolbutton_show_fingerprint");
        toolbutton_show_fingerprint->setArrowType(Qt::DownArrow);

        horizontalLayout_3->addWidget(toolbutton_show_fingerprint);


        verticalLayout_2->addLayout(horizontalLayout_3);

        frame_fingerprint_details = new QFrame(centralwidget);
        frame_fingerprint_details->setObjectName("frame_fingerprint_details");
        frame_fingerprint_details->setFrameShape(QFrame::StyledPanel);
        frame_fingerprint_details->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_fingerprint_details);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        label_sha256_randomart = new QLabel(frame_fingerprint_details);
        label_sha256_randomart->setObjectName("label_sha256_randomart");
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier")});
        label_sha256_randomart->setFont(font);
        label_sha256_randomart->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_sha256_randomart, 1, 1, 1, 1);

        label_sha1 = new QLabel(frame_fingerprint_details);
        label_sha1->setObjectName("label_sha1");

        gridLayout->addWidget(label_sha1, 2, 0, 1, 2);

        label_sha1_fingerprint_full = new QLabel(frame_fingerprint_details);
        label_sha1_fingerprint_full->setObjectName("label_sha1_fingerprint_full");
        label_sha1_fingerprint_full->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_sha1_fingerprint_full, 3, 0, 1, 2);

        label_sha256 = new QLabel(frame_fingerprint_details);
        label_sha256->setObjectName("label_sha256");

        gridLayout->addWidget(label_sha256, 0, 0, 1, 2);

        label_sha256_fingerprint_full = new QLabel(frame_fingerprint_details);
        label_sha256_fingerprint_full->setObjectName("label_sha256_fingerprint_full");
        label_sha256_fingerprint_full->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_sha256_fingerprint_full, 1, 0, 1, 1);


        verticalLayout_2->addWidget(frame_fingerprint_details);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        m_pLabelPadlock = new QLabel(centralwidget);
        m_pLabelPadlock->setObjectName("m_pLabelPadlock");
        m_pLabelPadlock->setEnabled(true);

        horizontalLayout->addWidget(m_pLabelPadlock);

        m_pStatusLabel = new QLabel(centralwidget);
        m_pStatusLabel->setObjectName("m_pStatusLabel");

        horizontalLayout->addWidget(m_pStatusLabel);

        spacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(spacer);

        m_pButtonReload = new QPushButton(centralwidget);
        m_pButtonReload->setObjectName("m_pButtonReload");
        m_pButtonReload->setEnabled(false);

        horizontalLayout->addWidget(m_pButtonReload);

        m_pButtonToggleStart = new QPushButton(centralwidget);
        m_pButtonToggleStart->setObjectName("m_pButtonToggleStart");

        horizontalLayout->addWidget(m_pButtonToggleStart);


        verticalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
#if QT_CONFIG(shortcut)
        m_pLabelConfigurationFile->setBuddy(m_pLineEditConfigFile);
        m_pLabelServerName->setBuddy(m_pLineEditHostname);
#endif // QT_CONFIG(shortcut)

        retranslateUi(MainWindow);
        QObject::connect(m_pRadioExternalConfig, &QRadioButton::toggled, m_pLineEditConfigFile, &QLineEdit::setEnabled);
        QObject::connect(m_pRadioExternalConfig, &QRadioButton::toggled, m_pButtonBrowseConfigFile, &QPushButton::setEnabled);
        QObject::connect(m_pRadioInternalConfig, &QRadioButton::toggled, m_pButtonConfigureServer, &QPushButton::setEnabled);
        QObject::connect(m_pButtonToggleStart, &QPushButton::clicked, m_pActionStartCmdApp, qOverload<>(&QAction::trigger));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "InputLeap", nullptr));
        m_pActionAbout->setText(QCoreApplication::translate("MainWindow", "&About InputLeap...", nullptr));
        m_pActionQuit->setText(QCoreApplication::translate("MainWindow", "&Quit", nullptr));
#if QT_CONFIG(statustip)
        m_pActionQuit->setStatusTip(QCoreApplication::translate("MainWindow", "Quit", nullptr));
#endif // QT_CONFIG(statustip)
        m_pActionStartCmdApp->setText(QCoreApplication::translate("MainWindow", "&Start", nullptr));
#if QT_CONFIG(statustip)
        m_pActionStartCmdApp->setStatusTip(QCoreApplication::translate("MainWindow", "Run", nullptr));
#endif // QT_CONFIG(statustip)
        m_pActionStopCmdApp->setText(QCoreApplication::translate("MainWindow", "S&top", nullptr));
#if QT_CONFIG(statustip)
        m_pActionStopCmdApp->setStatusTip(QCoreApplication::translate("MainWindow", "Stop", nullptr));
#endif // QT_CONFIG(statustip)
        m_pActionMinimize->setText(QCoreApplication::translate("MainWindow", "&Hide", nullptr));
#if QT_CONFIG(tooltip)
        m_pActionMinimize->setToolTip(QCoreApplication::translate("MainWindow", "Hide", nullptr));
#endif // QT_CONFIG(tooltip)
        m_pActionRestore->setText(QCoreApplication::translate("MainWindow", "&Show", nullptr));
#if QT_CONFIG(tooltip)
        m_pActionRestore->setToolTip(QCoreApplication::translate("MainWindow", "Show", nullptr));
#endif // QT_CONFIG(tooltip)
        m_pActionSave->setText(QCoreApplication::translate("MainWindow", "S&ave configuration", nullptr));
#if QT_CONFIG(statustip)
        m_pActionSave->setStatusTip(QCoreApplication::translate("MainWindow", "Save the interactively generated server configuration to a file.", nullptr));
#endif // QT_CONFIG(statustip)
        m_pActionSettings->setText(QCoreApplication::translate("MainWindow", "Change &Settings", nullptr));
#if QT_CONFIG(statustip)
        m_pActionSettings->setStatusTip(QCoreApplication::translate("MainWindow", "Edit settings", nullptr));
#endif // QT_CONFIG(statustip)
        m_pActionShowLog->setText(QCoreApplication::translate("MainWindow", "Show &Log", nullptr));
#if QT_CONFIG(tooltip)
        m_pActionShowLog->setToolTip(QCoreApplication::translate("MainWindow", "Show Log", nullptr));
#endif // QT_CONFIG(tooltip)
        m_pActionSendFile->setText(QCoreApplication::translate("MainWindow", "Send &File...", nullptr));
#if QT_CONFIG(tooltip)
        m_pActionSendFile->setToolTip(QCoreApplication::translate("MainWindow", "Select a file to upload via configured endpoint", nullptr));
#endif // QT_CONFIG(tooltip)
        m_pActionReload->setText(QCoreApplication::translate("MainWindow", "&Reload", nullptr));
#if QT_CONFIG(tooltip)
        m_pActionReload->setToolTip(QCoreApplication::translate("MainWindow", "Reload app", nullptr));
#endif // QT_CONFIG(tooltip)
        m_pGroupServer->setTitle(QCoreApplication::translate("MainWindow", "Ser&ver (share this computer's mouse and keyboard):", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "IP addresses:", nullptr));
        m_pRadioInternalConfig->setText(QCoreApplication::translate("MainWindow", "Configure interactively:", nullptr));
        m_pButtonConfigureServer->setText(QCoreApplication::translate("MainWindow", "&Configure Server...", nullptr));
        m_pRadioExternalConfig->setText(QCoreApplication::translate("MainWindow", "Use existing configuration:", nullptr));
        m_pLabelConfigurationFile->setText(QCoreApplication::translate("MainWindow", "&Configuration file:", nullptr));
        m_pButtonBrowseConfigFile->setText(QCoreApplication::translate("MainWindow", "&Browse...", nullptr));
        m_pGroupClient->setTitle(QCoreApplication::translate("MainWindow", "&Client (use another computer's mouse and keyboard):", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Screen name:", nullptr));
        m_pLabelServerName->setText(QCoreApplication::translate("MainWindow", "Server I&P:", nullptr));
        m_pCheckBoxAutoConfig->setText(QCoreApplication::translate("MainWindow", "Auto config", nullptr));
        m_pLabelFingerprint->setText(QCoreApplication::translate("MainWindow", "SSL Fingerprint:", nullptr));
        m_pLabelLocalFingerprint->setText(QString());
        toolbutton_show_fingerprint->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_sha256_randomart->setText(QString());
        label_sha1->setText(QCoreApplication::translate("MainWindow", "SHA1 (deprecated, compare to old clients and servers only):", nullptr));
        label_sha1_fingerprint_full->setText(QString());
        label_sha256->setText(QCoreApplication::translate("MainWindow", "SHA256:", nullptr));
        label_sha256_fingerprint_full->setText(QString());
        m_pLabelPadlock->setText(QString());
        m_pStatusLabel->setText(QCoreApplication::translate("MainWindow", "Ready", nullptr));
        m_pButtonReload->setText(QCoreApplication::translate("MainWindow", "&Reload", nullptr));
        m_pButtonToggleStart->setText(QCoreApplication::translate("MainWindow", "&Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
