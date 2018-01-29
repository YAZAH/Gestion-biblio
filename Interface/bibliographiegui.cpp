#include "bibliographiegui.h"
#include "ajoutouvrage.h"
#include "ajoutjournal.h"
#include "supprimerref.h"
#include <QMessageBox>
#include <sstream>
#include <iostream>
using namespace tp;
using namespace std;

Bibliographie Biblio;

bibliographieGui::bibliographieGui(QWidget *parent)
    : QMainWindow(parent)
{
	ui.setupUi(this);
	//Connecter une composante de l'interface avec les slots
	QObject::connect(ui.actionAjoutJournal, SIGNAL(triggered()), this, SLOT(afficheAjoutJournal()));
	QObject::connect(ui.actionAjoutOuvrage, SIGNAL(triggered()), this, SLOT(afficheAjoutOuvrage()));
	QObject::connect(ui.actionQuitter, SIGNAL(triggered()), this, SLOT(close()));
	QObject::connect(ui.actionSupprimerRef, SIGNAL(triggered()), this, SLOT(afficheSuppressionReference()));
	QObject::connect(ui.actionAfficherBiblio,SIGNAL(triggered()),this,SLOT(reqBiblioFormate()));



}

bibliographieGui::~bibliographieGui()
{
	for (size_t i = 0; i < m_vReferences.size() ;i++) {
			delete m_vReferences[i];
		}

}

// Slot pour l'interface journal
void bibliographieGui::afficheAjoutJournal() {
	ajoutJournal saisieJournal(this);
	if (saisieJournal.exec()) {
		try{
		ajouterJournal(saisieJournal.reqAuteurs().toStdString(),
				saisieJournal.reqTitre().toStdString(),
				saisieJournal.reqIdentifiant().toStdString(),
				saisieJournal.reqAnnee(),
				saisieJournal.reqNom().toStdString(),
				saisieJournal.reqVolume(),
				saisieJournal.reqNumero(),
				saisieJournal.reqPage());
		ui.affichageBiblio->setText(Biblio.reqBibliographieFormate().c_str());
		} catch (ReferenceDejaPresenteException& referenceDejaPresente) {
			QString message(referenceDejaPresente.what());
			QMessageBox::information(this, "Erreur! Référence déjà présente", message);
		}
	}
}

// Slot pour l'interface ouvrage
void bibliographieGui::afficheAjoutOuvrage() {
	ajoutOuvrage saisieOuvrage(this);
	if (saisieOuvrage.exec()) {
		try{
		ajouterOuvrage(saisieOuvrage.reqAuteurs().toStdString(),
				saisieOuvrage.reqTitre().toStdString(),
				saisieOuvrage.reqIdentifiant().toStdString(),
				saisieOuvrage.reqAnnee(),
				saisieOuvrage.reqVille().toStdString(),
				saisieOuvrage.reqEditeur().toStdString());
		ui.affichageBiblio->setText(Biblio.reqBibliographieFormate().c_str());
		} catch (ReferenceDejaPresenteException& referenceDejaPresente) {
			QString message(referenceDejaPresente.what());
			QMessageBox::information(this, "Erreur! Référence déjà présente", message);
		}
	}
}



// ajout d'un journal dans le vector
void bibliographieGui::ajouterJournal(const std::string& p_auteurs, const std::string& p_titre, const std::string& p_identifiant, unsigned p_annee, const std::string& p_nom, unsigned p_volume, unsigned p_numero, unsigned p_page)
{
	Journal JournalAjout(p_auteurs, p_titre, p_identifiant, p_annee, p_nom, p_volume, p_numero, p_page);
	Biblio.ajouterReference(JournalAjout); // ajout du journal dans le vector


}

// ajout d'un ouvrage dans le vector
void bibliographieGui::ajouterOuvrage(const std::string& p_auteurs, const std::string& p_titre, const std::string& p_identifiant, unsigned p_annee, const std::string& p_ville, const std::string& p_editeur)
{
	Ouvrage OuvrageAjout(p_auteurs, p_titre, p_identifiant, p_annee, p_ville, p_editeur);
	Biblio.ajouterReference(OuvrageAjout); // ajout du journal dans le vector
}


// Slot pour l'interface de suppression d'un employé
void bibliographieGui::afficheSuppressionReference() {
	supprimerRef supprime(this);

	if (supprime.exec()) {
		//supression de la référence
		try{
			Biblio.supprimerReference(supprime.retourneASupprimer().toStdString());
			ui.affichageBiblio->setText(Biblio.reqBibliographieFormate().c_str());


		} catch (ReferenceAbsenteException& e) {
			QString message(e.what());
			QMessageBox::information(this, "Erreur! Référence absente", message);
		}

	}
}

void bibliographieGui::reqBiblioFormate() const {
	ui.affichageBiblio->setText(Biblio.reqBibliographieFormate().c_str());
}