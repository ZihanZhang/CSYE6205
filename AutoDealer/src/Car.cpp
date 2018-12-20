/*
 * Car.cpp
 *
 *  Created on: 2018年12月6日
 *      Author: zihan
 */

#include "Car.h"

namespace edu {
namespace neu {
namespace csye {

Car::Car() {
	// TODO Auto-generated constructor stub

}

Car::Car(int id, double price, string name, string description) {
	this->id = id;
	this->price = price;
	this->name = name;
	this->description = description;
}


Car::~Car() {
	// TODO Auto-generated destructor stub
}

void Car::setID(int id) {
	this->id = id;
}
int Car::getID() const{
	return this->id;
}
void Car::setPrice(double price) {
	this->price = price;
}
double Car::getPrice() const{
	return this->price;
}
void Car::setName(string name) {
	this->name = name;
}
string Car::getName() const{
	return this->name;
}
void Car::setDescription(string description) {
	this->description = description;
}
string Car::getDescription() const{
	return this->description;
}

std::ostream& operator<<(std::ostream& output, const Car& C) {
	output<< "ID: " << C.getID() << " Price: " << C.getPrice() << " Name: " << C.getName() << " Description: " << C.getDescription();

	return output;
}


} /* namespace csye */
} /* namespace neu */
} /* namespace edu */
