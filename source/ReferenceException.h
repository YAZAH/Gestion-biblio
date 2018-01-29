/*
 * ReferenceException.h
 *
 *  Created on: 2016-04-17
 *      Author: etudiant
 */

#ifndef REFERENCEEXCEPTION_H_
#define REFERENCEEXCEPTION_H_
#include <string>
#include "ContratException.h"

namespace tp {

class ReferenceException: public std::runtime_error {

public:
	ReferenceException(const std::string& p_raison);

};

} /* namespace tp */

#endif /* REFERENCEEXCEPTION_H_ */
