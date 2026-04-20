#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "아래에 한 줄을 입력하세요" << endl;

	while (true){
		cout << ">>";
		string line;
		getline(cin, line);

		//랜덤한 위치 정하기
		int length = line.size();
		srand((unsigned)time(0)); // unsigned 양수로 해석하도록 함 time(0) 현재 시간값을 기준으로 seed 출력
		int index = rand()% length;

		if (line == "exit"){
			break;
		}

		//랜덤한 문자 생성
		int n = rand() % 26; //0~25 사이의 문자가 출력
		char c = 'a' + n;


		//문자 변경
		if (line.at(index)== c){
			line.at(index) == 'A' + n; //line[index]
		}
		else
			line.at(index) = c; //line[index] = c;
		cout << line << endl;

	}

}
