#include <iostream>
using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0;
	virtual bool pop(int& n) = 0;
	virtual int size() = 0;
};

class IntStack : public AbstractStack {
	int stack[10];
	int sz;
public:
	IntStack() { sz = 0; }
	virtual bool push(int n) {
		if (sz >= 10) {
			return false;
		}
		stack[sz] = n;
		sz++;
		return true;
	}
	virtual bool pop(int& n) {
		if (sz == 0) return false;
		sz--;
		n = stack[sz];
		return true;
	}
	virtual int size() { return sz; }
};

int main() {
	IntStack a;
	for (int i = 0; i < 15; i++) {
		if (a.push(i))
			cout << "push 성공" << endl;
		else
			cout << "스택이 가득 찼습니다.\n";

	}
	int n;
	for (int i = 0; i < 15; i++) {
		if (a.pop(n))
			cout << "pop 성공 " << n << endl;
		else
			cout << "스택이 비었습니다.\n";
	}
}