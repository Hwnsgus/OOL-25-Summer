#include "Exp.h"
using namespace std

///Exp.cpp
//������
Exp::Exp(int b, int e) {
	base = b;
	exp = e;
	calc();
}

Exp::Exp(int b) : Exp(b, 1) {
	calc();
}

Exp::Exp() : Exp(1, 1) {
	base = 1;
	exp = 1;
	calc();
}

void Exp::calc() {
	int res = 1;
	for (int i = 0; i < exp; i++) {
		res = res * base;
	}
}

int Exp::getValue() {
	 
	return res;
}

int Exp::getBase() {
	return base;
}

int Exp::getExp() {
	return exp;

}

bool Exp::equals(Exp b) {
	if (getValue() == b.getValue()) return true;
	else return false;

}
