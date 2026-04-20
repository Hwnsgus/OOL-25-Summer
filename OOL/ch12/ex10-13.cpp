#include <iostream>
#include <string>
#include <map>
using namespace std;

class ScoreManager{
	map<string, int> list;
	string name;
	void input();
	void search();
public:
	ScoreManager(string name) { this->name = name; };
	void run();
};

void ScoreManager::run() {
	cout << "***** 점수관리 프로그램" << name << "을 시작합니다 *****" << endl;
	while (true) {
		cout << "입력:1, 조회:2, 종료:3 >>";
		int menu;
		cin >> menu;

		switch (menu){
		case 1: input(); break;
		case 2: search(); break;
		case 3: cout << "프로그램을 종료합니다" << endl;
			return;
		}
	}
}

void ScoreManager::input(){
	cout << "이름과 점수 >>";
	string name;
	int score;
	cin >> name >> score;
	//list[name] = score;
	list.insert(make_pair(name, score)); //map에 저장함
	cout << list.size() << "개 저장됨" << endl;
}

void ScoreManager::search() { //키와 해쉬값으로 메모리의 특정 장소에 저장함
	//안 쓰는 공간이 많을 수 있음
	cout << "이름 >>";
	string name;
	cin >> name;
	if (list.find(name) == list.end()){ //find가 name을 찾음 없으면 end라는 정보를 입력
		cout << name << "학생은 정보에 없습니다" << endl;
	}
	else {
		int score = list[name];// name의 리스트를 가진 score
		cout << name << "의 점수는" << score << endl;
	}
}

int main() {
	ScoreManager sMan("Ai Score");
	sMan.run();
}