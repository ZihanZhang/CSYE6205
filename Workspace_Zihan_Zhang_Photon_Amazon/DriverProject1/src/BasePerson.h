/*
 * BasePerson.h
 *
 *  Created on: 2018年11月6日
 *      Author: zihan
 */

#ifndef BASEPERSON_H_
#define BASEPERSON_H_

#include "AbstractPersonAPI.h"

namespace edu {
namespace neu {
namespace csye6205 {

class BasePerson: public AbstractPersonAPI {
private:
	string information;
public:
	BasePerson();
	virtual ~BasePerson();

	virtual const string info() const;		// pure virtual method: not implemented, must be derived
	virtual void show() const;		// pure virtual method: not implemented, must be derived
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* BASEPERSON_H_ */
