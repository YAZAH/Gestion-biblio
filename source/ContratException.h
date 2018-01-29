//! \file ContratException.h
//! \brief D�claration de la classe ContratException et de ses h�ritiers:
//! std::logic_error        Classe de base des exceptions logiques
//! ContratException:       Classe de base des exceptions de contrat.
//! AssertionException:     Classe de gestion des erreurs d'assertion.
//! PreconditionException:  Classe de gestion des erreurs de pr�condition.
//! PostconditionException: Classe de gestion des erreurs de postcondition.
//! InvariantException:     Classe de gestion des erreurs d'invariant.
//! \author administrateur
//! \date 16 juin 2011
//! \version r�vis�e 14 f�vrier 2012 balises Doxygen C++

#ifndef CONTRATEXCEPTION_H_DEJA_INCLU
#define CONTRATEXCEPTION_H_DEJA_INCLU
#include "ContratException.h"

#include <string>
#include <stdexcept>

class ContratException: public std::logic_error
{
public:
	ContratException(std::string, unsigned int, std::string, std::string);
	~ContratException() throw ()
	{
	}
	;
	std::string reqTexteException() const;

private:
	std::string m_expression;
	std::string m_fichier;
	unsigned int m_ligne;
};

class AssertionException: public ContratException
{
public:
	AssertionException(std::string, unsigned int, std::string);
};

class PreconditionException: public ContratException
{
public:
	PreconditionException(std::string, unsigned int, std::string);
};

class PostconditionException: public ContratException
{
public:
	PostconditionException(std::string, unsigned int, std::string);
};

class InvariantException: public ContratException
{
public:
	InvariantException(std::string, unsigned int, std::string);
};

// --- D�sactiver les warnings de Microsoft sur la longueur des symboles
//#pragma warning(disable : 4786)

// --- D�finition des macros de contr�le de la th�orie du contrat

#if !defined(NDEBUG)
// --- Mode debug

#  define INVARIANTS() \
      verifieInvariant()

#  define ASSERTION(f)     \
      if (!(f)) throw AssertionException(__FILE__,__LINE__, #f);
#  define PRECONDITION(f)  \
      if (!(f)) throw PreconditionException(__FILE__, __LINE__, #f);
#  define POSTCONDITION(f) \
      if (!(f)) throw PostconditionException(__FILE__, __LINE__, #f);
#  define INVARIANT(f)   \
      if (!(f)) throw InvariantException(__FILE__,__LINE__, #f);

// --- LE MODE RELEASE
#else

#  define PRECONDITION(f);
#  define POSTCONDITION(f);
#  define INVARIANTS();
#  define INVARIANT(f);
#  define ASSERTION(f);

#endif  // --- if !defined (NDEBUG)
#endif  // --- ifndef CONTRATEXCEPTION_H_DEJA_INCLU

