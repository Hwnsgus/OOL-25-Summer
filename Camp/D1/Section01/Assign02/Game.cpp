#include <iostream>
#include <string>
#include "header/Game.h"
#include "header/Player.h"
#include "header/jobs.h"
#include "header/Monster.h"

using namespace std;

Player* Game::run()
{
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
        case 1: 
            if (hpPotion > 0){
                stat[0] += 20;
                hpPotion--;
                cout<< "HP가 20 증가했습니다. (HP 포션 차감 : 남은 포션 " << hpPotion << ")" << endl;
            } else
            {
                cout << "HP 포션이 부족합니다!" << endl;
            }  
            break;
            
        case 2:
            if (mpPotion > 0)
            {
                stat[1] += 20;
                mpPotion--;
                cout<< "MP가 20 증가했습니다. (MP 포션 차감 : 남은 포션 " << mpPotion << ")" << endl;
            }
            else
            {
                cout << "*MP 포션이 부족합니다"<< endl;
            }
            break;
            
        case 3:
            stat[2] += 2;
            cout << "공격력이 2배 증가했습니다 (현재 공격력:" << stat[2] << ")" << endl;
            break;
            
        case 4:
            stat[3] *= 2;
            cout << "방어력이 2배 증가했습니다 (현재 방어력:" << stat[3] << ")" << endl;
            break;
            
        case 5:
            // 만들어둔 출력 함수 재활용
            printStatus(name, stat); 
            break;
                
        case 0:
            cout << "게임을 시작합니다!\n";
            isGameStart = true; // 플래그를 true로 바꿔서 다음 턴에 while 루프를 탈출하게 만듭니다.
            break;
                
        default:
            cout << "잘못된 입력입니다. 다시 선택해주세요.\n";
            break;
            
        }
        
    }
    
    int jobChoice;
    cout << "직업을 선택하세요 (1. 전사, 2. 마법사, 3. 도적, 4. 궁수)";
    cin >> jobChoice;
    
    Player* player = nullptr;
    if (jobChoice == 1)
    {
        player = new Warrior(name, stat[0], stat[1], stat[2], stat[3]);
    }else if (jobChoice == 2)
    {
        player = new Magician(name, stat[0], stat[1], stat[2], stat[3]);
    }else if (jobChoice == 3)
    {
        player = new Thief(name, stat[0], stat[1], stat[2], stat[3]);
    }else if (jobChoice == 4)
    {
        player = new Archer(name, stat[0], stat[1], stat[2], stat[3]);
    }else
    {
        cout <<"잘못된 선택입니다 기본 전사로 시작합니다";
        player = new Warrior(name, stat[0], stat[1], stat[2], stat[3]);
    }

    return player;
}

    void Game::battle(Player* player)
    {
        //몬스터 기본 스펙 이름, hp, mp, defense 순
        Monster slime("슬라임", 50, 40, 10, "슬라임의 액체", 5);
        
        cout << "\n===========================================\n";
        cout << "[ 전투 시작! ] " << player->getName() << " vs " << slime.getName() << "\n";
        cout << "===========================================\n";

        while (player->getHp() >0 && slime.getHp() >0)
        {
            cout << "\n--- 플레이어 턴 ---\n";
            player->attack();
            
            int damage = player->getPower()-slime.getDefence();
            if (damage <=0) damage = 1;
            
            int prevHp = slime.getHp();
            int currentHp = prevHp - damage;
            slime.setHp(currentHp);
            
            cout << slime.getName() << "에게" << damage << "데미지" << endl;
            cout << slime.getName() << "HP: " << prevHp << "->" << endl;
            
            if (currentHp = 0)
            {
                cout << slime.getName() << "사망" << endl;
                break;
            }else
            {
                cout << endl;
            }
            
            cout << "\n--- 몬스터 턴 ---\n";
            slime.attack(player);
            cout << player->getName() << "HP:" << player->getHp()<< endl;
        }
        
        if (player->getHp() > 0)
        {
            cout << "\n 전투 승리! \n";
            cout << " -> " << slime.getdropItemName() << "획득!!"<<endl;
            cout << " (다음 단계에서 인벤토리에 저장됩니다)"<<endl;
        } else
        {
            cout<< "\n 전투에서 패배했습니다...\n";
            cout<<"마을로 이동합니다"<<endl;
        }
        
}


void Game::printStatus(string name, int stat[]) {
    cout << "====================================\n";
    cout << "  " << name << " 의 현재 능력치\n";
    cout << "====================================\n";
    cout << "HP: " << stat[0] << "    MP: " << stat[1] << "\n";
    cout << "공격력: " << stat[2] << "    방어력: " << stat[3] << "\n";
    cout << "====================================\n";
}