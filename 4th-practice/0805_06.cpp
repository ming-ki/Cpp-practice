#include <iostream>
using namespace std;

class ParentA {
public:
	int a;
	int num;
	ParentA(int a,int num) {
		this->a = a;
		this->num = num;
	}
	void f() {
		cout << "ParentA f�Լ�" << endl;
	}
};
class ParentB {
public:
	double b;
	int num;
	ParentB(double b,int num) {
		this->b = b;
		this->num = num;
	}
	void f() {
		cout << "ParentA f�Լ�" << endl;
	}
};
class Child : public ParentA, public ParentB {
public:
	// �θ� �̹� �ʱ�ȭ �����ڰ� ���ǵǾ� �ִٸ�
	// ,�� Ȱ���Ͽ� �θ� ������ ���� ���� ����� �� �ִ�.
	Child(int a, double b,int num1,int num2) : ParentA(a,num1),ParentB(b,num2){

	}
	void print() {
		cout <<"a: "<< a<< " b: " << b << endl;
		cout << "ParentA::num : " << ParentA::num << endl;
		cout << "ParentB::num : " << ParentB::num << endl;
	}
	void fA() {
		ParentA::f();
	}
	void fB() {
		ParentB::f();
	}
	
};
void main() {
	Child c = Child(10,3.5,100,200);
	//c.ParentA::f();
	/*c.a = 10;
	c.b = 3.5;*/
	c.print();
}