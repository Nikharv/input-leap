/********************************************************************************
** Form generated from reading UI file 'AboutDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QSpacerItem *spacerItem;
    QLabel *logoLabel;
    QSpacerItem *spacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *m_pLabelAppVersion;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *buttonOk;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName("AboutDialog");
        AboutDialog->setWindowModality(Qt::ApplicationModal);
        AboutDialog->setEnabled(true);
        AboutDialog->resize(0, 0);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AboutDialog->sizePolicy().hasHeightForWidth());
        AboutDialog->setSizePolicy(sizePolicy);
        AboutDialog->setModal(true);
        gridLayout = new QGridLayout(AboutDialog);
        gridLayout->setObjectName("gridLayout");
        label_3 = new QLabel(AboutDialog);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMargin(1);

        gridLayout->addWidget(label_3, 2, 1, 1, 2);

        spacerItem = new QSpacerItem(20, 50, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        gridLayout->addItem(spacerItem, 3, 1, 1, 2);

        logoLabel = new QLabel(AboutDialog);
        logoLabel->setObjectName("logoLabel");
        sizePolicy.setHeightForWidth(logoLabel->sizePolicy().hasHeightForWidth());
        logoLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(logoLabel, 0, 1, 1, 1);

        spacer = new QSpacerItem(20, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(spacer, 1, 1, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(AboutDialog);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMargin(1);

        horizontalLayout->addWidget(label);

        m_pLabelAppVersion = new QLabel(AboutDialog);
        m_pLabelAppVersion->setObjectName("m_pLabelAppVersion");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_pLabelAppVersion->sizePolicy().hasHeightForWidth());
        m_pLabelAppVersion->setSizePolicy(sizePolicy2);
        m_pLabelAppVersion->setMargin(1);

        horizontalLayout->addWidget(m_pLabelAppVersion);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 5, 1, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        buttonOk = new QPushButton(AboutDialog);
        buttonOk->setObjectName("buttonOk");

        horizontalLayout_2->addWidget(buttonOk);


        gridLayout->addLayout(horizontalLayout_2, 6, 1, 1, 1);


        retranslateUi(AboutDialog);
        QObject::connect(buttonOk, &QPushButton::clicked, AboutDialog, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About InputLeap", nullptr));
        label_3->setText(QCoreApplication::translate("AboutDialog", "<p>\n"
"Keyboard and mouse sharing application. Cross platform and open source.<br /><br />\n"
"Copyright \302\251 2022-2024 InputLeap Developers<br />\n"
"Copyright \302\251 2018 Debauchee Open Source Group<br />\n"
"Copyright \302\251 2012-2016 Symless Ltd.<br />\n"
"Copyright \302\251 2002-2012 Chris Schoeneman, Nick Bolton, Volker Lanz.<br /><br />\n"
"InputLeap is released under the GNU General Public License (GPLv2).<br /><br />\n"
"InputLeap is based on CosmoSynergy by Richard Lee and Adam Feder.<br />\n"
"The InputLeap GUI is based on QSynergy by Volker Lanz.\n"
"</p>", nullptr));
        label->setText(QCoreApplication::translate("AboutDialog", "Version:", nullptr));
        m_pLabelAppVersion->setText(QCoreApplication::translate("AboutDialog", "Unknown", nullptr));
        buttonOk->setText(QCoreApplication::translate("AboutDialog", "&Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
