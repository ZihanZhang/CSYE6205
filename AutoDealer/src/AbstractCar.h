/*
 * AbstractCar.h
 *
 *  Created on: 2018年12月6日
 *      Author: zihan
 */

#ifndef ABSTRACTCAR_H_
#define ABSTRACTCAR_H_

#include <string>

namespace edu {
namespace neu {
namespace csye {

using namespace std;

class AbstractCar {
public:
	virtual void setID(int id) = 0;
	virtual int getID() const = 0;
	virtual void setPrice(double price) = 0;
	virtual double getPrice() const = 0;
	virtual void setName(string name) = 0;
	virtual string getName() const = 0;
	virtual void setDescription(string description) = 0;
	virtual string getDescription() const = 0;
	AbstractCar();
	virtual ~AbstractCar();
};

} /* namespace csye */
} /* namespace neu */
} /* namespace edu */

#endif /* ABSTRACTCAR_H_ */
