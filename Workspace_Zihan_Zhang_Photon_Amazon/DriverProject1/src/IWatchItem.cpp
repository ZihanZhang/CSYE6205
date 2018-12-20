/*
 * IWatchItem.cpp
 *
 *  Created on: 2018年11月12日
 *      Author: zihan
 */

#include "IWatchItem.h"

namespace edu {
namespace neu {
namespace csye6205 {

IWatchItem::IWatchItem() {
	// TODO Auto-generated constructor stub

}

IWatchItem::IWatchItem(int id, string name, double price) {
	this->id = id;
	this->name = name;
	this->price = price;
}

IWatchItem::~IWatchItem() {
	// TODO Auto-generated destructor stub
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
