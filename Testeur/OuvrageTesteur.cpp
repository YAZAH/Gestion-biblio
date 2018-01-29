/**
 * \file OuvrageTesteur.cpp
 * \brief Testeur unitaire de la classe Ouvrage
 * \author Yassine Zahoui
 * \date 2016-03-26
 */


#include <gtest/gtest.h>
#include "Ouvrage.h"
#include <iostream>
#include <sstream>
using namespace tp;
using namespace std;


/**
 * \test Test du constructeur
 *
 * 		Cas valides: Création d'un objet Ouvrage et vérification de l'assignation de tous les attributs
 *		Cas invalides:
 *		    ville vide
 *		    editeur vide
 */
TEST(Ouvrage, ConstructeurValide)
{
	Ouvrage UnOuvrage("Max", "Petit cheval", "2-266-11156-6", 2010, "Quebec", "Flap");

	ASSERT_EQ("Max", UnOuvrage.reqAuteurs());
	ASSERT_EQ("Petit cheval", UnOuvrage.reqTitre());
	ASSERT_EQ("2-266-11156-6", UnOuvrage.reqIdentifiant());
	ASSERT_EQ(2010, UnOuvrage.reqAnnee());
	ASSERT_EQ("Quebec", UnOuvrage.reqVille());
	ASSERT_EQ("Flap", UnOuvrage.reqEditeur());
}
//cas invalide
TEST(Ouvrage,ConstructeurInvalideVille)
{
	ASSERT_THROW(Ouvrage UnOuvrage("Max", "Petit cheval", "2-266-11156-6", 2010, "", "Flap"),ContratException);

}
TEST(Ouvrage,ConstructeurInvalideEditeur)
{
	ASSERT_THROW(Ouvrage UnOuvrage("Max", "Petit cheval", "2-266-11156-6", 2010, "Quebec", ""),ContratException);

}


/**
 * \brief Création d'une fixture à utiliser pour les méthodes public de la classe de test
 */
class UnOuvrage: public ::testing::Test
{
public:
	UnOuvrage() :
		ouvrage("Max", "Petit cheval", "2-266-11156-6", 2010, "Quebec", "Flap")
	{}
	;
	Ouvrage ouvrage;
};

/**
 * \test Test de la méthode reqVille()
 *
 *     Cas valide: vérifier le retour de la ville de l'ouvrage
 *     Cas invalide: aucun.
 */
TEST_F(UnOuvrage, reqVille)
{
	ASSERT_EQ("Quebec",ouvrage.reqVille());
}
/**
 * \test Test de la méthode reqEditeur
 *
 *     Cas valide: vérifier le retour de l'editeur de l'ouvrage
 *     Cas invalide: aucun.
 */
TEST_F(UnOuvrage, reqEditeur){

	ASSERT_EQ("Flap", ouvrage.reqEditeur());
}
/**
 * \test Test de la méthode std::string reqReferenceFormate();
 *        Cas valides: vérifier le retour des information sur l'objet Ouvrage formaté
 *        Cas invalides: aucun
 */
TEST_F(UnOuvrage,reqReferenceFormate)
{
	ostringstream os;
	os << ouvrage.reqAuteurs() << ". " << ouvrage.reqTitre() << ". " << ouvrage.reqVille() << " : " << ouvrage.reqEditeur() << ", " << ouvrage.reqAnnee() << ". " << ouvrage.reqIdentifiant() << ".";
	ASSERT_EQ(os.str(),ouvrage.reqReferenceFormate());
}
/**
 * \test Test de la méthode asgVille
 *
 *     Cas valide: Mettre une ville valide
 *     Cas invalide: Mettre une ville invalide (vide)
 *                 : Mettre une ville invalide (chiffre)
 *                 : Mettre une ville invalide (caractères spéciaux)
 */

TEST_F(UnOuvrage, villeValide)
{
	ouvrage.asgVille("Montreal");
}
//cas invalide
TEST_F(UnOuvrage, villeVideInvalide)
{
	ASSERT_THROW(ouvrage.asgVille(""),PreconditionException);
}
TEST_F(UnOuvrage, villeChiffreInvalide)
{
	ASSERT_THROW(ouvrage.asgVille("Monte2000"),PreconditionException);
}
TEST_F(UnOuvrage, villeSpecialeInvalide)
{
	ASSERT_THROW(ouvrage.asgVille("Québéc."),PreconditionException);
}
/**
 * \test Test de la méthode asgEditeur
 *
 *     Cas valide: Mettre un editeur valide
 *     Cas invalide: Mettre un editeur invalide(vide)
 *                 : Mettre une ville invalide (chiffre)
 *                 : Mettre une ville invalide (caractères spéciaux).
 */
TEST_F(UnOuvrage, editeurValide)
{
	ouvrage.asgEditeur("Flap");
}
//cas invalide
TEST_F(UnOuvrage, editeurVideInvalide)
{
	ASSERT_THROW(ouvrage.asgEditeur(""),PreconditionException);
}
TEST_F(UnOuvrage, editeurChiffreInvalide)
{
	ASSERT_THROW(ouvrage.asgEditeur("Flap2304"),PreconditionException);
}
TEST_F(UnOuvrage, editeurSpecialInvalide)
{
	ASSERT_THROW(ouvrage.asgEditeur("-Flapéé!"),PreconditionException);
}
/**
 * \test Test de la méthode clone
 *
 *     Cas valide: Cloner une reference
 *     Cas invalide:Aucun d'identifié.
 */
TEST_F(UnOuvrage, clone)
{
	string ouvrageClone=ouvrage.clone()->reqReferenceFormate();
	ASSERT_EQ(ouvrageClone,ouvrage.reqReferenceFormate());
}


/** @} Fin defgroup*/
