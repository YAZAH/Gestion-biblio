/*
 * ReferenceDejaPresenteException.h
 *
 *  Created on: 2016-04-19
 *      Author: etudiant
 */

#ifndef REFERENCEDEJAPRESENTEEXCEPTION_H_
#define REFERENCEDEJAPRESENTEEXCEPTION_H_

#include "ReferenceException.h"

namespace tp {

class ReferenceDejaPresenteException: public ReferenceException {
public:
	ReferenceDejaPresenteException(const std::string& p_raison);

};

} /* namespace tp */

#endif /* REFERENCEDEJAPRESENTEEXCEPTION_H_ */
