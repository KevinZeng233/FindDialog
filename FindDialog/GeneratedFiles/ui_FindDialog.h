/********************************************************************************
** Form generated from reading UI file 'FindDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDDIALOG_H
#define UI_FINDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_FindDialogClass
{
public:

    void setupUi(QDialog *FindDialogClass)
    {
        if (FindDialogClass->objectName().isEmpty())
            FindDialogClass->setObjectName(QStringLiteral("FindDialogClass"));
        FindDialogClass->resize(600, 400);

        retranslateUi(FindDialogClass);

        QMetaObject::connectSlotsByName(FindDialogClass);
    } // setupUi

    void retranslateUi(QDialog *FindDialogClass)
    {
        FindDialogClass->setWindowTitle(QApplication::translate("FindDialogClass", "FindDialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindDialogClass: public Ui_FindDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDDIALOG_H
