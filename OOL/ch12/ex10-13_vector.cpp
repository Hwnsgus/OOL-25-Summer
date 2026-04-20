#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Student {
public:
	Student(string name, int score) {
		this->name = name;
		this->score = score;
	}
	string name;
	int score;
};

class ScoreManager {
	vector<Student>list; //vector = 가벼운 배열, 하나만 저장함
	string name;
	void input();
	void search();
public:
	ScoreManager(string name) { this->name = name;}
	void run();
};

void ScoreManager::run() {
	cout << "***** 점수관리 프로그램" << name << "을 시작합니다 *****" << endl;
	while (true) {
		cout << "입력:1, 조회:2, 종료:3 >>";
		int menu;
		cin >> menu;

		switch (menu) {
		case 1: input(); break;
		case 2: search(); break;
		case 3: cout << "프로그램을 종료합니다" << endl;
			return;
		}
	}
}

void ScoreManager::input() { //벡터는 배열이기에 삽입 삭제 시간이 오래걸림
	//중간에 값이 사라진다고 하면 배열이라 다 땡기거나 밀어아야됨 << 메모리 위치가 변함
	cout << "이름과 점수 >>";
	string name;
	int score;
	cin >> name >> score;
	list.push_back(Student(name, score));
	cout << list.size() << "개 저장됨" << endl;
}

void ScoreManager::search() {
	cout << "이름 >>";
	string name;
	cin >> name;
	for (int i = 0; i < list.size(); i++){
		Student s = list.at(i);
		if (s.name == name){
			cout << name << "의 점수는" << s.score << endl;
			return;
		}
	}
	cout << name << "학생은 정보에 없습니다" << endl;

}

int main() {
	ScoreManager sMan("Ai Score");
	sMan.run();
}