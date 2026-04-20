#include <iostream>
using namespace std;

#include "ColorPorint.h"

int main() {
	ColorPoint cp(5, 5, "RED");
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();	

	ColorPoint zeroPoint;
	zeroPoint.show();
	zeroPoint.up();
	zeroPoint.show();
	cp.up();
	cp.show();
}