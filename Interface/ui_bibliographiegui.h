/********************************************************************************
** Form generated from reading UI file 'bibliographiegui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIBLIOGRAPHIEGUI_H
#define UI_BIBLIOGRAPHIEGUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bibliographieGuiClass
{
public:
    QAction *actionAjouter_un_journal;
    QAction *actionAjouter_un_ouvrage;
    QAction *actionJournal;
    QAction *actionOuvrage;
    QAction *actionSupprimerRef;
    QAction *actionAfficherBiblio;
    QAction *actionQuitter;
    QAction *actionAjoutJournal;
    QAction *actionAjoutOuvrage;
    QWidget *centralwidget;
    QTextEdit *affichageBiblio;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QMenu *menuReference;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *bibliographieGuiClass)
    {
        if (bibliographieGuiClass->objectName().isEmpty())
            bibliographieGuiClass->setObjectName(QString::fromUtf8("bibliographieGuiClass"));
        bibliographieGuiClass->resize(586, 355);
        actionAjouter_un_journal = new QAction(bibliographieGuiClass);
        actionAjouter_un_journal->setObjectName(QString::fromUtf8("actionAjouter_un_journal"));
        actionAjouter_un_ouvrage = new QAction(bibliographieGuiClass);
        actionAjouter_un_ouvrage->setObjectName(QString::fromUtf8("actionAjouter_un_ouvrage"));
        actionJournal = new QAction(bibliographieGuiClass);
        actionJournal->setObjectName(QString::fromUtf8("actionJournal"));
        actionOuvrage = new QAction(bibliographieGuiClass);
        actionOuvrage->setObjectName(QString::fromUtf8("actionOuvrage"));
        actionSupprimerRef = new QAction(bibliographieGuiClass);
        actionSupprimerRef->setObjectName(QString::fromUtf8("actionSupprimerRef"));
        actionAfficherBiblio = new QAction(bibliographieGuiClass);
        actionAfficherBiblio->setObjectName(QString::fromUtf8("actionAfficherBiblio"));
        actionQuitter = new QAction(bibliographieGuiClass);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionAjoutJournal = new QAction(bibliographieGuiClass);
        actionAjoutJournal->setObjectName(QString::fromUtf8("actionAjoutJournal"));
        actionAjoutOuvrage = new QAction(bibliographieGuiClass);
        actionAjoutOuvrage->setObjectName(QString::fromUtf8("actionAjoutOuvrage"));
        centralwidget = new QWidget(bibliographieGuiClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        affichageBiblio = new QTextEdit(centralwidget);
        affichageBiblio->setObjectName(QString::fromUtf8("affichageBiblio"));
        affichageBiblio->setGeometry(QRect(13, 10, 561, 281));
        bibliographieGuiClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(bibliographieGuiClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 586, 27));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        menuReference = new QMenu(menuMenu);
        menuReference->setObjectName(QString::fromUtf8("menuReference"));
        bibliographieGuiClass->setMenuBar(menubar);
        statusbar = new QStatusBar(bibliographieGuiClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        bibliographieGuiClass->setStatusBar(statusbar);
        toolBar = new QToolBar(bibliographieGuiClass);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        bibliographieGuiClass->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(bibliographieGuiClass);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        bibliographieGuiClass->addToolBar(Qt::TopToolBarArea, toolBar_2);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(menuReference->menuAction());
        menuMenu->addSeparator();
        menuMenu->addAction(actionSupprimerRef);
        menuMenu->addSeparator();
        menuMenu->addAction(actionAfficherBiblio);
        menuMenu->addSeparator();
        menuMenu->addAction(actionQuitter);
        menuReference->addAction(actionAjoutJournal);
        menuReference->addSeparator();
        menuReference->addAction(actionAjoutOuvrage);

        retranslateUi(bibliographieGuiClass);

        QMetaObject::connectSlotsByName(bibliographieGuiClass);
    } // setupUi

    void retranslateUi(QMainWindow *bibliographieGuiClass)
    {
        bibliographieGuiClass->setWindowTitle(QApplication::translate("bibliographieGuiClass", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionAjouter_un_journal->setText(QApplication::translate("bibliographieGuiClass", "Ajouter un journal", 0, QApplication::UnicodeUTF8));
        actionAjouter_un_ouvrage->setText(QApplication::translate("bibliographieGuiClass", "Ajouter un ouvrage", 0, QApplication::UnicodeUTF8));
        actionJournal->setText(QApplication::translate("bibliographieGuiClass", "Journal", 0, QApplication::UnicodeUTF8));
        actionOuvrage->setText(QApplication::translate("bibliographieGuiClass", "Ouvrage", 0, QApplication::UnicodeUTF8));
        actionSupprimerRef->setText(QApplication::translate("bibliographieGuiClass", "Supprimer une r\303\251f\303\251rence", 0, QApplication::UnicodeUTF8));
        actionAfficherBiblio->setText(QApplication::translate("bibliographieGuiClass", "Afficher la bibliographie", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("bibliographieGuiClass", "Quitter", 0, QApplication::UnicodeUTF8));
        actionAjoutJournal->setText(QApplication::translate("bibliographieGuiClass", "Journal", 0, QApplication::UnicodeUTF8));
        actionAjoutOuvrage->setText(QApplication::translate("bibliographieGuiClass", "Ouvrage", 0, QApplication::UnicodeUTF8));
        menuMenu->setTitle(QApplication::translate("bibliographieGuiClass", "Menu", 0, QApplication::UnicodeUTF8));
        menuReference->setTitle(QApplication::translate("bibliographieGuiClass", "Ajouter une r\303\251f\303\251rence", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("bibliographieGuiClass", "toolBar", 0, QApplication::UnicodeUTF8));
        toolBar_2->setWindowTitle(QApplication::translate("bibliographieGuiClass", "toolBar_2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class bibliographieGuiClass: public Ui_bibliographieGuiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIBLIOGRAPHIEGUI_H
