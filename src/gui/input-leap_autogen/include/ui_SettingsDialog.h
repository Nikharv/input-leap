/********************************************************************************
** Form generated from reading UI file 'SettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *m_pGroupGeneral;
    QFormLayout *formLayout;
    QLabel *m_pLabel_27;
    QComboBox *m_pComboLanguage;
    QLabel *m_pLabel_19;
    QLineEdit *m_pLineEditScreenName;
    QLabel *m_pLabelElevate;
    QComboBox *m_pComboElevate;
    QCheckBox *m_pCheckBoxMinimizeToTray;
    QCheckBox *m_pCheckBoxAutoHide;
    QCheckBox *m_pCheckBoxAutoStart;
    QGroupBox *m_pGroupNetworking;
    QGridLayout *gridLayout_3;
    QLabel *m_pLabel_21;
    QLabel *m_pLabel_20;
    QSpinBox *m_pSpinBoxPort;
    QLineEdit *m_pLineEditInterface;
    QCheckBox *m_pCheckBoxEnableCrypto;
    QCheckBox *checkbox_require_client_certificate;
    QGroupBox *m_pGroupLog;
    QGridLayout *gridLayout_2;
    QCheckBox *m_pCheckBoxLogToFile;
    QPushButton *m_pButtonBrowseLog;
    QComboBox *m_pComboLogLevel;
    QLabel *m_pLabel_3;
    QLineEdit *m_pLineEditLogFilename;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName("SettingsDialog");
        SettingsDialog->resize(400, 0);
        verticalLayout = new QVBoxLayout(SettingsDialog);
        verticalLayout->setObjectName("verticalLayout");
        m_pGroupGeneral = new QGroupBox(SettingsDialog);
        m_pGroupGeneral->setObjectName("m_pGroupGeneral");
        m_pGroupGeneral->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_pGroupGeneral->sizePolicy().hasHeightForWidth());
        m_pGroupGeneral->setSizePolicy(sizePolicy);
        formLayout = new QFormLayout(m_pGroupGeneral);
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        m_pLabel_27 = new QLabel(m_pGroupGeneral);
        m_pLabel_27->setObjectName("m_pLabel_27");
        sizePolicy.setHeightForWidth(m_pLabel_27->sizePolicy().hasHeightForWidth());
        m_pLabel_27->setSizePolicy(sizePolicy);
        m_pLabel_27->setMinimumSize(QSize(75, 0));

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, m_pLabel_27);

        m_pComboLanguage = new QComboBox(m_pGroupGeneral);
        m_pComboLanguage->setObjectName("m_pComboLanguage");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, m_pComboLanguage);

        m_pLabel_19 = new QLabel(m_pGroupGeneral);
        m_pLabel_19->setObjectName("m_pLabel_19");
        m_pLabel_19->setMinimumSize(QSize(75, 0));

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, m_pLabel_19);

        m_pLineEditScreenName = new QLineEdit(m_pGroupGeneral);
        m_pLineEditScreenName->setObjectName("m_pLineEditScreenName");
        m_pLineEditScreenName->setEnabled(true);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, m_pLineEditScreenName);

        m_pLabelElevate = new QLabel(m_pGroupGeneral);
        m_pLabelElevate->setObjectName("m_pLabelElevate");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, m_pLabelElevate);

        m_pComboElevate = new QComboBox(m_pGroupGeneral);
        m_pComboElevate->addItem(QString());
        m_pComboElevate->addItem(QString());
        m_pComboElevate->addItem(QString());
        m_pComboElevate->setObjectName("m_pComboElevate");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, m_pComboElevate);

        m_pCheckBoxMinimizeToTray = new QCheckBox(m_pGroupGeneral);
        m_pCheckBoxMinimizeToTray->setObjectName("m_pCheckBoxMinimizeToTray");

        formLayout->setWidget(3, QFormLayout::ItemRole::SpanningRole, m_pCheckBoxMinimizeToTray);

        m_pCheckBoxAutoHide = new QCheckBox(m_pGroupGeneral);
        m_pCheckBoxAutoHide->setObjectName("m_pCheckBoxAutoHide");

        formLayout->setWidget(4, QFormLayout::ItemRole::SpanningRole, m_pCheckBoxAutoHide);

        m_pCheckBoxAutoStart = new QCheckBox(m_pGroupGeneral);
        m_pCheckBoxAutoStart->setObjectName("m_pCheckBoxAutoStart");

        formLayout->setWidget(5, QFormLayout::ItemRole::SpanningRole, m_pCheckBoxAutoStart);


        verticalLayout->addWidget(m_pGroupGeneral);

        m_pGroupNetworking = new QGroupBox(SettingsDialog);
        m_pGroupNetworking->setObjectName("m_pGroupNetworking");
        gridLayout_3 = new QGridLayout(m_pGroupNetworking);
        gridLayout_3->setObjectName("gridLayout_3");
        m_pLabel_21 = new QLabel(m_pGroupNetworking);
        m_pLabel_21->setObjectName("m_pLabel_21");

        gridLayout_3->addWidget(m_pLabel_21, 1, 0, 1, 1);

        m_pLabel_20 = new QLabel(m_pGroupNetworking);
        m_pLabel_20->setObjectName("m_pLabel_20");

        gridLayout_3->addWidget(m_pLabel_20, 0, 0, 1, 1);

        m_pSpinBoxPort = new QSpinBox(m_pGroupNetworking);
        m_pSpinBoxPort->setObjectName("m_pSpinBoxPort");
        m_pSpinBoxPort->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_pSpinBoxPort->sizePolicy().hasHeightForWidth());
        m_pSpinBoxPort->setSizePolicy(sizePolicy1);
        m_pSpinBoxPort->setMaximum(65535);
        m_pSpinBoxPort->setValue(24800);

        gridLayout_3->addWidget(m_pSpinBoxPort, 0, 1, 1, 1);

        m_pLineEditInterface = new QLineEdit(m_pGroupNetworking);
        m_pLineEditInterface->setObjectName("m_pLineEditInterface");
        m_pLineEditInterface->setEnabled(true);

        gridLayout_3->addWidget(m_pLineEditInterface, 1, 1, 1, 1);

        m_pCheckBoxEnableCrypto = new QCheckBox(m_pGroupNetworking);
        m_pCheckBoxEnableCrypto->setObjectName("m_pCheckBoxEnableCrypto");

        gridLayout_3->addWidget(m_pCheckBoxEnableCrypto, 2, 0, 1, 2);

        checkbox_require_client_certificate = new QCheckBox(m_pGroupNetworking);
        checkbox_require_client_certificate->setObjectName("checkbox_require_client_certificate");

        gridLayout_3->addWidget(checkbox_require_client_certificate, 3, 0, 1, 2);


        verticalLayout->addWidget(m_pGroupNetworking);

        m_pGroupLog = new QGroupBox(SettingsDialog);
        m_pGroupLog->setObjectName("m_pGroupLog");
        sizePolicy.setHeightForWidth(m_pGroupLog->sizePolicy().hasHeightForWidth());
        m_pGroupLog->setSizePolicy(sizePolicy);
        m_pGroupLog->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        m_pGroupLog->setFlat(false);
        gridLayout_2 = new QGridLayout(m_pGroupLog);
        gridLayout_2->setObjectName("gridLayout_2");
        m_pCheckBoxLogToFile = new QCheckBox(m_pGroupLog);
        m_pCheckBoxLogToFile->setObjectName("m_pCheckBoxLogToFile");

        gridLayout_2->addWidget(m_pCheckBoxLogToFile, 1, 0, 1, 1);

        m_pButtonBrowseLog = new QPushButton(m_pGroupLog);
        m_pButtonBrowseLog->setObjectName("m_pButtonBrowseLog");
        m_pButtonBrowseLog->setEnabled(false);

        gridLayout_2->addWidget(m_pButtonBrowseLog, 1, 2, 1, 1);

        m_pComboLogLevel = new QComboBox(m_pGroupLog);
        m_pComboLogLevel->addItem(QString());
        m_pComboLogLevel->addItem(QString());
        m_pComboLogLevel->addItem(QString());
        m_pComboLogLevel->addItem(QString());
        m_pComboLogLevel->addItem(QString());
        m_pComboLogLevel->addItem(QString());
        m_pComboLogLevel->addItem(QString());
        m_pComboLogLevel->setObjectName("m_pComboLogLevel");

        gridLayout_2->addWidget(m_pComboLogLevel, 0, 1, 1, 2);

        m_pLabel_3 = new QLabel(m_pGroupLog);
        m_pLabel_3->setObjectName("m_pLabel_3");
        m_pLabel_3->setMinimumSize(QSize(75, 0));

        gridLayout_2->addWidget(m_pLabel_3, 0, 0, 1, 1);

        m_pLineEditLogFilename = new QLineEdit(m_pGroupLog);
        m_pLineEditLogFilename->setObjectName("m_pLineEditLogFilename");
        m_pLineEditLogFilename->setEnabled(false);

        gridLayout_2->addWidget(m_pLineEditLogFilename, 1, 1, 1, 1);


        verticalLayout->addWidget(m_pGroupLog);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        m_pLabel_27->setBuddy(m_pComboLanguage);
        m_pLabel_19->setBuddy(m_pLineEditScreenName);
        m_pLabel_21->setBuddy(m_pLineEditInterface);
        m_pLabel_20->setBuddy(m_pSpinBoxPort);
        m_pLabel_3->setBuddy(m_pComboLogLevel);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(m_pComboLanguage, m_pLineEditScreenName);
        QWidget::setTabOrder(m_pLineEditScreenName, m_pComboElevate);
        QWidget::setTabOrder(m_pComboElevate, m_pCheckBoxMinimizeToTray);
        QWidget::setTabOrder(m_pCheckBoxMinimizeToTray, m_pCheckBoxAutoHide);
        QWidget::setTabOrder(m_pCheckBoxAutoHide, m_pCheckBoxAutoStart);
        QWidget::setTabOrder(m_pCheckBoxAutoStart, m_pSpinBoxPort);
        QWidget::setTabOrder(m_pSpinBoxPort, m_pLineEditInterface);
        QWidget::setTabOrder(m_pLineEditInterface, m_pCheckBoxEnableCrypto);
        QWidget::setTabOrder(m_pCheckBoxEnableCrypto, m_pComboLogLevel);
        QWidget::setTabOrder(m_pComboLogLevel, m_pCheckBoxLogToFile);
        QWidget::setTabOrder(m_pCheckBoxLogToFile, m_pLineEditLogFilename);
        QWidget::setTabOrder(m_pLineEditLogFilename, m_pButtonBrowseLog);

        retranslateUi(SettingsDialog);

        m_pComboElevate->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QCoreApplication::translate("SettingsDialog", "Settings", nullptr));
        m_pGroupGeneral->setTitle(QCoreApplication::translate("SettingsDialog", "General", nullptr));
        m_pLabel_27->setText(QCoreApplication::translate("SettingsDialog", "&Language:", nullptr));
        m_pLabel_19->setText(QCoreApplication::translate("SettingsDialog", "Sc&reen name:", nullptr));
        m_pLabelElevate->setText(QCoreApplication::translate("SettingsDialog", "Elevate", nullptr));
        m_pComboElevate->setItemText(0, QCoreApplication::translate("SettingsDialog", "As Needed", nullptr));
        m_pComboElevate->setItemText(1, QCoreApplication::translate("SettingsDialog", "Always", nullptr));
        m_pComboElevate->setItemText(2, QCoreApplication::translate("SettingsDialog", "Never", nullptr));

#if QT_CONFIG(tooltip)
        m_pComboElevate->setToolTip(QCoreApplication::translate("SettingsDialog", "Specify when the InputLeap service should run at an elevated privilege level", nullptr));
#endif // QT_CONFIG(tooltip)
        m_pCheckBoxMinimizeToTray->setText(QCoreApplication::translate("SettingsDialog", "Minimize to System &Tray", nullptr));
        m_pCheckBoxAutoHide->setText(QCoreApplication::translate("SettingsDialog", "&Hide on startup", nullptr));
        m_pCheckBoxAutoStart->setText(QCoreApplication::translate("SettingsDialog", "Show Tray &Icon upon App Start", nullptr));
        m_pGroupNetworking->setTitle(QCoreApplication::translate("SettingsDialog", "Networking", nullptr));
        m_pLabel_21->setText(QCoreApplication::translate("SettingsDialog", "&Address:", nullptr));
        m_pLabel_20->setText(QCoreApplication::translate("SettingsDialog", "P&ort:", nullptr));
        m_pCheckBoxEnableCrypto->setText(QCoreApplication::translate("SettingsDialog", "Enable &SSL", nullptr));
        checkbox_require_client_certificate->setText(QCoreApplication::translate("SettingsDialog", "Require client certificate", nullptr));
        m_pGroupLog->setTitle(QCoreApplication::translate("SettingsDialog", "Logging", nullptr));
        m_pCheckBoxLogToFile->setText(QCoreApplication::translate("SettingsDialog", "Log to file:", nullptr));
        m_pButtonBrowseLog->setText(QCoreApplication::translate("SettingsDialog", "Browse...", nullptr));
        m_pComboLogLevel->setItemText(0, QCoreApplication::translate("SettingsDialog", "Error", nullptr));
        m_pComboLogLevel->setItemText(1, QCoreApplication::translate("SettingsDialog", "Warning", nullptr));
        m_pComboLogLevel->setItemText(2, QCoreApplication::translate("SettingsDialog", "Note", nullptr));
        m_pComboLogLevel->setItemText(3, QCoreApplication::translate("SettingsDialog", "Info", nullptr));
        m_pComboLogLevel->setItemText(4, QCoreApplication::translate("SettingsDialog", "Debug", nullptr));
        m_pComboLogLevel->setItemText(5, QCoreApplication::translate("SettingsDialog", "Debug1", nullptr));
        m_pComboLogLevel->setItemText(6, QCoreApplication::translate("SettingsDialog", "Debug2", nullptr));

        m_pLabel_3->setText(QCoreApplication::translate("SettingsDialog", "&Logging level:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
