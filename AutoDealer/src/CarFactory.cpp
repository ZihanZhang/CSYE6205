/*
 * CarFactory.cpp
 *
 *  Created on: 2018年12月6日
 *      Author: zihan
 */

#include "CarFactory.h"
#include <vector>
#include <iostream>
#include <cstring>

namespace edu {
namespace neu {
namespace csye {

using namespace std;

CarFactory::CarFactory() {
	// TODO Auto-generated constructor stub

}

CarFactory::~CarFactory() {
	// TODO Auto-generated destructor stub
}

Car* CarFactory::create(string csvstring) {
	const char * delimiter = ",";
	vector<char> v(csvstring.begin(), csvstring.end());
	int id = stoi(string(strtok(v.data(), delimiter)));
	double price = stod(string(strtok(NULL, delimiter)));
	string name = string(strtok(NULL, delimiter));
	string description = string(strtok(NULL, delimiter));

	Car* obj = (Car*)nullptr;
	obj = new Car(id, price, name, description);
	return obj;
}

void CarFactory::freeCar(Car* c) {
	delete c;
	c = nullptr;
	return;
}

} /* namespace csye */
} /* namespace neu */
} /* namespace edu */
