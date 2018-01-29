/**
 * \file BibliographieTesteur.cpp
 * \brief Testeur unitaire de la classe Bibliographie
 * \author Yassine Zahoui
 * \date 2016-03-26
 */


#include <gtest/gtest.h>
#include "Bibliographie.h"
#include "Ouvrage.h"
#include <iostream>
#include <sstream>
using namespace tp;
using namespace std;


/**
 * \test Test du constructeur
 *
 * 		Cas valides: Création d'un objet Bibliographie
 *		Cas invalides: aucun d'identifié
 */
TEST(Bibliographie, ConstructeurValide)
{
	Bibliographie UneBibliographie();
}

/**
 * \brief Création d'une fixture à utiliser pour les méthodes public de la classe de test
 */
class UneBibliographie: public ::testing::Test
{
public:
	UneBibliographie() :
		bibliographie()
	{}
	;
	Bibliographie bibliographie;
};

/**
 * \test Test de la méthode ajouterReference() et nbReferences()
 *
 *     Cas valide: vérifier si la référence a été ajouté
 *     Cas invalide: aucun.
 */
TEST_F(UneBibliographie, ajouterReference)
{
	Ouvrage UnOuvrage("Max", "Petit cheval", "2-266-11156-6", 2010, "Quebec", "Flapy");
	bibliographie.ajouterReference(UnOuvrage);
	ASSERT_EQ(1, bibliographie.nbReferences());
}

/**
 * \test Test de la méthode ajouterReference() et nbReferences()
 *
 *     Cas valide: vérifier si la référence a été ajouté
 *     Cas invalide: aucun.
 */
TEST_F(UneBibliographie, supprimerReference)
{
	Ouvrage Ouvrage2("Max", "Petit cheval", "2-266-11156-6", 2010, "Quebec", "Flapy");
	bibliographie.ajouterReference(Ouvrage2);
	bibliographie.supprimerReference(Ouvrage2.reqIdentifiant());
	ASSERT_EQ(0, bibliographie.nbReferences());
}

/**
 * \test Test du destructeur
 *
 * 		Cas valides: Destruction des informations du vector
 *		Cas invalides: aucun d'identifié
 */
/*TEST_F(UneBibliographie, DestructeurValide)
{
	Ouvrage Ouvrage2("Max", "Petit cheval", "2-266-11156-6", 2010, "Quebec", "Flapy");
	bibliographie.ajouterReference(Ouvrage2);
	Ouvrage Ouvrage3("Maaaax", "Petit cheval", "2-266-11156-6", 2010, "Quebec", "Flapy");
	bibliographie.ajouterReference(Ouvrage3);
	bibliographie.~Bibliographie();
	ASSERT_EQ(0, bibliographie.nbReferences());
}*/
/**
 * \test Test de la méthode reqBibliographieFormate();
 *        Cas valides: vérifier le retour des information sur l'objet Bibliographie formaté
 *        Cas invalides: aucun
 */
TEST_F(UneBibliographie,reqBibliographieFormate)
{
	Ouvrage UnOuvrage("Max", "Petit cheval", "2-266-11156-6", 2010, "Quebec", "Flapy");
	bibliographie.ajouterReference(UnOuvrage);
	string chaine = "Bibliogrpahie\n===============================\n[1] "+UnOuvrage.reqReferenceFormate()+"\n";
	ASSERT_EQ(chaine, bibliographie.reqBibliographieFormate());
}
/** @} Fin defgroup*/
