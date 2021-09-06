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
		cout << "ParentA f함수" << endl;
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
		cout << "ParentA f함수" << endl;
	}
};
class Child : public ParentA, public ParentB {
public:
	// 부모에 이미 초기화 생성자가 정의되어 있다면
	// ,를 활용하여 부모 생성자 여러 개를 사용할 수 있다.
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