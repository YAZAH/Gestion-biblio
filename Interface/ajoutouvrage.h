#ifndef AJOUTOUVRAGE_H
#define AJOUTOUVRAGE_H

#include <QtGui/QDialog>
#include "ui_ajoutouvrage.h"
#include "../source/Ouvrage.h"

class ajoutOuvrage : public QDialog
{
    Q_OBJECT

public:
    ajoutOuvrage(QWidget *parent = 0);
    ~ajoutOuvrage();
    void ajouterOuvrage();

    // Accesseurs
    QString reqAuteurs() const;
   	QString reqTitre() const;
   	QString reqIdentifiant() const;
   	int reqAnnee() const;
   	QString reqVille() const;
   	QString reqEditeur() const;

private slots:
	void validerOuvrage();

private:
    Ui::ajoutOuvrageClass ui;
};

#endif // AJOUTOUVRAGE_H
