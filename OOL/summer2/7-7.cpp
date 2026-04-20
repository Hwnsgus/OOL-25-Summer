#include <iostream>
using namespace std;
//Friend 함수 예제


class Matrix {
	int data[2][2];
public:
	Matrix();
	Matrix(int a, int b, int c, int d);
	void operator >>(int x[]);
	//void operator <<(int y[]);
	Matrix& operator <<(int y[]);
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



void Matrix::operator>>(int x[]) {
	int k = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			x[k] = data[i][j];
			k++;
		}
	}
}

//void Matrix::operator<<(int y[]) {
//	int k = 0;
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 2; j++) {
//			data[i][j] = y[k];
//			k++;
//		}
//	}
//}

Matrix& Matrix::operator<<(int y[]) {
	int k = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			data[i][j] += y[k];
			k++;
		}
	}
	return *this;
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
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1, 2, 3, 4 };

	a >> x; // shift 연산 양쪽에 숫자가 와야함 a.>>(x)로 연산함
//	b << y; // b. >>(y)
	b << y << x;


	for (int i = 0; i < 4; i++) cout << x[i] << ' ';
	cout << endl;

	b.show();

}