#include <iostream>
#include <string>
using namespace std;

class Parent {
public:
	void f() {
		cout << "�θ� Ŭ������ f �޼ҵ�" << endl;
	}
	void f2() {
		cout << "�θ� Ŭ������ f2 �޼ҵ�" << endl;
	}
};
class Child : public Parent {
public:
	void f2() {
		cout << "�ڽ� Ŭ�������� �����ǵ� f2 �޼ҵ�" << endl;
	}
	void f3() {
		cout << "�ڽ� Ŭ�������� �ִ� f3 �޼ҵ�" << endl;
	}
};
class Child2 : public Parent {

};
class Child3 : public Parent {

};
class Samsung {

};
class SamsungLife :public Samsung {

};
class SamsungElec : public Samsung {

};
// Samsung�̶�� �θ�Ÿ������ �޾ƿ���
// Samsung�� ��ӹ��� �ڽĵ��� ��� �Ű������� ���� �� �ִ�.
void checkSansung(Samsung* s) {

}
void main() {
	Child c1 = Child();
	Child2 c2 = Child2();
	Child3 c3 = Child3();
	// Child, Child2,Child3 Ŭ������ ��� ��������
	// Parent Ŭ������ ��� �ް� �ֱ� ������
	// ��ĳ�����ϸ� �� ���� �迭�� ������ �� �ִ�.
	Parent *ar[] = { &c1,&c2,&c3 };
	// dynamic_cast<�ڽ�Ŭ����*>(��ȯ �ϰ��� �ϴ� ������)
	/*for (int i = 0; i < 3; i++) {
		ar[i]
	}*/

	Child c = Child();
	// ��ĳ���� : �ڽ� Ÿ���� �θ� Ÿ������ �ٲٴ� ��
	Parent* p = &c;
	p->f2();
	//p->f3();
	// �ٿ� ĳ���� : �θ� Ÿ���� �ڽ� Ÿ������
	// ��������� ����ȯ�� ����� �Ѵ�.
	Child* down = (Child*)p;
	down->f3();
}