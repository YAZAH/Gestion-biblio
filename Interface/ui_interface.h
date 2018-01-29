/********************************************************************************
** Form generated from reading UI file 'interface.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACE_H
#define UI_INTERFACE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InterfaceClass
{
public:

    void setupUi(QWidget *InterfaceClass)
    {
        if (InterfaceClass->objectName().isEmpty())
            InterfaceClass->setObjectName(QString::fromUtf8("InterfaceClass"));
        InterfaceClass->resize(400, 300);

        retranslateUi(InterfaceClass);

        QMetaObject::connectSlotsByName(InterfaceClass);
    } // setupUi

    void retranslateUi(QWidget *InterfaceClass)
    {
        InterfaceClass->setWindowTitle(QApplication::translate("InterfaceClass", "Interface", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InterfaceClass: public Ui_InterfaceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACE_H
