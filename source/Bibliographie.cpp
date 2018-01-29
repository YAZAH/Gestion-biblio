/*
 * Bibliographie.cpp
 * \brief Fichier code source de la classe Bibliographie
 * \author Sativen Murden
 * \version 1.0
 * \date 2016-04-02
 */

#include "Bibliographie.h"
#include <string>
#include <iostream>
#include <vector>
#include <iterator>
#include <sstream>

using namespace std;
namespace tp
{

/**
 * \brief Constructeur sans paramètres
 */

Bibliographie::Bibliographie()
{
}
/**
 * \brief Destructeur de la classe Bibliographie
 */

Bibliographie::~Bibliographie() {
	/*for (unsigned int i=0; i<m_vReferences.size();i++)
	{
	delete m_vReferences[i];// TODO Auto-generated destructor stub
	}*/
	vector<Reference*>::const_iterator iter;
	for (iter = m_vReferences.begin(); iter != m_vReferences.end(); ++iter) {
		delete *iter;
	}

}

/**
 * \brief Méthode privé pour vérifier si la references est dans la bibliographie
 */

bool Bibliographie::ReferenceEstDejaPresente(const std::string p_identifiant) const {
bool verif(false);
vector<Reference*>::const_iterator iter;

for (iter = m_vReferences.begin(); iter != m_vReferences.end(); ++iter) {
	if (p_identifiant == (*iter)->reqIdentifiant()) {

		verif = true;
		break;

	}

}

return verif;
}
/**
 * \brief Méthode pour ajouter une référence au vecteur des références
 */

void Bibliographie::ajouterReference(const Reference& p_nouveauReference) {
	bool v = ReferenceEstDejaPresente(p_nouveauReference.reqIdentifiant());
	if (!v) {
		m_vReferences.push_back(p_nouveauReference.clone());
	}
	else throw ReferenceDejaPresenteException(p_nouveauReference.reqReferenceFormate());

}

/**
 * \brief Méthode pour supprimer une reference dans la bibliographie
 */
void Bibliographie::supprimerReference(const std::string& p_identifiant) {

if (ReferenceEstDejaPresente(p_identifiant)) {
	std::vector<Reference*>::iterator iter;

		for (iter= m_vReferences.begin();iter != m_vReferences.end(); ++iter) {
			if (p_identifiant == (*iter)->reqIdentifiant()) {
				delete *iter;
				m_vReferences.erase(iter);
				break;
			}
			else{
				throw ReferenceAbsenteException("Référence inexistante");
			}
		}

	}
}

/**
 * \brief Méthode pour avoir le nombre de references dans la bibliographie
 */
unsigned Bibliographie::nbReferences() const{
	return m_vReferences.size();
}


/**
 * \brief Retourne une chaine de caractere qui contient l'information de l'objet Bibliographie
 * \return un string qui contient l'information
 */
std::string Bibliographie::reqBibliographieFormate() const {

	ostringstream os;
	os << "Bibliogrpahie\n===============================" << endl;

	for (size_t i = 0; i < m_vReferences.size(); i++) {
		os << "[" << i+1 << "] " << m_vReferences[i]->reqReferenceFormate() << endl;
	}
	return os.str();

}
} /* namespace tp */
