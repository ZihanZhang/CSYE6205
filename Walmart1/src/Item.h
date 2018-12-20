/*
 * Item.h
 *
 *  Created on: 2018年10月15日
 *      Author: zihan
 */

#ifndef ITEM_H_
#define ITEM_H_
#include "string"

using namespace std;

namespace edu {
namespace neu {

class Item {
	int price;
	string name;
public:
	string getName();
	int getPrice();
	void print();
	Item(int price, string name);
	virtual ~Item();
};

} /* namespace neu */
} /* namespace edu */

#endif /* ITEM_H_ */
