#include <iostream>
using namespace std;

int main() {
	int count = 0;
	int c;
	while ((c = cin.get()) != EOF){
		if (c == 'a')
			count++;
		else if (c == '\n') break;
	}
	cout << count << "°³" << endl;
}