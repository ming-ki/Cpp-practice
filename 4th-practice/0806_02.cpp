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
	// friend Ű���带 ����ϰ�
	// � �Լ����� ������ ������� �̸��� ���ش�.
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