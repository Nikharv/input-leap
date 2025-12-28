/********************************************************************************
** Form generated from reading UI file 'FingerprintAcceptDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINGERPRINTACCEPTDIALOG_H
#define UI_FINGERPRINTACCEPTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_FingerprintAcceptDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QLabel *label_sha1;
    QLabel *label_explanation;
    QLabel *label_sha1_fingerprint_full;
    QLabel *label_title;
    QLabel *label_sha256_fingerprint_randomart;
    QLabel *label_sha256_fingerprint_full;
    QLabel *label_sha256;

    void setupUi(QDialog *FingerprintAcceptDialog)
    {
        if (FingerprintAcceptDialog->objectName().isEmpty())
            FingerprintAcceptDialog->setObjectName("FingerprintAcceptDialog");
        FingerprintAcceptDialog->resize(600, 400);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FingerprintAcceptDialog->sizePolicy().hasHeightForWidth());
        FingerprintAcceptDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(FingerprintAcceptDialog);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        buttonBox = new QDialogButtonBox(FingerprintAcceptDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::No|QDialogButtonBox::Yes);

        gridLayout->addWidget(buttonBox, 6, 0, 1, 2);

        label_sha1 = new QLabel(FingerprintAcceptDialog);
        label_sha1->setObjectName("label_sha1");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_sha1->sizePolicy().hasHeightForWidth());
        label_sha1->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_sha1, 3, 0, 1, 2);

        label_explanation = new QLabel(FingerprintAcceptDialog);
        label_explanation->setObjectName("label_explanation");
        sizePolicy1.setHeightForWidth(label_explanation->sizePolicy().hasHeightForWidth());
        label_explanation->setSizePolicy(sizePolicy1);
        label_explanation->setWordWrap(true);
        label_explanation->setMargin(10);

        gridLayout->addWidget(label_explanation, 5, 0, 1, 2);

        label_sha1_fingerprint_full = new QLabel(FingerprintAcceptDialog);
        label_sha1_fingerprint_full->setObjectName("label_sha1_fingerprint_full");
        sizePolicy1.setHeightForWidth(label_sha1_fingerprint_full->sizePolicy().hasHeightForWidth());
        label_sha1_fingerprint_full->setSizePolicy(sizePolicy1);
        label_sha1_fingerprint_full->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_sha1_fingerprint_full, 4, 0, 1, 2);

        label_title = new QLabel(FingerprintAcceptDialog);
        label_title->setObjectName("label_title");

        gridLayout->addWidget(label_title, 0, 0, 1, 2);

        label_sha256_fingerprint_randomart = new QLabel(FingerprintAcceptDialog);
        label_sha256_fingerprint_randomart->setObjectName("label_sha256_fingerprint_randomart");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_sha256_fingerprint_randomart->sizePolicy().hasHeightForWidth());
        label_sha256_fingerprint_randomart->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier")});
        font.setBold(true);
        label_sha256_fingerprint_randomart->setFont(font);
        label_sha256_fingerprint_randomart->setAlignment(Qt::AlignCenter);
        label_sha256_fingerprint_randomart->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_sha256_fingerprint_randomart, 2, 1, 1, 1);

        label_sha256_fingerprint_full = new QLabel(FingerprintAcceptDialog);
        label_sha256_fingerprint_full->setObjectName("label_sha256_fingerprint_full");
        label_sha256_fingerprint_full->setAlignment(Qt::AlignCenter);
        label_sha256_fingerprint_full->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_sha256_fingerprint_full, 2, 0, 1, 1);

        label_sha256 = new QLabel(FingerprintAcceptDialog);
        label_sha256->setObjectName("label_sha256");

        gridLayout->addWidget(label_sha256, 1, 0, 1, 2);


        retranslateUi(FingerprintAcceptDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, FingerprintAcceptDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, FingerprintAcceptDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(FingerprintAcceptDialog);
    } // setupUi

    void retranslateUi(QDialog *FingerprintAcceptDialog)
    {
        FingerprintAcceptDialog->setWindowTitle(QCoreApplication::translate("FingerprintAcceptDialog", "Security question", nullptr));
        label_sha1->setText(QCoreApplication::translate("FingerprintAcceptDialog", "SHA1 (deprecated, compare to old servers only)", nullptr));
        label_explanation->setText(QString());
        label_sha1_fingerprint_full->setText(QString());
        label_title->setText(QCoreApplication::translate("FingerprintAcceptDialog", "Do you trust this fingerprint?", nullptr));
        label_sha256_fingerprint_randomart->setText(QString());
        label_sha256_fingerprint_full->setText(QString());
        label_sha256->setText(QCoreApplication::translate("FingerprintAcceptDialog", "SHA256:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FingerprintAcceptDialog: public Ui_FingerprintAcceptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINGERPRINTACCEPTDIALOG_H
