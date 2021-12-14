#include <iostream>
using namespace std;

class Stack {
	int stack[10];
	int top;
public:
	Stack() {
		top = 0;
	}
	Stack& operator<<(int n);
	Stack operator>>(int& x);
	bool operator!();

};

Stack& Stack::operator<<(int n) {

	stack[top] = n;
	top++;
	return *this;
}
Stack Stack::operator>>(int& x) {
	x = stack[top - 1];
	top--;
	return *this;
}
bool Stack::operator!() {
	if (this->top == 0)
		return true;
	return false;
}

int main() {
	cout << "20201509 ¾È¹ÎÁö" << endl;
	Stack stack;
	stack << 3 << 5 << 10;
	while (true) {
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;


}