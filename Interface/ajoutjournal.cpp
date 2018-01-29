#include "ajoutjournal.h"
#include <QMessageBox>
#include <iostream>
using namespace tp;

ajoutJournal::ajoutJournal(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
	QObject::connect(ui.boutonOk, SIGNAL(clicked()), this, SLOT(validerJournal()));
}

ajoutJournal::~ajoutJournal()
{

}


//slot pour valider les informations fournis sur l'employe commission
void ajoutJournal::validerJournal() {

	if (ui.auteurs->text().isEmpty()) {
		QString message("L'auteur ne doit pas être vide");
		QMessageBox::information(this, "Erreur!", message);
		return;
	}

	if (ui.titre->text().isEmpty()) {
		QString message("Le titre ne doit pas être vide");
		QMessageBox::information(this, "Erreur!", message);
		return;
	}

	if (ui.identifiant->text().isEmpty()) {
		QString message("L'identifiant ne doit pas être vide");
		QMessageBox::information(this, "Erreur!", message);
		return;
	}

	if (ui.annee->text().isEmpty()) {
		QString message("L'année ne doit pas être vide");
		QMessageBox::information(this, "Erreur!", message);
		return;
	}
	if (ui.nom->text().isEmpty()) {
		QString message("Le nom ne doit pas être vide");
		QMessageBox::information(this, "Erreur!", message);
		return;
	}
	if (ui.volume->text().isEmpty()) {
		QString message("Le volume ne doit pas être vide");
		QMessageBox::information(this, "Erreur!", message);
		return;
	}
	if (ui.numero->text().isEmpty()) {
		QString message("Le numéro ne doit pas être vide");
		QMessageBox::information(this, "Erreur!", message);
		return;
	}
	if (ui.page->text().isEmpty()) {
		QString message("La page ne doit pas être vide");
		QMessageBox::information(this, "Erreur!", message);
		return;
	}
	else {
		accept();
	}
}


//Accesseur pour la récupération de l'attribut
QString ajoutJournal::reqAuteurs() const
{
	return (ui.auteurs->text());
}

QString ajoutJournal::reqTitre() const
{
	return (ui.titre->text());
}

QString ajoutJournal::reqIdentifiant() const
{
	return (ui.identifiant->text());
}

int ajoutJournal::reqAnnee() const
{
	return (ui.annee->text().toInt());
}

QString ajoutJournal::reqNom() const
{
	return (ui.nom->text());
}

int ajoutJournal::reqVolume() const
{
	return (ui.volume->text().toInt());
}

int ajoutJournal::reqNumero() const
{
	return (ui.numero->text().toInt());
}

int ajoutJournal::reqPage() const
{
	return (ui.page->text().toInt());
}
