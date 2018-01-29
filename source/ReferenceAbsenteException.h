/*
 * ReferenceAbsenteException.h
 *
 *  Created on: 2016-04-19
 *      Author: etudiant
 */

#ifndef REFERENCEABSENTEEXCEPTION_H_
#define REFERENCEABSENTEEXCEPTION_H_

#include "ReferenceException.h"

namespace tp {

class ReferenceAbsenteException: public ReferenceException {
public:
	ReferenceAbsenteException(const std::string& p_raison);

};

} /* namespace tp */

#endif /* REFERENCEABSENTEEXCEPTION_H_ */
