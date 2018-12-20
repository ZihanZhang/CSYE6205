/*
 * IphoneItem.h
 *
 *  Created on: 2018年11月6日
 *      Author: zihan
 */

#ifndef IPHONEITEM_H_
#define IPHONEITEM_H_

#include "BaseItem.h"

namespace edu {
namespace neu {
namespace csye6205 {

class IphoneItem: public BaseItem {
public:
	IphoneItem();
	IphoneItem(int id, string name, double price);
	virtual ~IphoneItem();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* IPHONEITEM_H_ */
