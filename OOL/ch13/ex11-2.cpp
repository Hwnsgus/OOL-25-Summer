#include <iostream>
using namespace std;

int main() {
	int count = 0;
	char c;
	while (true){
		cin.get(c);
		if (cin.eof()) {
			break;
		}
		else if (c == ' ')
			count++;
		else if (c == '\n') break;
	}

	cout << count << "°³" << endl;
}

/*

void f() {
	int count = 0;
	int c;
	while ((c = cin.get()) != EOF) {
		if (c == 'a')
			count++;
		else if (c == '\n') break;
	}
	cout << count << "°³" << endl;
}*/