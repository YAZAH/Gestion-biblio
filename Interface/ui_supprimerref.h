/********************************************************************************
** Form generated from reading UI file 'supprimerref.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPPRIMERREF_H
#define UI_SUPPRIMERREF_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_supprimerRefClass
{
public:
    QLabel *label;
    QLabel *titre;
    QLineEdit *lineEdit_supprime;
    QPushButton *BoutonSupprimer;

    void setupUi(QDialog *supprimerRefClass)
    {
        if (supprimerRefClass->objectName().isEmpty())
            supprimerRefClass->setObjectName(QString::fromUtf8("supprimerRefClass"));
        supprimerRefClass->resize(324, 133);
        label = new QLabel(supprimerRefClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 50, 81, 21));
        titre = new QLabel(supprimerRefClass);
        titre->setObjectName(QString::fromUtf8("titre"));
        titre->setGeometry(QRect(10, 10, 311, 31));
        QFont font;
        font.setPointSize(20);
        titre->setFont(font);
        lineEdit_supprime = new QLineEdit(supprimerRefClass);
        lineEdit_supprime->setObjectName(QString::fromUtf8("lineEdit_supprime"));
        lineEdit_supprime->setGeometry(QRect(100, 50, 201, 27));
        BoutonSupprimer = new QPushButton(supprimerRefClass);
        BoutonSupprimer->setObjectName(QString::fromUtf8("BoutonSupprimer"));
        BoutonSupprimer->setGeometry(QRect(120, 90, 81, 27));

        retranslateUi(supprimerRefClass);

        QMetaObject::connectSlotsByName(supprimerRefClass);
    } // setupUi

    void retranslateUi(QDialog *supprimerRefClass)
    {
        supprimerRefClass->setWindowTitle(QApplication::translate("supprimerRefClass", "supprimerRef", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("supprimerRefClass", "Identifiant :", 0, QApplication::UnicodeUTF8));
        titre->setText(QApplication::translate("supprimerRefClass", "Supprimer une r\303\251f\303\251rence", 0, QApplication::UnicodeUTF8));
        BoutonSupprimer->setText(QApplication::translate("supprimerRefClass", "Supprimer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class supprimerRefClass: public Ui_supprimerRefClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPRIMERREF_H
