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
	// �θ�����ڸ� Ȱ���Ͽ� �θ�� ��ġ�� �����
	// �θ�����ڷ� �ʱ�ȭ ���� �� �ִ�.
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
	Parent p = Parent(10,"���ڿ�");
	Child c = Child(20,"���ڿ�2",10);
	//Child c2 = Child();
	c.showMenber();
}