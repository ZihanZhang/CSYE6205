/*
 * AutoDealer.cpp
 *
 *  Created on: 2018年12月6日
 *      Author: zihan
 */

#include "AutoDealer.h"

namespace edu {
namespace neu {
namespace csye {

using namespace std;

AutoDealer::AutoDealer() {
	// TODO Auto-generated constructor stub

}

AutoDealer::~AutoDealer() {
	// TODO Auto-generated destructor stub
}

void AutoDealer::addCar(Car* c) {
	this->inventory.push_back(c);
}

void AutoDealer::showInventory() {
	for (Car* cp: this->inventory) {
		cout<<*cp<<endl;
	}
}

void AutoDealer::sortByPrice() {
	sort(this->inventory.begin(), this->inventory.end(), sortFunctionByPrice);
}

void AutoDealer::sortByName() {
	sort(this->inventory.begin(), this->inventory.end(), sortFunctionByName);
}

void AutoDealer::transformPrice(int offset) {
	transform(this->inventory.begin(), this->inventory.end(), this->inventory.begin(), [offset](Car* c) -> Car* {c->setPrice(c->getPrice() + offset);});
}
} /* namespace csye */
} /* namespace neu */
} /* namespace edu */
