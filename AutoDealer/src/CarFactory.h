/*
 * CarFactory.h
 *
 *  Created on: 2018年12月6日
 *      Author: zihan
 */

#ifndef CARFACTORY_H_
#define CARFACTORY_H_
#include <string>
#include <vector>
#include "Car.h"

namespace edu {
namespace neu {
namespace csye {

using namespace std;

class CarFactory {
public:
	CarFactory();
	virtual ~CarFactory();
	Car* create(string csvstring);
	void freeCar(Car* c);
};

} /* namespace csye */
} /* namespace neu */
} /* namespace edu */

#endif /* CARFACTORY_H_ */
