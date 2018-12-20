/*
 * IphoneItem.cpp
 *
 *  Created on: 2018年11月6日
 *      Author: zihan
 */

#include "IphoneItem.h"

namespace edu {
namespace neu {
namespace csye6205 {

IphoneItem::IphoneItem() {
	// TODO Auto-generated constructor stub

}

IphoneItem::IphoneItem(int id, string name, double price) {
	this->id = id;
	this->name = name;
	this->price = price;
}
IphoneItem::~IphoneItem() {
	// TODO Auto-generated destructor stub
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
