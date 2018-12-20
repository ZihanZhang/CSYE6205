/*
 * Item.cpp
 *
 *  Created on: 2018年10月15日
 *      Author: zihan
 */

#include "Item.h"
#include <iostream>

namespace edu {
namespace neu {

Item::Item(int price, string name) {
	// TODO Auto-generated constructor stub
	this->name = name;
	this->price = price;
}

string Item::getName() {
	return this->name;
}

int Item::getPrice() {
	return this->price;
}

void Item::print() {
	cout << "Name: " << this->name << endl;
	cout << "Price: " << this->price << endl;
	cout<<""<<endl;
}

Item::~Item() {
	// TODO Auto-generated destructor stub
}

} /* namespace neu */
} /* namespace edu */
