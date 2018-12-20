/*
 * AutoDealer.h
 *
 *  Created on: 2018年12月6日
 *      Author: zihan
 */

#ifndef AUTODEALER_H_
#define AUTODEALER_H_

#include <vector>
#include "Car.h"
#include <iostream>
#include <algorithm>

namespace edu {
namespace neu {
namespace csye {

using namespace std;

class AutoDealer {
private:
	vector<Car*> inventory;
public:
	void addCar(Car* c);
	void showInventory();
	void sortByPrice();
	void sortByName();
	void transformPrice(int offset);
	AutoDealer();
	virtual ~AutoDealer();
	static bool sortFunctionByPrice(Car* c1, Car* c2) {
		return c1->getPrice() > c2->getPrice();
	}
	static bool sortFunctionByName(Car* c1, Car* c2) {
		return c1->getName() > c2->getName();
	}
};

} /* namespace csye */
} /* namespace neu */
} /* namespace edu */

#endif /* AUTODEALER_H_ */
