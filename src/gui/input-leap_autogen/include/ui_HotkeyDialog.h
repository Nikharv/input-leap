/********************************************************************************
** Form generated from reading UI file 'HotkeyDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTKEYDIALOG_H
#define UI_HOTKEYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include "KeySequenceWidget.h"

QT_BEGIN_NAMESPACE

class Ui_HotkeyDialog
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *label;
    KeySequenceWidget *m_pKeySequenceWidgetHotkey;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *HotkeyDialog)
    {
        if (HotkeyDialog->objectName().isEmpty())
            HotkeyDialog->setObjectName("HotkeyDialog");
        HotkeyDialog->resize(344, 86);
        vboxLayout = new QVBoxLayout(HotkeyDialog);
        vboxLayout->setObjectName("vboxLayout");
        label = new QLabel(HotkeyDialog);
        label->setObjectName("label");

        vboxLayout->addWidget(label);

        m_pKeySequenceWidgetHotkey = new KeySequenceWidget(HotkeyDialog);
        m_pKeySequenceWidgetHotkey->setObjectName("m_pKeySequenceWidgetHotkey");

        vboxLayout->addWidget(m_pKeySequenceWidgetHotkey);

        buttonBox = new QDialogButtonBox(HotkeyDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(HotkeyDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, HotkeyDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, HotkeyDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(HotkeyDialog);
    } // setupUi

    void retranslateUi(QDialog *HotkeyDialog)
    {
        HotkeyDialog->setWindowTitle(QCoreApplication::translate("HotkeyDialog", "Hotkey", nullptr));
        label->setText(QCoreApplication::translate("HotkeyDialog", "Enter the specification for the hotkey:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HotkeyDialog: public Ui_HotkeyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTKEYDIALOG_H
