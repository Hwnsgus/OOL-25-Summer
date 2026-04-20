#include <iostream>
using namespace std;

template<class T>
T biggest(T a[], int size) {
	T big = a[0];

	for (int i = 0; i < size; i++) {
		if (big < a[i]) {
			big = a[i];
		}
	}return big;
}

	int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	cout << biggest(x, 5) << endl;

	double d[] = { 1.5, 10.5, 100.6, 5.7, 4.2 };
	cout << biggest(d, 5) << endl;
	
	string s[] = { "hello", "good", "day", "computer" }; //글자순으로 출력
	cout << biggest(s, 4) << endl;
} 