#ifndef COFFEEVENDINGMACHINE_H
#define COFFEEVENDINGMACHINE_H
#include "container.h"
#include <string>
using namespace std;

class CoffeeVendingMachine {
	string name;
	Container tong[3];
	void fill();
	void selectEspresso();
	void selectAmericano();
	void selectSugarCoffee();
	void show();

public:
	CoffeeVendingMachine(string name) { this->name = name;}
	void run();

};

#endif // !1


#pragma once
