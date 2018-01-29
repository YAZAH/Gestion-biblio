/*
 * Bibliographie.h
 * \brief Fichier d'entête de la classe Bibliographie
 * \author Sativen Murden
 * \version 1.0
 * \date 2016-04-02
 */

#ifndef BIBLIOGRAPHIE_H_
#define BIBLIOGRAPHIE_H_

#include <string>
#include <iostream>
#include <vector>
#include <iterator>
#include <sstream>
#include "validationFormat.h"
#include "Reference.h"
#include "ContratException.h"
#include "ReferenceAbsenteException.h"
#include "ReferenceDejaPresenteException.h"
#include "ReferenceException.h"

namespace tp {

/**
 * \class Bibliographie
 * \brief Une classe qui permet de faire la gestion des references
 */

class Bibliographie
{
public:
	Bibliographie();
	virtual ~Bibliographie();

	void ajouterReference(const Reference& p_Reference);
	void supprimerReference (const std::string& p_identifiant);
	unsigned nbReferences() const;
	std::string reqBibliographieFormate() const;

private:
	std::vector <Reference*> m_vReferences;
	bool ReferenceEstDejaPresente(const std::string p_identifiant) const;
};

} /* namespace tp */
#endif /* BIBLIOGRAPHIE_H_ */
