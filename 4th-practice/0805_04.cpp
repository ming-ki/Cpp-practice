#include <iostream>
#include <string>
using namespace std;

// ������ class�� �������̽��� �����Ҷ�
// public�� ������ϱ� ������ �⺻������ ��� ���Ͽ��� ���� �� �� �ִ� ����ü�� �������̽��� ����� ��쵵 �ִ�.

struct Interface1 {
	virtual void f1() = 0;
	virtual void f2() = 0;
};
class Child1 : public Interface1 {
public:
	virtual void f1() {
		cout << "f1 ������" << endl;
	}
	void f2() {
		cout << "f2 ������" << endl;
	}
};
// class��� ���� interface��� �������� �����ϰڴ�.
#define interface class
// interface ������ class ���� �Ͱ� �Ȱ���.
interface Interface2 {
public:
	virtual void f1() abstract;
};
class Child2 : public Interface2 {
public:
	virtual void f1() {
		cout << "f1 ������" << endl;
	}
};
#define interface struct
interface Interface3 {
	virtual void f1() = 0;
};
class Child3 : public Interface3 {
public:
	virtual void f1() {
		cout << "f1 ������" << endl;
	}
};

__interface Interface4 {
public:
	 virtual void f1() = 0;
	// ������ �Ǿ� �������� interface��� ��������� �˷���⿡
	// ���������Լ�ó�� ������ �Ϸ���� ���� ���·� �Ǵ��Ѵ�.
	// ���� ������ ����� �Ѵ�.
	virtual void f2() {

	}
};
class Child4 : public Interface4 {
public:
	virtual void f1() {
		cout << "f1 ������" << endl;
	}
		virtual void f2() {
			cout << "f2 ������" << endl;
		}
	
};

void main() {
	Child4 c4;
	Child1 c1;
	Child2 c2;
	Child3 c3;
	c2.f1();
	c1.f1();
	c3.f1();
	c4.f1();
}