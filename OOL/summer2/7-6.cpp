#include <iostream>
using namespace std;

class Matrix {
	int data[2][2];
public:
	Matrix();
	Matrix(int a, int b, int c, int d);
	Matrix operator +(Matrix b);
	Matrix& operator +=(Matrix b);
	bool operator ==(Matrix b);
	void show();
};

Matrix::Matrix() {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			data[i][j] = 0;
		}
	}
}

Matrix::Matrix(int a, int b, int c, int d) {
	data[0][0] = a;
	data[0][1] = b;
	data[1][0] = c;
	data[1][1] = d;

}

Matrix Matrix::operator+(Matrix b) {
	Matrix tmp;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			tmp.data[i][j] = data[i][j] + b.data[i][j];
		}
	}
	return tmp;
}

Matrix& Matrix::operator+=(Matrix b) {

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			data[i][j] += b.data[i][j];
		}
	}
	return *this;
}

bool Matrix::operator==(Matrix b) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			if (data[i][j] == b.data[i][j])
				return false;
		}
	}
	return true;
}

void Matrix::show() {
	cout << "Matrix = {";
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << data[i][j] << ' ';
		}
	}
	cout << "}" << endl;
}

int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;// 다형성 연산자 하나에 의미를 새롭게 부여 컴파일러는 a+b는 정상적이지 않기에 a.+(b)로 변형하여 계산을 함 -> 이렇게 변형해야함
	a.show(); b.show(); c.show();
	
	(a += b) += Matrix(10, 10, 10, 10);// a.+=(b)로 계산
	a.show(); b.show(); c.show();

	if (a == c) {
		cout << " a and c are the same" << endl;
	}
	else
		cout << " a and c are the different" << endl;
}