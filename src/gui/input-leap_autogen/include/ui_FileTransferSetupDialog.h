/********************************************************************************
** Form generated from reading UI file 'FileTransferSetupDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILETRANSFERSETUPDIALOG_H
#define UI_FILETRANSFERSETUPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FileTransferSetupDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *m_pLabelServerInfo;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *m_pLineEditIP;
    QLabel *label_2;
    QLineEdit *m_pLineEditPath;
    QLabel *label_3;
    QLineEdit *m_pLineEditUsername;
    QLabel *label_4;
    QLineEdit *m_pLineEditPassword;
    QLabel *m_pLabelInfo;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FileTransferSetupDialog)
    {
        if (FileTransferSetupDialog->objectName().isEmpty())
            FileTransferSetupDialog->setObjectName("FileTransferSetupDialog");
        FileTransferSetupDialog->resize(500, 350);
        verticalLayout = new QVBoxLayout(FileTransferSetupDialog);
        verticalLayout->setObjectName("verticalLayout");
        m_pLabelServerInfo = new QLabel(FileTransferSetupDialog);
        m_pLabelServerInfo->setObjectName("m_pLabelServerInfo");
        m_pLabelServerInfo->setWordWrap(true);

        verticalLayout->addWidget(m_pLabelServerInfo);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(FileTransferSetupDialog);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        m_pLineEditIP = new QLineEdit(FileTransferSetupDialog);
        m_pLineEditIP->setObjectName("m_pLineEditIP");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, m_pLineEditIP);

        label_2 = new QLabel(FileTransferSetupDialog);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        m_pLineEditPath = new QLineEdit(FileTransferSetupDialog);
        m_pLineEditPath->setObjectName("m_pLineEditPath");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, m_pLineEditPath);

        label_3 = new QLabel(FileTransferSetupDialog);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_3);

        m_pLineEditUsername = new QLineEdit(FileTransferSetupDialog);
        m_pLineEditUsername->setObjectName("m_pLineEditUsername");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, m_pLineEditUsername);

        label_4 = new QLabel(FileTransferSetupDialog);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_4);

        m_pLineEditPassword = new QLineEdit(FileTransferSetupDialog);
        m_pLineEditPassword->setObjectName("m_pLineEditPassword");
        m_pLineEditPassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, m_pLineEditPassword);


        verticalLayout->addLayout(formLayout);

        m_pLabelInfo = new QLabel(FileTransferSetupDialog);
        m_pLabelInfo->setObjectName("m_pLabelInfo");
        m_pLabelInfo->setWordWrap(true);

        verticalLayout->addWidget(m_pLabelInfo);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(FileTransferSetupDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(FileTransferSetupDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, FileTransferSetupDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, FileTransferSetupDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(FileTransferSetupDialog);
    } // setupUi

    void retranslateUi(QDialog *FileTransferSetupDialog)
    {
        FileTransferSetupDialog->setWindowTitle(QCoreApplication::translate("FileTransferSetupDialog", "Setup File Transfer", nullptr));
        m_pLabelServerInfo->setText(QCoreApplication::translate("FileTransferSetupDialog", "Server information", nullptr));
        label->setText(QCoreApplication::translate("FileTransferSetupDialog", "Client IP Address:", nullptr));
        m_pLineEditIP->setPlaceholderText(QCoreApplication::translate("FileTransferSetupDialog", "e.g., 192.168.1.100", nullptr));
        label_2->setText(QCoreApplication::translate("FileTransferSetupDialog", "Upload Path:", nullptr));
        m_pLineEditPath->setPlaceholderText(QCoreApplication::translate("FileTransferSetupDialog", "e.g., /home/user/uploads or ~/Downloads", nullptr));
        label_3->setText(QCoreApplication::translate("FileTransferSetupDialog", "Username (optional):", nullptr));
        label_4->setText(QCoreApplication::translate("FileTransferSetupDialog", "Password (optional):", nullptr));
        m_pLabelInfo->setText(QCoreApplication::translate("FileTransferSetupDialog", "These settings will be used when sending files to this client. The IP and path are essential for file transfer to work.", nullptr));
        m_pLabelInfo->setStyleSheet(QCoreApplication::translate("FileTransferSetupDialog", "color: gray; font-size: 10px;", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileTransferSetupDialog: public Ui_FileTransferSetupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILETRANSFERSETUPDIALOG_H
