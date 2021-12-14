#include <iostream>
#include <string>

using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() {
		cout << "radius = " << radius << " 인 원" << endl;
	}

	friend Circle& operator++(Circle& op1);
	friend Circle& operator++(Circle& op1, int x);
};

Circle& operator++(Circle& op1) {
	op1.radius = op1.radius + 1;
	return op1;
}

Circle& operator++(Circle& op1, int x) {
	Circle tmp;
	tmp.radius = op1.radius;
	op1.radius = op1.radius + 1;
	return tmp;
}

int main() {
	cout << "20201509 안민지" << endl << endl;

	Circle a(5), b(4);
	++a;
	b = a++;
	a.show();
	b.show();
}