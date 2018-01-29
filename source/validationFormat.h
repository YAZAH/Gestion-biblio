/*
 * validationFormat.h
 *
 *  Created on: 2016-02-09
 *      Author: Sativen Murden
 */

#ifndef VALIDATIONFORMAT_H_
#define VALIDATIONFORMAT_H_
# include <string>
# include <iostream>

namespace tp {
bool validerFormatNom(const std::string& p_nom);

bool validerCodeIssn(const std::string& p_issn);

bool validerCodeIsbn(const std::string& p_isbn);


}/* namespase tp*/
#endif /* VALIDATIONFORMAT_H_ */
