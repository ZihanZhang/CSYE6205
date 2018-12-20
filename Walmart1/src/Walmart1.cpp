//============================================================================
// Name        : Walmart1.cpp
// Author      : Zihan Zhang
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Walmart.h"
#include "Item.h"
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	edu::neu::Walmart walmart;

	walmart.addItem(12, "pen");
	walmart.addItem(30, "paper");
	walmart.addItem(5, "notebook");
	walmart.addItem(8, "ruler");
	walmart.addItem(10, "towel");

	std::cout<< "Original Order: " << std::endl;
	walmart.display();

	std::sort(walmart.v.begin(), walmart.v.end(), edu::neu::Walmart::sortByPrice);

	std::cout << "Sort By Price: " << std::endl;
	walmart.display();

	std::cout << "Sort By Name: " << std::endl;
	std::sort(walmart.v.begin(), walmart.v.end(), edu::neu::Walmart::sortByName);
	walmart.display();

	return 0;
}
