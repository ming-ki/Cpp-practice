#include <iostream>
using namespace std;
#include "hw1-5.h"

int Exp::getValue() {
	int value = 1;
	for (int i = 0; i < exp; i++) {
		value *= base;
	}
	return value;
}
bool Exp::equals(Exp x) {
	if (this->getValue() == x.getValue())
		return true;
	else false;
}
int main() {
	Exp a(3, 2);
	Exp b(9);
	Exp c;
	cout << "20201509 안민지" << endl;
	cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
	cout << "a의 베이스 " << a.getBase() << ',' << "지수 " << a.getExp() << endl;

	if (a.equals(b))
		cout << "same" << endl;
	else
		cout << "not same" << endl;
}