/*
 * BaseItem.cpp
 *
 *  Created on: 2018年11月6日
 *      Author: zihan
 */

#include "BaseItem.h"

namespace edu {
namespace neu {
namespace csye6205 {

BaseItem::BaseItem() {
	// TODO Auto-generated constructor stub

}

BaseItem::~BaseItem() {
	// TODO Auto-generated destructor stub
}

BaseItem::BaseItem(int id, string name, double price) {
	this->id = id;
	this->name = name;
	this->price = price;
}

void BaseItem::setName(const string name) {
	this->name = name;
}
const string BaseItem::getName() const{
	return this->name;
}
void BaseItem::setPrice(const double price) {
	this->price = price;
}
const double BaseItem::getPrice() const{
	return this->price;
}
const string BaseItem::info() const{
	return this->information;
}
void BaseItem::show() const{

}

}
}
}
