#include <iostream>
#include <string>

#include "CoffeeVendingMachine.h"
using namespace std;

void CoffeeVendingMachine::run() {
	cout << "****" << name << "이 작동합니다." << "****" << endl;

	while (true){
		cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3: 밀크커피, 4:잔량보기, 5:채우기 >>" ;
		int menu;
		cin >> menu;

		switch (menu)
		{

		case 1: selectEspresso(); break;
		case 2: selectAmericano(); break;
		case 3: selectSugarCoffee(); break;
		case 4: show(); break;
		case 5: fill(); break;
		case 6: cout << "exit"; break;
		}
		show();
	}
}

void CoffeeVendingMachine::fill() {
	for (int i = 0; i < 3; i++)
	{
		tong[i].fill();
	}
}

void CoffeeVendingMachine::show() {
	cout << "커피";
	tong[0].show();

	cout << "물";
	tong[1].show();

	cout << "설탕";
	tong[2].show();
}

void CoffeeVendingMachine::selectEspresso() {
	if (tong[0].getSize() <= 0 || tong[1].getSize() <= 1) {
		cout << "&&재료가 부족합니다" << endl;
		return;
	}
	tong[0].consume(1);
	tong[1].consume(1);
}

void CoffeeVendingMachine::selectAmericano() {
	if (tong[0].getSize()<= 0 || tong[1].getSize() <= 2){
		cout << "재료가 부족합니다" << endl;
		return;
	}
	tong[0].consume(1);
	tong[1].consume(2);

}

void CoffeeVendingMachine::selectSugarCoffee() {
	if (tong[0].getSize() <= 0 || tong[1].getSize() <= 2 || tong[2].getSize() <= 1) {
		cout << "재료가 부족합니다" << endl;
		return;
	}
	tong[0].consume(1);
	tong[1].consume(2);
	tong[2].consume(1);
}
