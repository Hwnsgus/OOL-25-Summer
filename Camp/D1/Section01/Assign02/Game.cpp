#include <iostream>
#include <string>
#include "header/Game.h"

using namespace std;

void Game::run() {
    string name;
    const int SIZE = 4;
    int stat[SIZE] = {0}; 
    // stat[0] = HP
    // stat[1] = MP
    // stat[2] = 공격력
    // stat[3] = 방어력

    cout << "===========================================\n";
    cout << "   [ 던전 탈출 텍스트 RPG ]\n";
    cout << "===========================================\n";
    
    cout << "용사의 이름을 입력해주세요: ";
    cin >> name;

    // [1] HP와 MP 입력 유효성 검사 (while 루프)
    while (true) {
        cout << "\nHP와 MP를 입력해주세요: ";
        cin >> stat[0] >> stat[1];

        if (stat[0] > 50 && stat[1] > 50) {
            break;
        } else {
            cout << "HP나 MP의 값이 너무 작습니다. 다시 입력해주세요.\n";
        }
    }

    // [2] 공격력과 방어력 입력 유효성 검사 (while 루프)
    while (true) {
        cout << "공격력과 방어력을 입력해주세요: ";
        cin >> stat[2] >> stat[3];


        if (stat[2] > 0 && stat[3] > 0) {
            break;
        } else {
            cout << "공격력이나 방어력이 너무 작습니다. 다시 입력해주세요.\n";
        }
    }
    cout << "\n";
    
    cout << "* HP 포션 5개, MP 포션 5개가 기본 지급되었습니다"<< endl;
    
    int hpPotion = 5;
    int mpPotion = 5;
    bool isGameStart = false;
    int choice;
    
    while (!isGameStart){
        cout << "====================================\n";
        cout << "<캐릭터 강화>";
        cout << " 1. HP UP 2. MP UP 3. 공격력 2배"<< endl;
        cout << " 4. 방어력 2배 5. 현재 능력치 0. 게임 시작"<< endl;
        cout << "====================================\n";
        cout << "번호를 선택해주세요" << endl;
        cin >> choice;
        
        switch (choice)
        {
            case 1: (hpPotion > 0){
             stat[0] += hpPotion;
            }
            
        }
        
    }
    


    printStatus(name, stat);
}

void Game::printStatus(string name, int stat[]) {
    cout << "====================================\n";
    cout << "  " << name << " 의 현재 능력치\n";
    cout << "====================================\n";
    cout << "HP: " << stat[0] << "    MP: " << stat[1] << "\n";
    cout << "공격력: " << stat[2] << "    방어력: " << stat[3] << "\n";
    cout << "====================================\n";
}