/*
 * Walmart.cpp
 *
 *  Created on: 2018年10月15日
 *      Author: zihan
 */

#include "Walmart.h"
#include <iostream>

namespace edu {
namespace neu {

Walmart::Walmart() {
	// TODO Auto-generated constructor stub

}

Walmart::~Walmart() {
	// TODO Auto-generated destructor stub
}

void Walmart::addItem(int price, string name) {
	Item newitem(price, name);
	this->v.push_back(newitem);
}

void Walmart::display() {
	cout << "Walmart" << endl<<endl;
	for(vector<edu::neu::Item>::iterator it = this->v.begin(); it != this->v.end(); ++it) {
	    it->print();
	}
}

} /* namespace neu */
} /* namespace edu */
