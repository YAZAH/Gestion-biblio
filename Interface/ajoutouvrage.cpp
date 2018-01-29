#include "ajoutouvrage.h"
#include <QMessageBox>

ajoutOuvrage::ajoutOuvrage(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
	QObject::connect(ui.boutonOK, SIGNAL(clicked()), this, SLOT(validerOuvrage()));

}

ajoutOuvrage::~ajoutOuvrage()
{

}

//slot pour valider les informations fournis sur l'employe commission
void ajoutOuvrage::validerOuvrage() {

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
	if (ui.ville->text().isEmpty()) {
		QString message("La ville ne doit pas être vide");
		QMessageBox::information(this, "Erreur!", message);
		return;
	}
	if (ui.editeur->text().isEmpty()) {
		QString message("L'éditeur ne doit pas être vide");
		QMessageBox::information(this, "Erreur!", message);
		return;
	}
	else {
		accept();
	}
}


//Accesseur pour la récupération de l'attribut
QString ajoutOuvrage::reqAuteurs() const
{
	return (ui.auteurs->text());
}

QString ajoutOuvrage::reqTitre() const
{
	return (ui.titre->text());
}

QString ajoutOuvrage::reqIdentifiant() const
{
	return (ui.identifiant->text());
}

int ajoutOuvrage::reqAnnee() const
{
	return (ui.annee->text().toInt());
}

QString ajoutOuvrage::reqVille() const
{
	return (ui.ville->text());
}

QString ajoutOuvrage::reqEditeur() const
{
	return (ui.editeur->text());
}

