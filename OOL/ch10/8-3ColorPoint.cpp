#include<iostream>
#include<string>
#include "ColorPorint.h"
using namespace std;

ColorPoint::ColorPoint(int x, int y, string color) 
	: Point(x, y){ //point.h에 대한 Point 호출
	this->color = color;	
}

void ColorPoint::setPoint(int x, int y) {
	move(x, y);

}

ColorPoint::ColorPoint() : Point(0, 0){
	color = "BLACK";
}

void ColorPoint::setColor(string color) {
	this->color = color;
}

void ColorPoint::show() {
	cout << color << "색으로 (" << getX() << "," << getY() << ")에 위치한 점입니다." << endl;
}

void ColorPoint::up() {
	move(getX(), getY() + 1);
}