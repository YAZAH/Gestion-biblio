#ifndef SUPPRIMERREF_H
#define SUPPRIMERREF_H

#include <QtGui/QDialog>
#include "ui_supprimerref.h"

class supprimerRef : public QDialog
{
    Q_OBJECT

public:
    supprimerRef(QWidget *parent = 0);
    ~supprimerRef();
    QString retourneASupprimer();

private:
    Ui::supprimerRefClass ui;
};

#endif // SUPPRIMERREF_H
