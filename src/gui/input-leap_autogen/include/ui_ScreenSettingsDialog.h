/********************************************************************************
** Form generated from reading UI file 'ScreenSettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENSETTINGSDIALOG_H
#define UI_SCREENSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ScreenSettingsDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label_7;
    QLineEdit *m_pLineEditName;
    QHBoxLayout *hboxLayout1;
    QGroupBox *m_pGroupAliases;
    QGridLayout *gridLayout;
    QLineEdit *m_pLineEditAlias;
    QPushButton *m_pButtonAddAlias;
    QListWidget *m_pListAliases;
    QPushButton *m_pButtonRemoveAlias;
    QSpacerItem *spacerItem;
    QGroupBox *m_pGroupModifiers;
    QGridLayout *gridLayout1;
    QLabel *label_2;
    QComboBox *m_pComboBoxShift;
    QLabel *label_3;
    QComboBox *m_pComboBoxCtrl;
    QLabel *label_4;
    QComboBox *m_pComboBoxAlt;
    QLabel *label_5;
    QComboBox *m_pComboBoxMeta;
    QLabel *label_6;
    QComboBox *m_pComboBoxSuper;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout2;
    QGroupBox *m_pGroupSwitchCorners;
    QGridLayout *gridLayout2;
    QCheckBox *m_pCheckBoxCornerTopLeft;
    QCheckBox *m_pCheckBoxCornerTopRight;
    QCheckBox *m_pCheckBoxCornerBottomLeft;
    QCheckBox *m_pCheckBoxCornerBottomRight;
    QHBoxLayout *hboxLayout3;
    QLabel *label;
    QSpacerItem *spacerItem2;
    QSpinBox *m_pSpinBoxSwitchCornerSize;
    QGroupBox *m_pGroupFixes;
    QGridLayout *gridLayout3;
    QCheckBox *m_pCheckBoxCapsLock;
    QCheckBox *m_pCheckBoxNumLock;
    QCheckBox *m_pCheckBoxScrollLock;
    QCheckBox *m_pCheckBoxXTest;
    QCheckBox *m_pCheckBoxPreserveFocus;
    QSpacerItem *spacerItem3;
    QHBoxLayout *hboxLayout4;
    QPushButton *m_pButtonFileTransferSetup;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *spacerItem4;
    QDialogButtonBox *m_pButtonBox;

    void setupUi(QDialog *ScreenSettingsDialog)
    {
        if (ScreenSettingsDialog->objectName().isEmpty())
            ScreenSettingsDialog->setObjectName("ScreenSettingsDialog");
        ScreenSettingsDialog->resize(434, 437);
        vboxLayout = new QVBoxLayout(ScreenSettingsDialog);
        vboxLayout->setObjectName("vboxLayout");
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName("hboxLayout");
        label_7 = new QLabel(ScreenSettingsDialog);
        label_7->setObjectName("label_7");

        hboxLayout->addWidget(label_7);

        m_pLineEditName = new QLineEdit(ScreenSettingsDialog);
        m_pLineEditName->setObjectName("m_pLineEditName");

        hboxLayout->addWidget(m_pLineEditName);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName("hboxLayout1");
        m_pGroupAliases = new QGroupBox(ScreenSettingsDialog);
        m_pGroupAliases->setObjectName("m_pGroupAliases");
        m_pGroupAliases->setEnabled(true);
        m_pGroupAliases->setChecked(false);
        gridLayout = new QGridLayout(m_pGroupAliases);
        gridLayout->setObjectName("gridLayout");
        m_pLineEditAlias = new QLineEdit(m_pGroupAliases);
        m_pLineEditAlias->setObjectName("m_pLineEditAlias");

        gridLayout->addWidget(m_pLineEditAlias, 0, 0, 1, 1);

        m_pButtonAddAlias = new QPushButton(m_pGroupAliases);
        m_pButtonAddAlias->setObjectName("m_pButtonAddAlias");
        m_pButtonAddAlias->setEnabled(false);

        gridLayout->addWidget(m_pButtonAddAlias, 0, 1, 1, 1);

        m_pListAliases = new QListWidget(m_pGroupAliases);
        m_pListAliases->setObjectName("m_pListAliases");
        m_pListAliases->setSelectionMode(QAbstractItemView::ExtendedSelection);

        gridLayout->addWidget(m_pListAliases, 1, 0, 2, 1);

        m_pButtonRemoveAlias = new QPushButton(m_pGroupAliases);
        m_pButtonRemoveAlias->setObjectName("m_pButtonRemoveAlias");
        m_pButtonRemoveAlias->setEnabled(false);

        gridLayout->addWidget(m_pButtonRemoveAlias, 1, 1, 1, 1);

        spacerItem = new QSpacerItem(20, 126, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(spacerItem, 2, 1, 1, 1);


        hboxLayout1->addWidget(m_pGroupAliases);

        m_pGroupModifiers = new QGroupBox(ScreenSettingsDialog);
        m_pGroupModifiers->setObjectName("m_pGroupModifiers");
        m_pGroupModifiers->setChecked(false);
        gridLayout1 = new QGridLayout(m_pGroupModifiers);
        gridLayout1->setObjectName("gridLayout1");
        label_2 = new QLabel(m_pGroupModifiers);
        label_2->setObjectName("label_2");

        gridLayout1->addWidget(label_2, 0, 0, 1, 1);

        m_pComboBoxShift = new QComboBox(m_pGroupModifiers);
        m_pComboBoxShift->addItem(QString());
        m_pComboBoxShift->addItem(QString());
        m_pComboBoxShift->addItem(QString());
        m_pComboBoxShift->addItem(QString());
        m_pComboBoxShift->addItem(QString());
        m_pComboBoxShift->addItem(QString());
        m_pComboBoxShift->setObjectName("m_pComboBoxShift");

        gridLayout1->addWidget(m_pComboBoxShift, 0, 1, 1, 1);

        label_3 = new QLabel(m_pGroupModifiers);
        label_3->setObjectName("label_3");

        gridLayout1->addWidget(label_3, 1, 0, 1, 1);

        m_pComboBoxCtrl = new QComboBox(m_pGroupModifiers);
        m_pComboBoxCtrl->addItem(QString());
        m_pComboBoxCtrl->addItem(QString());
        m_pComboBoxCtrl->addItem(QString());
        m_pComboBoxCtrl->addItem(QString());
        m_pComboBoxCtrl->addItem(QString());
        m_pComboBoxCtrl->addItem(QString());
        m_pComboBoxCtrl->setObjectName("m_pComboBoxCtrl");

        gridLayout1->addWidget(m_pComboBoxCtrl, 1, 1, 1, 1);

        label_4 = new QLabel(m_pGroupModifiers);
        label_4->setObjectName("label_4");

        gridLayout1->addWidget(label_4, 2, 0, 1, 1);

        m_pComboBoxAlt = new QComboBox(m_pGroupModifiers);
        m_pComboBoxAlt->addItem(QString());
        m_pComboBoxAlt->addItem(QString());
        m_pComboBoxAlt->addItem(QString());
        m_pComboBoxAlt->addItem(QString());
        m_pComboBoxAlt->addItem(QString());
        m_pComboBoxAlt->addItem(QString());
        m_pComboBoxAlt->setObjectName("m_pComboBoxAlt");

        gridLayout1->addWidget(m_pComboBoxAlt, 2, 1, 1, 1);

        label_5 = new QLabel(m_pGroupModifiers);
        label_5->setObjectName("label_5");

        gridLayout1->addWidget(label_5, 3, 0, 1, 1);

        m_pComboBoxMeta = new QComboBox(m_pGroupModifiers);
        m_pComboBoxMeta->addItem(QString());
        m_pComboBoxMeta->addItem(QString());
        m_pComboBoxMeta->addItem(QString());
        m_pComboBoxMeta->addItem(QString());
        m_pComboBoxMeta->addItem(QString());
        m_pComboBoxMeta->addItem(QString());
        m_pComboBoxMeta->setObjectName("m_pComboBoxMeta");

        gridLayout1->addWidget(m_pComboBoxMeta, 3, 1, 1, 1);

        label_6 = new QLabel(m_pGroupModifiers);
        label_6->setObjectName("label_6");

        gridLayout1->addWidget(label_6, 4, 0, 1, 1);

        m_pComboBoxSuper = new QComboBox(m_pGroupModifiers);
        m_pComboBoxSuper->addItem(QString());
        m_pComboBoxSuper->addItem(QString());
        m_pComboBoxSuper->addItem(QString());
        m_pComboBoxSuper->addItem(QString());
        m_pComboBoxSuper->addItem(QString());
        m_pComboBoxSuper->addItem(QString());
        m_pComboBoxSuper->setObjectName("m_pComboBoxSuper");

        gridLayout1->addWidget(m_pComboBoxSuper, 4, 1, 1, 1);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout1->addItem(spacerItem1, 5, 0, 1, 1);


        hboxLayout1->addWidget(m_pGroupModifiers);


        vboxLayout->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName("hboxLayout2");
        m_pGroupSwitchCorners = new QGroupBox(ScreenSettingsDialog);
        m_pGroupSwitchCorners->setObjectName("m_pGroupSwitchCorners");
        m_pGroupSwitchCorners->setChecked(false);
        gridLayout2 = new QGridLayout(m_pGroupSwitchCorners);
        gridLayout2->setObjectName("gridLayout2");
        m_pCheckBoxCornerTopLeft = new QCheckBox(m_pGroupSwitchCorners);
        m_pCheckBoxCornerTopLeft->setObjectName("m_pCheckBoxCornerTopLeft");

        gridLayout2->addWidget(m_pCheckBoxCornerTopLeft, 0, 0, 1, 1);

        m_pCheckBoxCornerTopRight = new QCheckBox(m_pGroupSwitchCorners);
        m_pCheckBoxCornerTopRight->setObjectName("m_pCheckBoxCornerTopRight");

        gridLayout2->addWidget(m_pCheckBoxCornerTopRight, 0, 1, 1, 1);

        m_pCheckBoxCornerBottomLeft = new QCheckBox(m_pGroupSwitchCorners);
        m_pCheckBoxCornerBottomLeft->setObjectName("m_pCheckBoxCornerBottomLeft");

        gridLayout2->addWidget(m_pCheckBoxCornerBottomLeft, 1, 0, 1, 1);

        m_pCheckBoxCornerBottomRight = new QCheckBox(m_pGroupSwitchCorners);
        m_pCheckBoxCornerBottomRight->setObjectName("m_pCheckBoxCornerBottomRight");

        gridLayout2->addWidget(m_pCheckBoxCornerBottomRight, 1, 1, 1, 1);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName("hboxLayout3");
        label = new QLabel(m_pGroupSwitchCorners);
        label->setObjectName("label");

        hboxLayout3->addWidget(label);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout3->addItem(spacerItem2);

        m_pSpinBoxSwitchCornerSize = new QSpinBox(m_pGroupSwitchCorners);
        m_pSpinBoxSwitchCornerSize->setObjectName("m_pSpinBoxSwitchCornerSize");

        hboxLayout3->addWidget(m_pSpinBoxSwitchCornerSize);


        gridLayout2->addLayout(hboxLayout3, 2, 0, 1, 2);


        hboxLayout2->addWidget(m_pGroupSwitchCorners);

        m_pGroupFixes = new QGroupBox(ScreenSettingsDialog);
        m_pGroupFixes->setObjectName("m_pGroupFixes");
        m_pGroupFixes->setChecked(false);
        gridLayout3 = new QGridLayout(m_pGroupFixes);
        gridLayout3->setObjectName("gridLayout3");
        m_pCheckBoxCapsLock = new QCheckBox(m_pGroupFixes);
        m_pCheckBoxCapsLock->setObjectName("m_pCheckBoxCapsLock");

        gridLayout3->addWidget(m_pCheckBoxCapsLock, 0, 0, 1, 1);

        m_pCheckBoxNumLock = new QCheckBox(m_pGroupFixes);
        m_pCheckBoxNumLock->setObjectName("m_pCheckBoxNumLock");

        gridLayout3->addWidget(m_pCheckBoxNumLock, 1, 0, 1, 1);

        m_pCheckBoxScrollLock = new QCheckBox(m_pGroupFixes);
        m_pCheckBoxScrollLock->setObjectName("m_pCheckBoxScrollLock");

        gridLayout3->addWidget(m_pCheckBoxScrollLock, 2, 0, 1, 1);

        m_pCheckBoxXTest = new QCheckBox(m_pGroupFixes);
        m_pCheckBoxXTest->setObjectName("m_pCheckBoxXTest");
        m_pCheckBoxXTest->setChecked(false);

        gridLayout3->addWidget(m_pCheckBoxXTest, 3, 0, 1, 1);

        m_pCheckBoxPreserveFocus = new QCheckBox(m_pGroupFixes);
        m_pCheckBoxPreserveFocus->setObjectName("m_pCheckBoxPreserveFocus");
        m_pCheckBoxPreserveFocus->setChecked(false);

        gridLayout3->addWidget(m_pCheckBoxPreserveFocus, 4, 0, 1, 1);

        spacerItem3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout3->addItem(spacerItem3, 5, 0, 1, 1);


        hboxLayout2->addWidget(m_pGroupFixes);


        vboxLayout->addLayout(hboxLayout2);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName("hboxLayout4");
        m_pButtonFileTransferSetup = new QPushButton(ScreenSettingsDialog);
        m_pButtonFileTransferSetup->setObjectName("m_pButtonFileTransferSetup");

        hboxLayout4->addWidget(m_pButtonFileTransferSetup);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout4->addItem(horizontalSpacer);


        vboxLayout->addLayout(hboxLayout4);

        spacerItem4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        vboxLayout->addItem(spacerItem4);

        m_pButtonBox = new QDialogButtonBox(ScreenSettingsDialog);
        m_pButtonBox->setObjectName("m_pButtonBox");
        m_pButtonBox->setOrientation(Qt::Horizontal);
        m_pButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(m_pButtonBox);

#if QT_CONFIG(shortcut)
        label_7->setBuddy(m_pLineEditName);
        label_2->setBuddy(m_pComboBoxShift);
        label_3->setBuddy(m_pComboBoxCtrl);
        label_4->setBuddy(m_pComboBoxAlt);
        label_5->setBuddy(m_pComboBoxMeta);
        label_6->setBuddy(m_pComboBoxSuper);
        label->setBuddy(m_pSpinBoxSwitchCornerSize);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ScreenSettingsDialog);
        QObject::connect(m_pButtonBox, &QDialogButtonBox::accepted, ScreenSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(m_pButtonBox, &QDialogButtonBox::rejected, ScreenSettingsDialog, qOverload<>(&QDialog::reject));

        m_pComboBoxCtrl->setCurrentIndex(1);
        m_pComboBoxAlt->setCurrentIndex(2);
        m_pComboBoxMeta->setCurrentIndex(3);
        m_pComboBoxSuper->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(ScreenSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *ScreenSettingsDialog)
    {
        ScreenSettingsDialog->setWindowTitle(QCoreApplication::translate("ScreenSettingsDialog", "Screen Settings", nullptr));
        label_7->setText(QCoreApplication::translate("ScreenSettingsDialog", "Screen &name:", nullptr));
        m_pGroupAliases->setTitle(QCoreApplication::translate("ScreenSettingsDialog", "A&liases", nullptr));
        m_pButtonAddAlias->setText(QCoreApplication::translate("ScreenSettingsDialog", "&Add", nullptr));
        m_pButtonRemoveAlias->setText(QCoreApplication::translate("ScreenSettingsDialog", "&Remove", nullptr));
        m_pGroupModifiers->setTitle(QCoreApplication::translate("ScreenSettingsDialog", "&Modifier keys", nullptr));
        label_2->setText(QCoreApplication::translate("ScreenSettingsDialog", "&Shift:", nullptr));
        m_pComboBoxShift->setItemText(0, QCoreApplication::translate("ScreenSettingsDialog", "Shift", nullptr));
        m_pComboBoxShift->setItemText(1, QCoreApplication::translate("ScreenSettingsDialog", "Ctrl", nullptr));
        m_pComboBoxShift->setItemText(2, QCoreApplication::translate("ScreenSettingsDialog", "Alt", nullptr));
        m_pComboBoxShift->setItemText(3, QCoreApplication::translate("ScreenSettingsDialog", "Meta", nullptr));
        m_pComboBoxShift->setItemText(4, QCoreApplication::translate("ScreenSettingsDialog", "Super", nullptr));
        m_pComboBoxShift->setItemText(5, QCoreApplication::translate("ScreenSettingsDialog", "None", nullptr));

        label_3->setText(QCoreApplication::translate("ScreenSettingsDialog", "&Ctrl:", nullptr));
        m_pComboBoxCtrl->setItemText(0, QCoreApplication::translate("ScreenSettingsDialog", "Shift", nullptr));
        m_pComboBoxCtrl->setItemText(1, QCoreApplication::translate("ScreenSettingsDialog", "Ctrl", nullptr));
        m_pComboBoxCtrl->setItemText(2, QCoreApplication::translate("ScreenSettingsDialog", "Alt", nullptr));
        m_pComboBoxCtrl->setItemText(3, QCoreApplication::translate("ScreenSettingsDialog", "Meta", nullptr));
        m_pComboBoxCtrl->setItemText(4, QCoreApplication::translate("ScreenSettingsDialog", "Super", nullptr));
        m_pComboBoxCtrl->setItemText(5, QCoreApplication::translate("ScreenSettingsDialog", "None", nullptr));

        label_4->setText(QCoreApplication::translate("ScreenSettingsDialog", "Al&t:", nullptr));
        m_pComboBoxAlt->setItemText(0, QCoreApplication::translate("ScreenSettingsDialog", "Shift", nullptr));
        m_pComboBoxAlt->setItemText(1, QCoreApplication::translate("ScreenSettingsDialog", "Ctrl", nullptr));
        m_pComboBoxAlt->setItemText(2, QCoreApplication::translate("ScreenSettingsDialog", "Alt", nullptr));
        m_pComboBoxAlt->setItemText(3, QCoreApplication::translate("ScreenSettingsDialog", "Meta", nullptr));
        m_pComboBoxAlt->setItemText(4, QCoreApplication::translate("ScreenSettingsDialog", "Super", nullptr));
        m_pComboBoxAlt->setItemText(5, QCoreApplication::translate("ScreenSettingsDialog", "None", nullptr));

        label_5->setText(QCoreApplication::translate("ScreenSettingsDialog", "M&eta:", nullptr));
        m_pComboBoxMeta->setItemText(0, QCoreApplication::translate("ScreenSettingsDialog", "Shift", nullptr));
        m_pComboBoxMeta->setItemText(1, QCoreApplication::translate("ScreenSettingsDialog", "Ctrl", nullptr));
        m_pComboBoxMeta->setItemText(2, QCoreApplication::translate("ScreenSettingsDialog", "Alt", nullptr));
        m_pComboBoxMeta->setItemText(3, QCoreApplication::translate("ScreenSettingsDialog", "Meta", nullptr));
        m_pComboBoxMeta->setItemText(4, QCoreApplication::translate("ScreenSettingsDialog", "Super", nullptr));
        m_pComboBoxMeta->setItemText(5, QCoreApplication::translate("ScreenSettingsDialog", "None", nullptr));

        label_6->setText(QCoreApplication::translate("ScreenSettingsDialog", "S&uper:", nullptr));
        m_pComboBoxSuper->setItemText(0, QCoreApplication::translate("ScreenSettingsDialog", "Shift", nullptr));
        m_pComboBoxSuper->setItemText(1, QCoreApplication::translate("ScreenSettingsDialog", "Ctrl", nullptr));
        m_pComboBoxSuper->setItemText(2, QCoreApplication::translate("ScreenSettingsDialog", "Alt", nullptr));
        m_pComboBoxSuper->setItemText(3, QCoreApplication::translate("ScreenSettingsDialog", "Meta", nullptr));
        m_pComboBoxSuper->setItemText(4, QCoreApplication::translate("ScreenSettingsDialog", "Super", nullptr));
        m_pComboBoxSuper->setItemText(5, QCoreApplication::translate("ScreenSettingsDialog", "None", nullptr));

        m_pGroupSwitchCorners->setTitle(QCoreApplication::translate("ScreenSettingsDialog", "&Dead corners", nullptr));
        m_pCheckBoxCornerTopLeft->setText(QCoreApplication::translate("ScreenSettingsDialog", "Top-left", nullptr));
        m_pCheckBoxCornerTopRight->setText(QCoreApplication::translate("ScreenSettingsDialog", "Top-right", nullptr));
        m_pCheckBoxCornerBottomLeft->setText(QCoreApplication::translate("ScreenSettingsDialog", "Bottom-left", nullptr));
        m_pCheckBoxCornerBottomRight->setText(QCoreApplication::translate("ScreenSettingsDialog", "Bottom-right", nullptr));
        label->setText(QCoreApplication::translate("ScreenSettingsDialog", "Corner Si&ze:", nullptr));
        m_pGroupFixes->setTitle(QCoreApplication::translate("ScreenSettingsDialog", "&Fixes", nullptr));
        m_pCheckBoxCapsLock->setText(QCoreApplication::translate("ScreenSettingsDialog", "Fix CAPS LOCK key", nullptr));
        m_pCheckBoxNumLock->setText(QCoreApplication::translate("ScreenSettingsDialog", "Fix NUM LOCK key", nullptr));
        m_pCheckBoxScrollLock->setText(QCoreApplication::translate("ScreenSettingsDialog", "Fix SCROLL LOCK key", nullptr));
        m_pCheckBoxXTest->setText(QCoreApplication::translate("ScreenSettingsDialog", "Fix XTest for Xinerama", nullptr));
        m_pCheckBoxPreserveFocus->setText(QCoreApplication::translate("ScreenSettingsDialog", "Fix Preserve Focus", nullptr));
        m_pButtonFileTransferSetup->setText(QCoreApplication::translate("ScreenSettingsDialog", "Setup File Transfer...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScreenSettingsDialog: public Ui_ScreenSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENSETTINGSDIALOG_H
