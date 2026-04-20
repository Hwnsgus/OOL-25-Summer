#include <iostream>
#include <string>
using namespace std;

class Point {
	int x, y; // 점 위치
public:
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

class ColorPoint : public Point { //Point 클래스 상속, 파생 클래스
	string color;
public: 
	void setColor(string color) { this->color = color; }
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint();
}

int main() {
	Point p;
	p.set(3, 4);
	p.showPoint();

	ColorPoint cp;
	cp.set(3, 4);
	cp.setColor("Red");
	cp.showColorPoint();
}