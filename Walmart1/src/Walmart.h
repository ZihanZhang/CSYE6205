/*
 * Walmart.h
 *
 *  Created on: 2018年10月15日
 *      Author: zihan
 */

#ifndef WALMART_H_
#define WALMART_H_
#include <vector>
#include "Item.h"
using namespace std;

namespace edu {
namespace neu {

class Walmart {
public:
	vector<Item> v;
	void addItem(int price, string name);
	void display();
	static bool sortByName(Item i1, Item i2) {
		return i1.getName() > i2.getName();
	}

	static bool sortByPrice(Item i1, Item i2) {
		return i1.getPrice() > i2.getPrice();
	}
	Walmart();
	virtual ~Walmart();
};

} /* namespace neu */
} /* namespace edu */

#endif /* WALMART_H_ */
