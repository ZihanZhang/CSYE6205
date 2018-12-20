/*
 * Car.h
 *
 *  Created on: 2018年12月6日
 *      Author: zihan
 */

#ifndef CAR_H_
#define CAR_H_

#include "AbstractCar.h"
#include <ostream>

namespace edu {
namespace neu {
namespace csye {

using namespace std;

class Car: public AbstractCar {
private:
	int id;
	double price;
	string name;
	string description;
public:
	void setID(int id);
	int getID() const;
	void setPrice(double price);
	double getPrice() const;
	void setName(string name);
	string getName() const;
	void setDescription(string description);
	string getDescription() const;
	Car();
	Car(int id, double price, string name, string description);
	virtual ~Car();
};

std::ostream& operator<<(std::ostream& output, const Car& C);

} /* namespace csye */
} /* namespace neu */
} /* namespace edu */

#endif /* CAR_H_ */
