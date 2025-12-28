/********************************************************************************
** Form generated from reading UI file 'LogWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGWINDOW_H
#define UI_LOGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LogWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *m_pLogOutput;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *spacer;
    QPushButton *m_pButtonClearLog;
    QPushButton *m_pButtonHide;

    void setupUi(QDialog *LogWindow)
    {
        if (LogWindow->objectName().isEmpty())
            LogWindow->setObjectName("LogWindow");
        LogWindow->resize(800, 371);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LogWindow->sizePolicy().hasHeightForWidth());
        LogWindow->setSizePolicy(sizePolicy);
        LogWindow->setMinimumSize(QSize(400, 0));
        verticalLayout_2 = new QVBoxLayout(LogWindow);
        verticalLayout_2->setObjectName("verticalLayout_2");
        m_pLogOutput = new QPlainTextEdit(LogWindow);
        m_pLogOutput->setObjectName("m_pLogOutput");
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier")});
        m_pLogOutput->setFont(font);
        m_pLogOutput->setAutoFillBackground(false);
        m_pLogOutput->setUndoRedoEnabled(false);
        m_pLogOutput->setLineWrapMode(QPlainTextEdit::NoWrap);
        m_pLogOutput->setReadOnly(true);

        verticalLayout_2->addWidget(m_pLogOutput);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        spacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(spacer);

        m_pButtonClearLog = new QPushButton(LogWindow);
        m_pButtonClearLog->setObjectName("m_pButtonClearLog");

        horizontalLayout->addWidget(m_pButtonClearLog);

        m_pButtonHide = new QPushButton(LogWindow);
        m_pButtonHide->setObjectName("m_pButtonHide");

        horizontalLayout->addWidget(m_pButtonHide);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(LogWindow);

        QMetaObject::connectSlotsByName(LogWindow);
    } // setupUi

    void retranslateUi(QDialog *LogWindow)
    {
        LogWindow->setWindowTitle(QCoreApplication::translate("LogWindow", "Log - InputLeap", nullptr));
        m_pButtonClearLog->setText(QCoreApplication::translate("LogWindow", "&Clear Log", nullptr));
        m_pButtonHide->setText(QCoreApplication::translate("LogWindow", "&Hide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogWindow: public Ui_LogWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGWINDOW_H
