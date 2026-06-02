#include <iostream>
#include <vector>
using namespace std;

class Animal {

public:
    virtual void speak(){}
};

// 여기에 Dog, Cat 클래스 작성해주세요.

class Dog : public Animal {
    void speak() override { cout << "Woof"<<endl; }
};

class Cat : public Animal {
    void speak() override { cout << "Meow" << endl; }
};


int main() {
    vector<Animal*> zoo{ new Dog, new Cat, new Animal };
    for (auto p : zoo) p->speak(); // Woof / Meow / ???
    for (auto p : zoo) delete p;
}