#include <iostream>
#include <string>
using namespace std;

class Animal {
	virtual void eat() = 0;
	virtual void walk() = 0;
	virtual void rest() = 0;
};

class Cat : public Animal {
public:
	virtual void eat() override {
		cout << "����̰� ���� �Դ�." << endl;
	}
	virtual void walk() override {
		cout << "����� ��å" << endl;
	}
	virtual void rest() override {
		cout << "����� �޽�" << endl;
	}
};
class Tiger : public Animal {
public:
	virtual void eat() override {
		cout << "ȣ���̰� ���� �Դ�." << endl;
	}
	virtual void walk() override {
		cout << "ȣ���� ��å" << endl;
	}
	virtual void rest() override {
		cout << "ȣ���� �޽�" << endl;
	}
};

void main() {
	Cat c;
	c.eat();
	Tiger t;
	t.eat();
	// �߻�Ŭ���� Ȥ�� �������̽��� ��üȭ�� �Ұ��� ������
	// ������ ������ ���� �� �� �ְ�, ���� ��ĳ�����Ͽ�
	// ������ Ÿ������ ��� Ȱ���ϴ� ���� �����ϴ�.
	Animal* p;
	p = &t;

}