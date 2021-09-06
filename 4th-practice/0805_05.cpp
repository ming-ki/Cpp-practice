#include <iostream>
#include <string>
using namespace std;

class Ianimal {
public:
	virtual void eat() = 0;
	virtual void walk() = 0;
	virtual void sleep() = 0;

};
// ����� Ŭ����
// �������̽��� ���� ��� ������
// ������ �����Լ��� �� ������ �ؾ��ϴ� ���ŷο��� �ִ�.
// ���� �ʿ��� �����Լ��� ������ �ϰ� ���� ����
// ����� Ŭ������ Ȱ���ϸ� ���ϴ�.
class IanimalAdapter : public Ianimal{
public:
	void eat() { ; }
	void walk() { ; }
	void sleep() { ; }
};
// Cat�� �������̽��� ���� ��� �޾ұ� ������
// ��� ���� ���� �Լ��� override �ؾ߸� �Ѵ�.
// ���� �����Ÿ������ ��ĳ������ �Ұ����ϴ�.
class Cat : public Ianimal {
public:
	void eat() {
		cout << "����̰� �Դ� ��" << endl;
	}
	void walk() {
		cout << "����̰� �ȴ� ��" << endl;
	}
	void sleep() {
		cout << "����̰� �ڴ� ��" << endl;
	}
};

// Tiger Ŭ������ ����� Ŭ������ ��� �޾����Ƿ�
// �������̽��� �ִ� �Լ� �� �ڽ��� �ʿ�� �ϴ� �Լ���
// �������Ͽ� ����� �� �ִ�.
// �̶� ����� Ÿ������ ��ĳ������ �����ϸ�
// �ִϸ� Ÿ�����ε� ��ĳ������ �����ϴ�.
class Tiger : public IanimalAdapter {
public:
	void eat() {
		cout << "ȣ���̰� �Դ� ��" << endl;
	}
	void walk() {
		cout << "ȣ���̰� �ȴ� ��" << endl;
	}
	void sleep() {}
};
void main() {
	Ianimal* p;
	IanimalAdapter* p2;
	Cat c;
	Tiger t;
	//p2 = &c;
	p2 = &t;
	p = &t;
	t.eat();
}