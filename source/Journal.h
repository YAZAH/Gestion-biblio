/*
 * Journal.h
 * \brief Fichier d'entête de la classe Journal
 * \author Sativen Murden
 * \version 1.0
 * \date 2016-04-02
 */
#ifndef JOURNAL_H_
#define JOURNAL_H_

#include "Reference.h"
#include <string>
#include "ContratException.h"

namespace tp {

/**
 * \nom de la classe derivée Journal
 * \brief Classe permettant de documenter un journal
 */
class Journal: public Reference {
public:
	Journal(const std::string& p_auteurs, const std::string& p_titre,
			const std::string& p_identifiant, unsigned p_annee,
			const std::string& p_nom, unsigned p_volume, unsigned p_numero,
			unsigned p_page);

	const std::string& reqNom()const;
	unsigned reqVolume()const;
	unsigned reqNumero() const;
	unsigned reqPage()const;

	void asgNom(const std::string& p_nom);
	void asgVolume(unsigned p_volume);
	void asgNumero(unsigned p_numero);
	void asgPage(unsigned p_page);

	virtual std::string reqReferenceFormate() const;
	virtual Reference* clone() const;

	virtual ~Journal();


public:

	std::string m_nom;
	unsigned m_volume;
	unsigned m_numero;
	unsigned m_page;
	void verifieInvariant() const;
};

} /* namespace tp */

#endif /* JOURNAL_H_ */
