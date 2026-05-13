#include "header/Monster.h"
#include "header/Item.h"
#include "header/Game.h"
#include <string>
#include <iostream>
using namespace std;

Monster::Monster(string n, int h, int p, int d, string dName, int dPrice) : name(n), hp(h), power(p), defence(d),
dropItemName(dName), dropItemPrice(dPrice)
{
}

void Monster::attack(Player* player)
{
    int damage = power - player->getDefence();
    
    if (damage < 0)
    {
        damage = 1;
    }
    
    cout << name << "의 공격!" << endl;
    cout << player->getName()<<"에게" << damage << "데미지!"<< endl;
    
    int currentHP = player->getHp();
    player->setHp(currentHP - damage);
    
    
};