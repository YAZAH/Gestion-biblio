/********************************************************************************
** Form generated from reading UI file 'ajoutjournal.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTJOURNAL_H
#define UI_AJOUTJOURNAL_H

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

class Ui_ajoutJournalClass
{
public:
    QPushButton *boutonOk;
    QLineEdit *auteurs;
    QLineEdit *titre;
    QLineEdit *page;
    QLineEdit *numero;
    QLineEdit *volume;
    QLineEdit *identifiant;
    QLineEdit *nom;
    QLineEdit *annee;
    QLabel *titre_fenetre;
    QLabel *auteurs_label;
    QLabel *titre_label;
    QLabel *identifiant_label;
    QLabel *annee_label;
    QLabel *page_label;
    QLabel *numero_label;
    QLabel *nom_label;
    QLabel *volume_label;

    void setupUi(QDialog *ajoutJournalClass)
    {
        if (ajoutJournalClass->objectName().isEmpty())
            ajoutJournalClass->setObjectName(QString::fromUtf8("ajoutJournalClass"));
        ajoutJournalClass->resize(305, 418);
        boutonOk = new QPushButton(ajoutJournalClass);
        boutonOk->setObjectName(QString::fromUtf8("boutonOk"));
        boutonOk->setGeometry(QRect(140, 380, 88, 27));
        auteurs = new QLineEdit(ajoutJournalClass);
        auteurs->setObjectName(QString::fromUtf8("auteurs"));
        auteurs->setGeometry(QRect(90, 50, 201, 27));
        titre = new QLineEdit(ajoutJournalClass);
        titre->setObjectName(QString::fromUtf8("titre"));
        titre->setGeometry(QRect(90, 90, 201, 27));
        page = new QLineEdit(ajoutJournalClass);
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(90, 330, 201, 27));
        numero = new QLineEdit(ajoutJournalClass);
        numero->setObjectName(QString::fromUtf8("numero"));
        numero->setGeometry(QRect(90, 290, 201, 27));
        volume = new QLineEdit(ajoutJournalClass);
        volume->setObjectName(QString::fromUtf8("volume"));
        volume->setGeometry(QRect(90, 250, 201, 27));
        identifiant = new QLineEdit(ajoutJournalClass);
        identifiant->setObjectName(QString::fromUtf8("identifiant"));
        identifiant->setGeometry(QRect(90, 130, 201, 27));
        nom = new QLineEdit(ajoutJournalClass);
        nom->setObjectName(QString::fromUtf8("nom"));
        nom->setGeometry(QRect(90, 210, 201, 27));
        annee = new QLineEdit(ajoutJournalClass);
        annee->setObjectName(QString::fromUtf8("annee"));
        annee->setGeometry(QRect(90, 170, 201, 27));
        titre_fenetre = new QLabel(ajoutJournalClass);
        titre_fenetre->setObjectName(QString::fromUtf8("titre_fenetre"));
        titre_fenetre->setGeometry(QRect(10, 0, 301, 41));
        QFont font;
        font.setPointSize(26);
        titre_fenetre->setFont(font);
        auteurs_label = new QLabel(ajoutJournalClass);
        auteurs_label->setObjectName(QString::fromUtf8("auteurs_label"));
        auteurs_label->setGeometry(QRect(20, 60, 58, 17));
        auteurs_label->setAlignment(Qt::AlignCenter);
        titre_label = new QLabel(ajoutJournalClass);
        titre_label->setObjectName(QString::fromUtf8("titre_label"));
        titre_label->setGeometry(QRect(30, 90, 41, 31));
        titre_label->setAlignment(Qt::AlignCenter);
        identifiant_label = new QLabel(ajoutJournalClass);
        identifiant_label->setObjectName(QString::fromUtf8("identifiant_label"));
        identifiant_label->setGeometry(QRect(10, 130, 81, 31));
        identifiant_label->setAlignment(Qt::AlignCenter);
        annee_label = new QLabel(ajoutJournalClass);
        annee_label->setObjectName(QString::fromUtf8("annee_label"));
        annee_label->setGeometry(QRect(20, 170, 51, 31));
        annee_label->setAlignment(Qt::AlignCenter);
        page_label = new QLabel(ajoutJournalClass);
        page_label->setObjectName(QString::fromUtf8("page_label"));
        page_label->setGeometry(QRect(30, 330, 41, 31));
        page_label->setAlignment(Qt::AlignCenter);
        numero_label = new QLabel(ajoutJournalClass);
        numero_label->setObjectName(QString::fromUtf8("numero_label"));
        numero_label->setGeometry(QRect(20, 290, 58, 31));
        numero_label->setAlignment(Qt::AlignCenter);
        nom_label = new QLabel(ajoutJournalClass);
        nom_label->setObjectName(QString::fromUtf8("nom_label"));
        nom_label->setGeometry(QRect(30, 210, 41, 31));
        nom_label->setAlignment(Qt::AlignCenter);
        volume_label = new QLabel(ajoutJournalClass);
        volume_label->setObjectName(QString::fromUtf8("volume_label"));
        volume_label->setGeometry(QRect(20, 250, 58, 31));
        volume_label->setAlignment(Qt::AlignCenter);

        retranslateUi(ajoutJournalClass);

        QMetaObject::connectSlotsByName(ajoutJournalClass);
    } // setupUi

    void retranslateUi(QDialog *ajoutJournalClass)
    {
        ajoutJournalClass->setWindowTitle(QApplication::translate("ajoutJournalClass", "ajoutJournal", 0, QApplication::UnicodeUTF8));
        boutonOk->setText(QApplication::translate("ajoutJournalClass", "OK", 0, QApplication::UnicodeUTF8));
        titre_fenetre->setText(QApplication::translate("ajoutJournalClass", "Ajouter un journal", 0, QApplication::UnicodeUTF8));
        auteurs_label->setText(QApplication::translate("ajoutJournalClass", "Auteurs :", 0, QApplication::UnicodeUTF8));
        titre_label->setText(QApplication::translate("ajoutJournalClass", "Titre :", 0, QApplication::UnicodeUTF8));
        identifiant_label->setText(QApplication::translate("ajoutJournalClass", "Identifiant\n"
" ISSN:", 0, QApplication::UnicodeUTF8));
        annee_label->setText(QApplication::translate("ajoutJournalClass", "Ann\303\251e :", 0, QApplication::UnicodeUTF8));
        page_label->setText(QApplication::translate("ajoutJournalClass", "Page :", 0, QApplication::UnicodeUTF8));
        numero_label->setText(QApplication::translate("ajoutJournalClass", "Num\303\251ro :", 0, QApplication::UnicodeUTF8));
        nom_label->setText(QApplication::translate("ajoutJournalClass", "Nom :", 0, QApplication::UnicodeUTF8));
        volume_label->setText(QApplication::translate("ajoutJournalClass", "Volume :", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ajoutJournalClass: public Ui_ajoutJournalClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTJOURNAL_H
