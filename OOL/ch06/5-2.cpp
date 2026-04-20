#include <iostream>
#include <string>
using namespace std;

void half(double &x) { //참조에 의한 호출 -> 함수를 받는 쪽이 변수 값을 다른 이름으로 저장하여 계산
	x /= 2;
}


int main() {
	double n = 20;
	half(n);
	cout << n;
}