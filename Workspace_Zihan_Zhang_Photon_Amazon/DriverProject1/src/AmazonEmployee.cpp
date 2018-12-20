/*
 * AmazonEmployee.cpp
 *
 *  Created on: 2018年11月6日
 *      Author: zihan
 */

#include "AmazonEmployee.h"

namespace edu {
namespace neu {
namespace csye6205 {

AmazonEmployee::AmazonEmployee() {
	// TODO Auto-generated constructor stub

}

AmazonEmployee::AmazonEmployee(int id, string firstname, string lastname, int age, double wage) {
	this->ID = id;
	this->FirstName = firstname;
	this->LastName = lastname;
	this->Age = age;
	this->Wage = wage;
}

AmazonEmployee::~AmazonEmployee() {
	// TODO Auto-generated destructor stub
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
