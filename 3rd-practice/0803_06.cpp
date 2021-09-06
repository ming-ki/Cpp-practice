#include <iostream>
#include <string>
using namespace std;

class Parent {
public:
	void f() {
		cout << "부모클래스에서 정의된 f함수" << endl;
	}
	// virtual 가상 함수
	// 가상함수, 동적 바인딩
	// 실행 중간에 어떤 함수가 호출되어야 할 지 정하고, 
	// 해당 함수를 호출한다.
	virtual void f2() {
		cout << "부모클래스에서 정의된 f2함수" << endl;
	}
};
class Child : public Parent {
public:
	virtual void f2() {
		cout << "자식클래스에서 override 된 f2 메소드" << endl;
	}
	void f3() {
		cout << "자식클래스에만 있는 f3 메소드" << endl;
	}
};

void main() {
	Child c = Child();
	// 업캐스팅
	Parent* p = &c;
	p->f();
	// f2() 함수는 가상 함수이므로
	// 실행 중에 어떤 함수를 호출해야할지 결정하게 된다.
	// 따라서 &c 이 주소로 접근하여 그 주소 안에 있는
	// f2() 함수를 호출하게 되고 , 자식 클래스에서 재정의된
	// 함수가 호출 되는 것이다.
	p->f2();
	// p->f3();
}