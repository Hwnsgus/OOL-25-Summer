// Game.h
#pragma once
#include <string>

class Game {
public:
    // 게임을 실행하는 메인 로직 함수
    void run();
    
    // 요구사항에 명시된 상태 출력 함수
    void printStatus(std::string name, int stat[]);
};