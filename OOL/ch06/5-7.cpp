#include <iostream>
using namespace std;

class MyIntStack {
	int *p= NULL;
	int tos = 0;
	int size = 0;

public:
	MyIntStack(int size) { 
		p = new int[size];
		if (!p)
		{
			cout << "동적 할당 실패" << endl;
			exit(0);
		}
		this->size = size;
	};
	~MyIntStack() {
		if(p != NULL)
		delete[] p;
	}

	bool push(int n);
	bool pop(int &n);

	MyIntStack(const MyIntStack& scr); //복사 생성자
};

MyIntStack::MyIntStack(const MyIntStack& src) { // 얕은 복사 코드 깊은 복사 코드를 만들어야 함 포인트 중복 x
	
	p = new int [src.size];
	for (int i = 0; i < src.tos; i++){
		p[i] = src.p[i];
	}
	tos = src.tos;
	size = src.size;
}

bool MyIntStack::push(int n) {
	if (tos == 10) {
		return false;
	}
	p[tos] = n;
	tos++;
	return true;

}

bool MyIntStack::pop(int& n) {
	if (tos == 0){
		return false;
		
	}
	tos--;
	n = p[tos]; // 포인터 p에서 시작해서 tos거리만큼 떨어져 있는 값  n = *(p + tos );
	return true;
}

int main() {
	MyIntStack a(50); // 저장소 객체 

	a.push(10);
	a.push(20);
	
	int n;
	a.pop(n);

	MyIntStack b = a;
	b.pop(n);
	cout << n;

/*for (int i = 0; i < 11; i++)
	{
		if (a.push(i) == false) {
			cout << "스택이 꽉참" << endl;
		}
		else {
			cout << "성공" << endl;

		}
	}

	int n;
	for (int n = 0; n < 11; n++)
	{
		if (a.pop(n) == false) {
			cout << "스택이 비어있음" << endl;
		}
		else {
			cout << "성공" << n << endl;
		}
	}*/
}