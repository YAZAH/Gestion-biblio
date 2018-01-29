/********************************************************************************
** Form generated from reading UI file 'ajoutouvrage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTOUVRAGE_H
#define UI_AJOUTOUVRAGE_H

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

class Ui_ajoutOuvrageClass
{
public:
    QLineEdit *annee;
    QLineEdit *titre;
    QPushButton *boutonOK;
    QLabel *ville_label;
    QLabel *Titre_fenetre;
    QLabel *auteurs_label;
    QLabel *identifiant_label;
    QLineEdit *editeur;
    QLabel *annee_label;
    QLineEdit *ville;
    QLabel *editeur_label;
    QLabel *titre_label;
    QLineEdit *auteurs;
    QLineEdit *identifiant;

    void setupUi(QDialog *ajoutOuvrageClass)
    {
        if (ajoutOuvrageClass->objectName().isEmpty())
            ajoutOuvrageClass->setObjectName(QString::fromUtf8("ajoutOuvrageClass"));
        ajoutOuvrageClass->resize(313, 335);
        annee = new QLineEdit(ajoutOuvrageClass);
        annee->setObjectName(QString::fromUtf8("annee"));
        annee->setGeometry(QRect(90, 180, 201, 27));
        titre = new QLineEdit(ajoutOuvrageClass);
        titre->setObjectName(QString::fromUtf8("titre"));
        titre->setGeometry(QRect(90, 100, 201, 27));
        boutonOK = new QPushButton(ajoutOuvrageClass);
        boutonOK->setObjectName(QString::fromUtf8("boutonOK"));
        boutonOK->setGeometry(QRect(140, 300, 88, 27));
        ville_label = new QLabel(ajoutOuvrageClass);
        ville_label->setObjectName(QString::fromUtf8("ville_label"));
        ville_label->setGeometry(QRect(30, 220, 41, 31));
        ville_label->setAlignment(Qt::AlignCenter);
        Titre_fenetre = new QLabel(ajoutOuvrageClass);
        Titre_fenetre->setObjectName(QString::fromUtf8("Titre_fenetre"));
        Titre_fenetre->setGeometry(QRect(10, 10, 301, 41));
        QFont font;
        font.setPointSize(26);
        Titre_fenetre->setFont(font);
        auteurs_label = new QLabel(ajoutOuvrageClass);
        auteurs_label->setObjectName(QString::fromUtf8("auteurs_label"));
        auteurs_label->setGeometry(QRect(20, 60, 58, 31));
        auteurs_label->setAlignment(Qt::AlignCenter);
        identifiant_label = new QLabel(ajoutOuvrageClass);
        identifiant_label->setObjectName(QString::fromUtf8("identifiant_label"));
        identifiant_label->setGeometry(QRect(10, 140, 81, 31));
        identifiant_label->setAlignment(Qt::AlignCenter);
        editeur = new QLineEdit(ajoutOuvrageClass);
        editeur->setObjectName(QString::fromUtf8("editeur"));
        editeur->setGeometry(QRect(90, 260, 201, 27));
        annee_label = new QLabel(ajoutOuvrageClass);
        annee_label->setObjectName(QString::fromUtf8("annee_label"));
        annee_label->setGeometry(QRect(20, 180, 51, 31));
        annee_label->setAlignment(Qt::AlignCenter);
        ville = new QLineEdit(ajoutOuvrageClass);
        ville->setObjectName(QString::fromUtf8("ville"));
        ville->setGeometry(QRect(90, 220, 201, 27));
        editeur_label = new QLabel(ajoutOuvrageClass);
        editeur_label->setObjectName(QString::fromUtf8("editeur_label"));
        editeur_label->setGeometry(QRect(20, 260, 58, 31));
        editeur_label->setAlignment(Qt::AlignCenter);
        titre_label = new QLabel(ajoutOuvrageClass);
        titre_label->setObjectName(QString::fromUtf8("titre_label"));
        titre_label->setGeometry(QRect(30, 100, 41, 31));
        titre_label->setAlignment(Qt::AlignCenter);
        auteurs = new QLineEdit(ajoutOuvrageClass);
        auteurs->setObjectName(QString::fromUtf8("auteurs"));
        auteurs->setGeometry(QRect(90, 60, 201, 27));
        identifiant = new QLineEdit(ajoutOuvrageClass);
        identifiant->setObjectName(QString::fromUtf8("identifiant"));
        identifiant->setGeometry(QRect(90, 140, 201, 27));

        retranslateUi(ajoutOuvrageClass);

        QMetaObject::connectSlotsByName(ajoutOuvrageClass);
    } // setupUi

    void retranslateUi(QDialog *ajoutOuvrageClass)
    {
        ajoutOuvrageClass->setWindowTitle(QApplication::translate("ajoutOuvrageClass", "ajoutOuvrage", 0, QApplication::UnicodeUTF8));
        boutonOK->setText(QApplication::translate("ajoutOuvrageClass", "OK", 0, QApplication::UnicodeUTF8));
        ville_label->setText(QApplication::translate("ajoutOuvrageClass", "Ville :", 0, QApplication::UnicodeUTF8));
        Titre_fenetre->setText(QApplication::translate("ajoutOuvrageClass", "Ajouter un ouvrage", 0, QApplication::UnicodeUTF8));
        auteurs_label->setText(QApplication::translate("ajoutOuvrageClass", "Auteurs :", 0, QApplication::UnicodeUTF8));
        identifiant_label->setText(QApplication::translate("ajoutOuvrageClass", "Identifiant\n"
" ISBN:", 0, QApplication::UnicodeUTF8));
        annee_label->setText(QApplication::translate("ajoutOuvrageClass", "Ann\303\251e :", 0, QApplication::UnicodeUTF8));
        editeur_label->setText(QApplication::translate("ajoutOuvrageClass", "\303\211diteur :", 0, QApplication::UnicodeUTF8));
        titre_label->setText(QApplication::translate("ajoutOuvrageClass", "Titre :", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ajoutOuvrageClass: public Ui_ajoutOuvrageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTOUVRAGE_H
