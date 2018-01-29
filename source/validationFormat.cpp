/*
 * fonctionsUtilitaires.cpp
 *
 *  Created on: 2016-02-09
 *      Author: Sativen Murden
 */

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <string.h>
#include <vector>
#include "validationFormat.h"

using namespace std;

namespace tp {

/*La fonction validerFormatNom permet de valider le nom et prénom de quelqu'un.
 * Il prend en compte les espaces et les accents dans le nom.
 * Toutefois, les chiffres et les caracteres speciaux ne sont pas acceptés
 */
bool validerFormatNom(const std::string& p_nom) {
	int taille = 0; // On détermine la dimension de la chaine de caractere entrée
	taille = p_nom.size();
	if (p_nom.empty() != false) { // On accepte les espaces vides dans la chaine de caractere saisie
		return false;
	}

	for (int i = 0; i < taille; i++) // On vérifie si l'on a des chiffres dans la saisie du nom
			{
		if (isdigit(p_nom[i])) // Si oui, la fonction retourne un booléen faux = 0
				{
			return false;
		}
	}

	for (int i = 0; i < taille; i++) {
		if (isalpha(p_nom[i]) == true) // On vérifie ensuite si on a bien des alphabets dans la saisie
				{
			return true;
		}
	} 			// si oui, la fonction retourne un bouléen vrai =1

	return true;
}

/*La fonction validerCodeIssn permet de valider le code ISSN.
 * Il prend en compte les caracteres ISSN et vérifie les chiffres du code.
 * Cette fonction valide si le code ISSN rentré par l'utilisateur est correcte
 */

//bool validerCodeIssn(const std::string& p_issn);
/*La fonction validerCodeIssn permet de valider le code ISBN.
 * Il ne prend pas en compte les caracteres du début ISBN, mais vérifie soit les 10 ou 13 chiffres du code.
 * Cette fonction valide si le code ISSN rentré par l'utilisateur est correcte
 */

bool validerCodeIsbn(const std::string& ISBN);
bool validerCodeIsbn(const std::string& ISBN) {
	// Declaration variables
	int longueur = 0;
	int poids = 1;
	int total = 0;
	int cleDeControl;
	bool bon = false;
	std::istringstream estUnISBN(ISBN);
	std::string groupe1;

	char buffer[256];
	estUnISBN.getline(buffer, 255, '-');

	std::string part1 = buffer;
	estUnISBN.getline(buffer, 255, '-');

	std::string part2 = buffer;

	std::string codeISBN = part1 + part2;
	estUnISBN.getline(buffer, 255, '-');

	std::string part3 = buffer;
	codeISBN = codeISBN + part3;

	//code ISBN 10 ou a 13 chiffres
	longueur = ISBN.length();
	if (longueur == 13) {
		std::string part4;
		estUnISBN >> part4;
		codeISBN = codeISBN + part4;
	}

	else {
		estUnISBN.getline(buffer, 255, '-');
		std::string part4 = buffer;
		codeISBN = codeISBN + part4;
		std::string part5;
		estUnISBN >> part5;
		codeISBN = codeISBN + part5;
	}

	if (codeISBN.length() == 10) {

		for (int i = 0; i < 9; i++) {

			total = total + (poids * (codeISBN[i] - '0'));
			poids++;
		}
		// Si la clé est représenté par X

		cleDeControl = total % 11;

		if (cleDeControl == 10 && codeISBN[9] == 'X') {
			bon = true;

		} else if (cleDeControl != 10 && (cleDeControl == codeISBN[9] - '0')) {
			bon = true;
		} else {
			bon = false;
		}
	} else if (codeISBN.length() == 13) {
		for (int i = 0; i < 12; i++) {

			//position paire
			if ((i + 1) % 2 == 0) {
				total = total + (3 * (codeISBN[i] - '0'));
			} else {
				total = total + (codeISBN[i] - '0');
			}
		}

		cleDeControl = (10 - (total % 10)) % 10;

		if (cleDeControl == 10 && codeISBN[12] == 'X') {
			bon = true;
		}

		else if (cleDeControl != 10 && (cleDeControl == codeISBN[12] - '0')) {
			bon = true;
		} else {
			bon = false;
		}
	} else {
		bon = false;
	}
	return bon;
}
//Fonction valide le code validerCodeIssn

bool validerCodeIssn(const std::string& p_issn)
{
    int lengt = 0;
    int poids = 8;
    int sommes = 0;
    bool valider = false;
    lengt = p_issn.length();
    // Valider la chaine
    if(lengt != 14)
    {
        return false;
    }
    std::istringstream is_issn(p_issn);
    std::string strIssn;
    is_issn >> strIssn;
    if (strIssn != "ISSN" )
    {
        return false ;
    }
    char buffer[256];
    is_issn.ignore();
    is_issn.getline(buffer, 255,'-');
    std::string part1 = buffer;
    std::string part2;
    is_issn >> part2;
    std::string codeIssnb = part1 + part2;
    for (int i = 0 ; i <= 6 ; i++)
    {
        sommes = sommes + (poids * (codeIssnb[i] - '0'));
        poids --;
    }
    int div = sommes % 11;
    int keyControle = 11 - div;
    if (keyControle == 10 && codeIssnb[7] == 'X')
    {
        valider = true;
    }
    else if (keyControle != 10 && keyControle == codeIssnb[7] - '0')
    {
        valider = true;
    }
    else
    {
         valider= false;
    }
    return valider;
}

}/* namespase tp*/

