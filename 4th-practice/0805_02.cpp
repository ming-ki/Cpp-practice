#include <iostream>
#include <string>
using namespace std;

class Parent {
public:
	virtual void sayHello() {
		cout << "�ȳ��ϼ���! �θ�Ŭ����" << endl;
	}
};

class Child : public Parent {
public:
	// override Ű���带 ����ϸ�, ��Ÿ�� ���� ���ο� ��� �Լ���
	// �����ϴ� ���� ������ �� �ִ�.
	// override Ű����� ������ �� �ִ�.
	void sayHello() override{
		cout << "�ڽĿ��� �����ǵ� �޼ҵ�" << endl;
	}
};
void main() {
	Child c;
	c.sayHello();
	// c.sayhello();
}