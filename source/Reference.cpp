/*
 *Reference.cpp
 * \brief Fichier code source de la classe Reference
 * \author Sativen Murden
 * \version 1.0
 * \date 2016-04-02
 */
#include <sstream>
#include "Reference.h"
using namespace std;

namespace tp {
/**
 * \brief Constructeur de la classe Reference
 *  Les parametres de cette classe sont:
 * \param p_auteurs du référence
 * \param p_titre du référence
 * \param p_identifiant du référence
 * \param p_annee du référence
 * \param p_ville du référence
 * \param p_editeur du référence
 */
Reference::Reference(const std::string& p_auteurs, const std::string& p_titre,
		const std::string& p_identifiant, unsigned p_annee) {

	m_auteurs = p_auteurs;
	m_titre = p_titre;
	m_identifiant = p_identifiant;
	m_annee = p_annee;

	PRECONDITION(validerFormatNom(p_auteurs));
	PRECONDITION(!p_titre.empty());
	PRECONDITION(validerCodeIsbn(p_identifiant) or validerCodeIssn(p_identifiant));
	PRECONDITION(p_annee>0);

	POSTCONDITION(m_auteurs==p_auteurs);
	POSTCONDITION(m_titre==p_titre);
	POSTCONDITION(m_identifiant==p_identifiant);
	POSTCONDITION(m_annee==p_annee);

	INVARIANTS();
}
/**
 * brief Acceseur pour reqAuteur
 * return m_auteur  l'auteur de l'objet
 */
const std::string& Reference::reqAuteurs() const {
	return m_auteurs;
}

/**
 * \brief Mutateur pour auteurs, modifie les auteurs
 */

void Reference::asgAuteurs(const std::string& p_auteurs) {
	PRECONDITION(validerFormatNom(p_auteurs));
	m_auteurs = p_auteurs;
	POSTCONDITION(m_auteurs == p_auteurs);
	INVARIANTS();
}

/**
 * brief Acceseur pour reqTitre
 * return m_titre  le titre de l'objet
 */

const std::string& Reference::reqTitre() const {
	return m_titre;
}

/**
 * \brief Mutateur pour titre, modifie le titre
 */

void Reference::asgTitre(const string& p_titre) {
	PRECONDITION(!p_titre.empty());
	m_titre = p_titre;
	POSTCONDITION(m_titre == p_titre);
	INVARIANTS();
}

/**
 * brief Acceseur pour reqIdentifiant
 * return m_identifiant  l'identiiant de l'objet
 */
const std::string& Reference::reqIdentifiant() const {
	return m_identifiant;
}

/**
 * \brief Mutateur pour identifiant, modifie l'identifiant
 */

void Reference::asgIdentifiant(const string& p_identifiant) {
	PRECONDITION(validerCodeIsbn(p_identifiant) or validerCodeIssn(p_identifiant));
	m_identifiant = p_identifiant;
	POSTCONDITION(m_identifiant == p_identifiant);
	INVARIANTS();
}

/**
 * brief Acceseur pour reqAnnee
 * return m_annee l'annee de l'objet
 */
unsigned Reference::reqAnnee() const {
	return m_annee;
}

/**
 * \brief Mutateur pour annee, modifie l'annee
 */

void Reference::asgAnnee(unsigned p_annee) {
	PRECONDITION(p_annee>0);
	m_annee = p_annee;
	POSTCONDITION(m_annee == p_annee);
	INVARIANTS();
}


bool Reference::operator ==(const Reference& p_reference) {
	return reqAuteurs() == p_reference.reqAuteurs()
			&& reqTitre() == p_reference.reqTitre()
			&& reqIdentifiant() == p_reference.reqIdentifiant()
			&& reqAnnee() == p_reference.reqAnnee();

}
/**
 * brief Acceseur pour pour reqReferenceFormate
 * return le format des références
 */
std::string Reference::reqReferenceFormate()const{
	std::ostringstream os;
	os << reqAuteurs() << ". ";
	os << reqTitre() << ". ";
	return os.str();
}
// Reference* Reference::clone() const {
// return (clone());
// }

Reference::~Reference() {
	// TODO Auto-generated destructor stub
}

void Reference::verifieInvariant() const
{
	INVARIANT(validerFormatNom(m_auteurs));
	INVARIANT(!m_titre.empty());
	INVARIANT(validerCodeIsbn(m_identifiant) or validerCodeIssn(m_identifiant));
	INVARIANT(m_annee>0);
}

} /* namespace tp */
