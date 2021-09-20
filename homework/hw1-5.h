#pragma once
#include <iostream>
using namespace std;

class Exp {
public:
	int base, exp;
	Exp() { this->base = 1; this->exp = 1; }
	Exp(int x) { this->base = x; this->exp = 1; }
	Exp(int x, int y) { this->base = x; this->exp = y; }
	int getValue();
	int getBase() { return base; }
	int getExp() { return exp; }
	bool equals(Exp x);
};
