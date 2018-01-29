/**
 * \file ReferenceTesteur.cpp
 * \brief Implantation des tests unitaires de la classe Reference
 *        Reference étant une classe abstraite, on crée une classe concrète
 *        dérivée de cette classe afin de pouvoir effectuer les tests
 * \author Yassine Zahoui
 * \date 2016-04-03
 */

#include<gtest/gtest.h>
#include "Reference.h"
#include <iostream>
#include <sstream>
using namespace tp;
using namespace std;

/**
 * \class ReferenceDeTest
 * \brief classe de test permettant de tester la classe abstraite Reference
 */
class ReferenceDeTest: public Reference
{
public:
	ReferenceDeTest(const std::string& p_auteurs, const std::string& p_titre, const std::string& p_identifiant, unsigned p_annee) :
		Reference(p_auteurs, p_titre, p_identifiant, p_annee)
	{}; //instancie un objet Reference

	virtual std::string reqReferenceFormate() const
	{
		return Reference::reqReferenceFormate();
	};
	virtual Reference* clone() const
	{

	};
};

/**
 * \class UneReference
 * \brief Fixture  UneReference pour la création d'un objet Reference pour les tests
 */
class UneReference: public ::testing::Test
{
public:
	UneReference() :
		t_reference("Axel", "Barcelone", "ISSN 0395-2037", 2015)
	{};

	ReferenceDeTest t_reference;

};

/**
 * \test Test du Constructeur de Reference
 *        cas valide: Constructeur avec parametres valides
 *        cas invalide:
 *        Auteurs vide
 *        Titre vide
 *        Identifiant invalide
 *        annee = 0
 */
TEST(Reference, ConstructeurAvecParametre)
{
	ReferenceDeTest UneRef("Axel", "Barcelone", "ISSN 0395-2037", 2015);
	ASSERT_EQ("Axel", UneRef.reqAuteurs());
	ASSERT_EQ("Barcelone", UneRef.reqTitre());
	ASSERT_EQ("ISSN 0395-2037", UneRef.reqIdentifiant());
	ASSERT_EQ(2015, UneRef.reqAnnee());
}
//cas invalide
TEST(Reference,ConstructeurInvalideAuteurs)
{
	ASSERT_THROW(ReferenceDeTest UneRef("", "Barcelone", "ISSN 0395-2037", 2015),ContratException);

}
TEST(Reference,ConstructeurInvalideTitre)
{
	ASSERT_THROW(ReferenceDeTest UneRef("Axel", "", "ISSN 0395-2037", 2015),ContratException);

}
TEST(Reference,ConstructeurInvalideIdentifiant)
{
	ASSERT_THROW(ReferenceDeTest UneRef("Axel", "Barcelone", "ISSN 0395-2055", 2015),ContratException);

}
TEST(Reference,ConstructeurInvalideAnnee)
{
	ASSERT_THROW(ReferenceDeTest UneRef("Axel", "Barcelone", "ISSN 0395-2037", 0),ContratException);

}
/**
 * \test Test de la méthode reqAuteurs()
 *
 *     Cas valide: vérifier le retour de l'auteur
 *     Cas invalide: aucun.
 */
TEST_F(UneReference, reqAuteurs)
{
	ASSERT_EQ("Axel",t_reference.reqAuteurs());
}
/**
 * \test Test de la méthode reqTitre
 *
 *     Cas valide: vérifier le retour du titre
 *     Cas invalide: aucun.
 */
TEST_F(UneReference,reqTitre){

	ASSERT_EQ("Barcelone", t_reference.reqTitre());
}
/**
 * \test Test de la méthode reqIdentifiant
 *
 *     Cas valide: vérifier le retour de l'identifiant
 *     Cas invalide: aucun.
 */
TEST_F(UneReference,reqIdentifiant){

	ASSERT_EQ("ISSN 0395-2037", t_reference.reqIdentifiant());
}
/**
 * \test Test de la méthode reqAnnee
 *
 *     Cas valide: vérifier le retour de l'annee
 *     Cas invalide: aucun.
 */
TEST_F(UneReference,reqAnnee){

	ASSERT_EQ(2015, t_reference.reqAnnee());
}
/**
 * \test Test de la méthode reqReferenceFormate();
 *        Cas valides: vérifier le retour des information sur l'objet Reference formaté
 *        Cas invalides: aucun
 */
TEST_F(UneReference,reqReferenceFormate)
{
	ostringstream os;
	os << t_reference.reqAuteurs() << ". " << t_reference.reqTitre() << ". ";
	ASSERT_EQ(os.str(),t_reference.reqReferenceFormate());
}
/**
 * \test Test de la méthode asgAuteurs
 *
 *     Cas valide: Mettre un auteur valide
 *     Cas invalide: Mettre un auteur invalide (vide).
 *                 : Mettre un auteur invalide (Caractères spéciaux)
 *                 : Mettre un auteur invalide (Chiffre).
 */
TEST_F(UneReference, auteursValide)
{
	t_reference.asgAuteurs("Axel");
}
//cas invalide
TEST_F(UneReference, auteursInvalide)
{
	ASSERT_THROW(t_reference.asgAuteurs(""),PreconditionException);
}
TEST_F(UneReference, auteursSpeciauxInvalide)
{
	ASSERT_THROW(t_reference.asgAuteurs("Axéél!;"),PreconditionException);
}
TEST_F(UneReference, auteursChiffreInvalide)
{
	ASSERT_THROW(t_reference.asgAuteurs("Axe12345"),PreconditionException);
}
/**
 * \test Test de la méthode asgTitre
 *
 *     Cas valide: Mettre un titre valide
 *     Cas invalide: Mettre un titre invalide.
 */
TEST_F(UneReference, titreValide)
{
	t_reference.asgTitre("Barcelone");
}
//cas invalide
TEST_F(UneReference, titreInvalide)
{
	ASSERT_THROW(t_reference.asgTitre(""),PreconditionException);
}
/**
 * \test Test de la méthode asgIdentifiant
 *
 *     Cas valide: Mettre un identifiant valide
 *     Cas invalide: Mettre un identifiant invalide.
 */
TEST_F(UneReference, identifiantValide)
{
	t_reference.asgIdentifiant("ISSN 0395-2037");
}
//cas invalide
TEST_F(UneReference, identifiantInvalide)
{
	ASSERT_THROW(t_reference.asgIdentifiant("ISSN 0395-3333"),PreconditionException);
}
/**
 * \test Test de la méthode asgAnnee
 *
 *     Cas valide: Mettre une annee valide
 *     Cas invalide: Mettre une annee invalide.
 */
TEST_F(UneReference, anneeValide)
{
	t_reference.asgAnnee(2011);
}
//cas invalide
TEST_F(UneReference, anneeInvalide)
{
	ASSERT_THROW(t_reference.asgAnnee(0),PreconditionException);
}
/**
 * \test Test de la méthode operator==
 *
 *     Cas valide: Mettre deux references égales
 *     Cas invalide: Mettre deux references inégales
 */
TEST_F(UneReference, operateurValide)
{
	ASSERT_EQ("Axel",t_reference.reqAuteurs());
	ASSERT_EQ("Barcelone", t_reference.reqTitre());
	ASSERT_EQ("ISSN 0395-2037", t_reference.reqIdentifiant());
	ASSERT_EQ(2015, t_reference.reqAnnee());
}
//cas invalide
TEST_F(UneReference, operateurInvalide)
{
	ASSERT_NE("Ax",t_reference.reqAuteurs());
	ASSERT_NE("Madrid", t_reference.reqTitre());
	ASSERT_NE("ISSN 1292-8399", t_reference.reqIdentifiant());
	ASSERT_NE(2010, t_reference.reqAnnee());
}
TEST_F(UneReference, operateurAuteursInvalide)
{
	ASSERT_NE("Ax",t_reference.reqAuteurs());
}
TEST_F(UneReference, operateurTitreInvalide)
{
	ASSERT_NE("Madrid", t_reference.reqTitre());
}
TEST_F(UneReference, operateurIdentifiantInvalide)
{
	ASSERT_NE("ISSN 1292-8399", t_reference.reqIdentifiant());
}
TEST_F(UneReference, operateurAnneeInvalide)
{
	ASSERT_NE(2010, t_reference.reqAnnee());
}
/** @} Fin defgroup*/

