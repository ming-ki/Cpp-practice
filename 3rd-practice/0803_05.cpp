#include <iostream>
#include <string>
using namespace std;

class Parent {
protected:
	int a;
	string b;
public:
	Parent() {};
	Parent(int a, string b) {
		this->a = a;
		this->b = b;
	}
	void show() {
		cout << "a : " << a << endl;
		cout << "b : " << b << endl;
	}
};
class Child : public Parent {
public:
	int c;
	Child() {};
	// 부모생성자를 활용하여 부모와 겹치는 멤버는
	// 부모생성자로 초기화 해줄 수 있다.
	Child(int a, string b,int c) :Parent(a, b) {
		this->c = c;
	}
	Child() : Parent(a ,b) {

	}
	void showMenber() {
		cout << "a : " << this->a << endl;
		cout << "b : " << this->b << endl;
		cout << "c : " << this->c << endl;
	}
};

void main() {
	Parent p = Parent(10,"문자열");
	Child c = Child(20,"문자열2",10);
	//Child c2 = Child();
	c.showMenber();
}