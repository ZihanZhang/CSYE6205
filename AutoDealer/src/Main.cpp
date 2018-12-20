//============================================================================
// Name        : Main.cpp
// Author      : Zihan Zhang
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "CarFactory.h"
#include "Car.h"
#include "AutoDealer.h"

using namespace std;

int main() {
	cout<<fixed;
	cout.precision(2);
	edu::neu::csye::CarFactory cf = edu::neu::csye::CarFactory();
	edu::neu::csye::AutoDealer ad = edu::neu::csye::AutoDealer();
	string ss[] = {"1,34000.99,BMW,red 5-speed convertible",
				  "2,25000.51,Jeep,good suv for wildland",
	              "3,5000.23,MINI,mini car good for parking",
	              "4,100000.00,Porsche,expensive racing car"};
	for (string s: ss) {
		edu::neu::csye::Car* c1 = cf.create(s);
		ad.addCar(c1);
	}
	cout<<"Add Cars into AutoDealer"<<endl;
	ad.showInventory();
	cout<<endl;

	cout<<"Sorted By Name:"<<endl;
	ad.sortByName();
	ad.showInventory();
	cout<<endl;

	cout<<"Sorted By Price:"<<endl;
	ad.sortByPrice();
	ad.showInventory();
	cout<<endl;

	cout<<"Sorted By Increased Price:"<<endl;
	ad.transformPrice(100);
	ad.sortByPrice();
	ad.showInventory();


	return 0;
}
