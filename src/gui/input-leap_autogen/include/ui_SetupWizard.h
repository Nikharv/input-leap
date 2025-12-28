/********************************************************************************
** Form generated from reading UI file 'SetupWizard.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUPWIZARD_H
#define UI_SETUPWIZARD_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWizard>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_SetupWizard
{
public:
    QWizardPage *m_pWelcomePage;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_6;
    QFormLayout *formLayout_3;
    QLabel *label_4;
    QComboBox *m_pComboLanguage;
    QSpacerItem *verticalSpacer_7;
    QLabel *label_5;
    QWizardPage *m_pNodePage;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *m_pServerRadioButton;
    QLabel *m_pClientLabel;
    QSpacerItem *verticalSpacer;
    QRadioButton *m_pClientRadioButton;
    QLabel *m_pServerLabel;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWizard *SetupWizard)
    {
        if (SetupWizard->objectName().isEmpty())
            SetupWizard->setObjectName("SetupWizard");
        SetupWizard->resize(556, 464);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SetupWizard->sizePolicy().hasHeightForWidth());
        SetupWizard->setSizePolicy(sizePolicy);
        SetupWizard->setMinimumSize(QSize(500, 390));
        m_pWelcomePage = new QWizardPage();
        m_pWelcomePage->setObjectName("m_pWelcomePage");
        m_pWelcomePage->setSubTitle(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(m_pWelcomePage);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(m_pWelcomePage);
        label_3->setObjectName("label_3");
        label_3->setWordWrap(true);

        verticalLayout_3->addWidget(label_3);

        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_6);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName("formLayout_3");
        label_4 = new QLabel(m_pWelcomePage);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(100, 0));
        label_4->setText(QString::fromUtf8("&Language:"));

        formLayout_3->setWidget(0, QFormLayout::ItemRole::LabelRole, label_4);

        m_pComboLanguage = new QComboBox(m_pWelcomePage);
        m_pComboLanguage->setObjectName("m_pComboLanguage");
        m_pComboLanguage->setMaximumSize(QSize(200, 16777215));

        formLayout_3->setWidget(0, QFormLayout::ItemRole::FieldRole, m_pComboLanguage);


        verticalLayout_3->addLayout(formLayout_3);

        verticalSpacer_7 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_7);

        label_5 = new QLabel(m_pWelcomePage);
        label_5->setObjectName("label_5");
        label_5->setLocale(QLocale(QLocale::English, QLocale::UnitedKingdom));
        label_5->setWordWrap(true);

        verticalLayout_3->addWidget(label_5);

        SetupWizard->addPage(m_pWelcomePage);
        m_pNodePage = new QWizardPage();
        m_pNodePage->setObjectName("m_pNodePage");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_pNodePage->sizePolicy().hasHeightForWidth());
        m_pNodePage->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(m_pNodePage);
        verticalLayout_2->setObjectName("verticalLayout_2");
        m_pServerRadioButton = new QRadioButton(m_pNodePage);
        m_pServerRadioButton->setObjectName("m_pServerRadioButton");
        QFont font;
        font.setBold(true);
        m_pServerRadioButton->setFont(font);

        verticalLayout_2->addWidget(m_pServerRadioButton);

        m_pClientLabel = new QLabel(m_pNodePage);
        m_pClientLabel->setObjectName("m_pClientLabel");
        m_pClientLabel->setMinimumSize(QSize(0, 0));
        m_pClientLabel->setWordWrap(true);

        verticalLayout_2->addWidget(m_pClientLabel);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        m_pClientRadioButton = new QRadioButton(m_pNodePage);
        m_pClientRadioButton->setObjectName("m_pClientRadioButton");
        m_pClientRadioButton->setFont(font);

        verticalLayout_2->addWidget(m_pClientRadioButton);

        m_pServerLabel = new QLabel(m_pNodePage);
        m_pServerLabel->setObjectName("m_pServerLabel");
        m_pServerLabel->setMinimumSize(QSize(0, 0));
        m_pServerLabel->setWordWrap(true);

        verticalLayout_2->addWidget(m_pServerLabel);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        SetupWizard->addPage(m_pNodePage);
#if QT_CONFIG(shortcut)
        label_4->setBuddy(m_pComboLanguage);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(m_pComboLanguage, m_pServerRadioButton);
        QWidget::setTabOrder(m_pServerRadioButton, m_pClientRadioButton);

        retranslateUi(SetupWizard);

        QMetaObject::connectSlotsByName(SetupWizard);
    } // setupUi

    void retranslateUi(QWizard *SetupWizard)
    {
        SetupWizard->setWindowTitle(QCoreApplication::translate("SetupWizard", "Setup InputLeap", nullptr));
        m_pWelcomePage->setTitle(QCoreApplication::translate("SetupWizard", "Welcome", nullptr));
        label_3->setText(QCoreApplication::translate("SetupWizard", "Thanks for installing InputLeap!", nullptr));
        label_5->setText(QCoreApplication::translate("SetupWizard", "InputLeap lets you easily share your mouse and keyboard between multiple computers on your desk, and it's Free and Open Source. Just move your mouse off the edge of one computer's screen on to another. You can even share all of your clipboards. All you need is a network connection. InputLeap is cross-platform (works on Windows, Mac OS X and Linux).", nullptr));
        m_pNodePage->setTitle(QCoreApplication::translate("SetupWizard", "Server or Client?", nullptr));
        m_pNodePage->setSubTitle(QString());
        m_pServerRadioButton->setText(QCoreApplication::translate("SetupWizard", "&Server (share this computer's mouse and keyboard)", nullptr));
        m_pClientLabel->setText(QCoreApplication::translate("SetupWizard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">My main mouse and keyboard are connected to this computer. This will allow you to move your mouse over to another computer's screen. There can only be one server in your setup.</span></p></body></html>", nullptr));
        m_pClientRadioButton->setText(QCoreApplication::translate("SetupWizard", "&Client (use another computer's mouse and keyboard)", nullptr));
        m_pServerLabel->setText(QCoreApplication::translate("SetupWizard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">You have already set up a server. This computer will be controlled using the server's mouse and keyboard. There can be many clients in your setup.</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetupWizard: public Ui_SetupWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUPWIZARD_H
