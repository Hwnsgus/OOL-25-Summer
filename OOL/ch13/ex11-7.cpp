#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "dec" << '\t' << "hex" << '\t' << "char" << '\t';
	cout << "dec" << '\t' << "hex" << '\t' << "char" << '\t';
	cout << "dec" << '\t' << "hex" << '\t' << "char" << '\t';
	cout << "dec" << '\t' << "hex" << '\t' << "char" << endl;

	cout << "---" << '\t' << "---" << '\t' << "---" << '\t';
	cout << "---" << '\t' << "---" << '\t' << "---" << '\t';
	cout << "---" << '\t' << "---" << '\t' << "---" << '\t';
	cout << "---" << '\t' << "---" << '\t' << "---" << endl;


	cout << right; // 오른쪽으로 정렬인듯

	for ( int i = 0; i < 128; i++){ //dec, hex는 조작자     //삼항연산자
		cout << dec << i << '\t' << hex << i << '\t' << (isprint(i)?(char)i:'.') << '\t';
		if (i % 4== 3){
			cout << endl;
		}
	}
}