#include <iostream>
#include <string>
using namespace std;

// 어차피 class로 인터페이스를 구현할때
// public을 써줘야하기 때문에 기본적으로 모든 파일에서 접근 할 수 있는 구조체로 인터페이스를 만드는 경우도 있다.

struct Interface1 {
	virtual void f1() = 0;
	virtual void f2() = 0;
};
class Child1 : public Interface1 {
public:
	virtual void f1() {
		cout << "f1 재정의" << endl;
	}
	void f2() {
		cout << "f2 재정의" << endl;
	}
};
// class라는 것을 interface라는 별명으로 정의하겠다.
#define interface class
// interface 쓰더라도 class 쓰는 것과 똑같다.
interface Interface2 {
public:
	virtual void f1() abstract;
};
class Child2 : public Interface2 {
public:
	virtual void f1() {
		cout << "f1 재정의" << endl;
	}
};
#define interface struct
interface Interface3 {
	virtual void f1() = 0;
};
class Child3 : public Interface3 {
public:
	virtual void f1() {
		cout << "f1 재정의" << endl;
	}
};

__interface Interface4 {
public:
	 virtual void f1() = 0;
	// 구현이 되어 있음에도 interface라고 명시적으로 알려줬기에
	// 순수가상함수처럼 구현이 완료되지 않은 상태로 판단한다.
	// 따라서 재정의 해줘야 한다.
	virtual void f2() {

	}
};
class Child4 : public Interface4 {
public:
	virtual void f1() {
		cout << "f1 재정의" << endl;
	}
		virtual void f2() {
			cout << "f2 재정의" << endl;
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