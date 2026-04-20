#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
	Random (){}//생성자를 private으로 설정
public:
	static void seed() { srand((unsigned int)time(0)); }
	static int nextInt(int min = 0, int max = 32767);
	static char nextAlphabet();
	static double nextDouble();// 0~1 사이의 실수 리턴
};

int Random::nextInt(int min, int max) {
	int w = max - min + 1;
	int n = rand() % w + min;
	return n;
}

char Random::nextAlphabet() {
	char c;
	int n = rand() % 26;
	int m = rand() % 2;

	if (m == 0){
		 c = n + 'a';
	}
	else {
		 c = n + 'A';
		 return c;
	}
}

double Random::nextDouble() {
	double d = (double)rand();
	d = d / RAND_MAX; // RAND_MAX -> rand를 double 타입으로 호환되도록 해줌
	return d;
}

int main() {
	Random::seed();
	cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; i++) {
		int n = Random::nextInt(1, 100);
		cout << n << ' ';
	}cout << endl;

	cout << "알파벳을 랜덤하게 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; i++) {
		char c = Random::nextAlphabet();
		cout << c << ' ';
	}cout << endl;



	cout << "랜덤한 실수 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; i++) {
		double d = Random::nextDouble();
		cout << d << ' ';
	}cout << endl;


}