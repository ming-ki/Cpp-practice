#include <iostream>
#include <string>
using namespace std;

class Test abstract {
public:
	void show() {
		cout << "�Ϲݸ޼ҵ�" << endl;
	}
};

class Parent abstract{ // abstract Ű����� �� �ᵵ ����� ������
			   // �����ڵ��� �� ���� �߻�Ŭ�������� �˾ƺ��� ���ϰ� �ϱ� ���� �߰��� �Ǿ���.

public:
	void f1() {
		cout << "�θ� Ŭ�������� ���ǵ� f1 �Ϲ��Լ�" << endl;
	}
	virtual void f2() {
		cout << "�θ� Ŭ�������� ���ǵ� f2 �����Լ�" << endl;
	}
	// ���� ���� �Լ�
	virtual void f3() = 0;
	// abstract Ű���带 Ȱ���Ͽ� �̱����� �Լ��� ���
	virtual void f4() abstract;
};
class Child : public Parent{
public:
	void f1() {
		cout << "�ڽ� Ŭ�������� �����ǵ� f2 �Լ�" << endl;
	}
	void f2() {
		cout << "�ڽ� Ŭ�������� �����ǵ� f2 �����Լ�" << endl;
	}
	virtual void f3() {
		cout << "�ڽ� Ŭ�������� �����ǵ� f3 ���� ���� �Լ�" << endl;
	}
};
void main() {
	// Test t;
}