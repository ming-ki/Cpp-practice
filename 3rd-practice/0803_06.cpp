#include <iostream>
#include <string>
using namespace std;

class Parent {
public:
	void f() {
		cout << "�θ�Ŭ�������� ���ǵ� f�Լ�" << endl;
	}
	// virtual ���� �Լ�
	// �����Լ�, ���� ���ε�
	// ���� �߰��� � �Լ��� ȣ��Ǿ�� �� �� ���ϰ�, 
	// �ش� �Լ��� ȣ���Ѵ�.
	virtual void f2() {
		cout << "�θ�Ŭ�������� ���ǵ� f2�Լ�" << endl;
	}
};
class Child : public Parent {
public:
	virtual void f2() {
		cout << "�ڽ�Ŭ�������� override �� f2 �޼ҵ�" << endl;
	}
	void f3() {
		cout << "�ڽ�Ŭ�������� �ִ� f3 �޼ҵ�" << endl;
	}
};

void main() {
	Child c = Child();
	// ��ĳ����
	Parent* p = &c;
	p->f();
	// f2() �Լ��� ���� �Լ��̹Ƿ�
	// ���� �߿� � �Լ��� ȣ���ؾ����� �����ϰ� �ȴ�.
	// ���� &c �� �ּҷ� �����Ͽ� �� �ּ� �ȿ� �ִ�
	// f2() �Լ��� ȣ���ϰ� �ǰ� , �ڽ� Ŭ�������� �����ǵ�
	// �Լ��� ȣ�� �Ǵ� ���̴�.
	p->f2();
	// p->f3();
}