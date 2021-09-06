#include <iostream>
#include <string>
using namespace std;

class ParentA {
public:
	int a;
	void f1() {
		cout << "ParentA f1 �޼ҵ�" << endl;
	}
	void f2() {
		cout << "ParentA f2 �޼ҵ�" << endl;
	}
};

class ParentB {
public:
	int a;
	void f1() {
		cout << "ParentB f1 �޼ҵ�" << endl;
	}
	void f2() {
		cout << "ParentB f2 �޼ҵ�" << endl;
	}
};

class Child :public ParentA, public ParentB {
public:
	void f2() {
		cout << "�ڽĿ��� override �� f2 �Լ�" << endl;
	}
	void show(){
		cout << ParentA::a << endl;
		cout << ParentB::a << endl;
	}// ���� �޼ҵ带 �Ѱ��� ����� �ʹٸ�
	// � �θ��� ����� �ʱ�ȭ ���� ����
	// �Ű������� �޾ƿͼ�
	// �Լ� ���������� ó�� ���� ���� �ִ�.
	bool dof1(char classType) {
		if (classType == 'A') {
			ParentA::f1();
			return true;
		}
		else if (classType == 'B') {
			ParentB::f1();
			return true;
		}
		else {
			// ����ڰ� A Ȥ�� B���� �ٸ� ���� �ִ´ٸ�
			// false�� ���������ν� ����� ���۵��� �ʾҴٰ�
			// ǥ���� �� �ִ�.
			return false;
		}
	}
	bool setA(int a,char classType) {
		if (classType == 'A') {
			ParentA::a = a;
			return true;
		}
		else if (classType == 'B') {
			ParentB::a = a;
			return true;
		}
		else {
			// ����ڰ� A Ȥ�� B���� �ٸ� ���� �ִ´ٸ�
			// false�� ���������ν� ����� ���۵��� �ʾҴٰ�
			// ǥ���� �� �ִ�.
			return false;
		}
	}
	//	�θ� Ŭ������ ���� �̸��� ��� ������
	// a�� �����ϹǷ� �ڽ� ��ü���� �ٷ� ������� a��
	// �����Ͽ� ���� �ʱ�ȭ ��Ű�Ⱑ ��ƴ�
	// ���� ������ �����ڸ� �������ν� ��ȣ���� �����ְ�
	// ������ a�� �˸°� �ʱ�ȭ ���ִ� �޼ҵ带 ����
	// ����� �� �ִ�.
	void setParentA(int a) {
		ParentA::a = a;
	}
	void setParentB(int a) {
		ParentB::a = a;
	}
};

void main() {
	Child c;
	c.setA(10,'s');
	c.setParentB(10);
	if (!c.setA(10, 's')) {
		printf("������ �߻�����\n");
	}
	c.dof1('A');
	c.dof1('B');
	// �����Ǵ� �״�� �ص� �ȴ�.
	// � �θ��������� �ڽĿ��� ���ǵ� ������ �߿��ϱ� ������
	c.f2();
	//c.ParentA::a = 100;
	//c.f1();
}