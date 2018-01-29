/*
 * Journal.h
 * \brief Fichier d'entête de la classe Ouvrage
 * \author Sativen Murden
 * \version 1.0
 * \date 2016-04-02
 */

#ifndef OUVRAGE_H_
#define OUVRAGE_H_

#include "ContratException.h"
#include "Reference.h"
#include <string>

namespace tp{
/**
 * \nom de la classe derivée Ouvrage
 * \brief Classe permettant de documenter un Ouvrage
 */
class Ouvrage:public Reference
{
public:
	Ouvrage(const std::string& p_auteurs, const std::string& p_titre,
			const std::string& p_identifiant, unsigned p_annee,
			const std::string& p_ville, const std::string& p_editeur);;

	const std::string& reqVille() const;
	const std::string& reqEditeur()const;

	void asgVille(const std::string& p_ville);
	void asgEditeur(const std::string& p_editeur);

	virtual std::string reqReferenceFormate() const;
	virtual Reference* clone() const;
	virtual ~Ouvrage();


private:

	std::string m_ville;
	std::string m_editeur;
	void verifieInvariant() const;
};
};
 /* namespace tp */

#endif /* OUVRAGE_H_ */
