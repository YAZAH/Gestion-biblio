#ifndef BIBLIOGRAPHIEGUI_H
#define BIBLIOGRAPHIEGUI_H

#include <QtGui/QMainWindow>
#include "ui_bibliographiegui.h"
#include "../source/Bibliographie.h"
#include "../source/Reference.h"
#include "../source/Journal.h"
#include "../source/Ouvrage.h"
#include <string>
#include <vector>
using namespace tp;

class bibliographieGui : public QMainWindow
{
    Q_OBJECT

public:
    bibliographieGui(QWidget *parent = 0);
    ~bibliographieGui();
    void ajouterJournal(const std::string& p_auteurs, const std::string& p_titre, const std::string& p_identifiant, unsigned p_annee, const std::string& p_nom, unsigned p_volume, unsigned p_numero, unsigned p_page);
    void ajouterOuvrage(const std::string& p_auteurs, const std::string& p_titre, const std::string& p_identifiant, unsigned p_annee, const std::string& p_ville, const std::string& p_editeur);

private slots:
	void afficheAjoutJournal();
	void afficheAjoutOuvrage();
	void afficheSuppressionReference();
	void reqBiblioFormate() const;

private:
    Ui::bibliographieGuiClass ui;
    std::vector<Reference*> m_vReferences;// contient la liste des références
};

#endif // BIBLIOGRAPHIEGUI_H
