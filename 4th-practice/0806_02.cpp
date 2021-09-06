#include <iostream>
using namespace std;

class Test {
private:
	int a;
protected:
	int b;
public:
	int c;
	Test(int a, int b, int c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}
	// friend 키워드를 사용하고
	// 어떤 함수에서 접근을 허락할지 이름을 써준다.
	friend void f(Test a);
	friend class A;
};
void f(Test a) {
	cout << a.a<<" " << a.b << " "<<a.c << endl;
};
class A {
private:
	int a;
public:
	void show(Test t) {
		cout << t.a << " " << t.b  << " " <<t.c << endl;
	}
};
void main() {
	Test t = Test(10, 20, 30);
	f(t);
	A a;
	a.show(t);

}