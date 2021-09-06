#include <iostream>
using namespace std;
struct Test {
	int a;
	int b;
	//c++에서는 멤버 함수를 만들 수 있다!
	void show() {
		cout << a << endl;
	}
};

void main() {
	struct Test t;
	t.a = 100;
	//멤버 함수를 사용하고 싶을 때는
	//하위 연산자를 통해 사용해야 한다.
	t.show();
}