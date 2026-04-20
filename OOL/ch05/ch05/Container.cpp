#include <iostream>
#include "container.h"

using namespace std;

int Container::getSize() {
	return size;
}

void Container::fill() {
	size = MAX;
}

void Container::consume(int amount) {
	if (size < amount){
		size = 0;
	}
	else
		size -= amount;

}

void Container::show() {
	for (int i = 0; i < size; i++)
	{
		cout << "*";
	}
	cout << endl;
	//cout << size;
}