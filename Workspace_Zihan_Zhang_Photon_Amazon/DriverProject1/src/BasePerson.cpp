/*
 * BasePerson.cpp
 *
 *  Created on: 2018年11月6日
 *      Author: zihan
 */

#include "BasePerson.h"
#include <iostream>

namespace edu {
namespace neu {
namespace csye6205 {

BasePerson::BasePerson() {
	// TODO Auto-generated constructor stub

}

BasePerson::~BasePerson() {
	// TODO Auto-generated destructor stub
}

const string BasePerson::info()	const{
	return this->information;
}
void BasePerson::show() const{
	cout<<"";
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
