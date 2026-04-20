#ifndef POINT_H
#define POINT_H

class Point {
	int x, y;
public:
	Point(int x, int y) { this->x = x; this->y = y;}
		int getX() { return x; } //getter 멤버변수의 값을 설정 	//	void setX() { this->x = x ; } //setter 멤버변수의 값을 변경
		int getY() { return y; }
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
};


#endif 


