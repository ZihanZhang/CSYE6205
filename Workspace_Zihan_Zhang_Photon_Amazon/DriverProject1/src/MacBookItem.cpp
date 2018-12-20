/*
 * MacBookItem.cpp
 *
 *  Created on: 2018年11月6日
 *      Author: zihan
 */

#include "MacBookItem.h"

namespace edu {
namespace neu {
namespace csye6205 {

MacBookItem::MacBookItem() {
	// TODO Auto-generated constructor stub

}

MacBookItem::MacBookItem(int id, string name, double price) {
	this->id = id;
	this->name = name;
	this->price = price;
}

MacBookItem::~MacBookItem() {
	// TODO Auto-generated destructor stub
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
