#include <iostream>
#include <string>
using namespace std;

class ParentA {
public:
	int a;
	void f1() {
		cout << "ParentA f1 메소드" << endl;
	}
	void f2() {
		cout << "ParentA f2 메소드" << endl;
	}
};

class ParentB {
public:
	int a;
	void f1() {
		cout << "ParentB f1 메소드" << endl;
	}
	void f2() {
		cout << "ParentB f2 메소드" << endl;
	}
};

class Child :public ParentA, public ParentB {
public:
	void f2() {
		cout << "자식에서 override 된 f2 함수" << endl;
	}
	void show(){
		cout << ParentA::a << endl;
		cout << ParentB::a << endl;
	}// 만약 메소드를 한개만 만들고 싶다면
	// 어떤 부모의 멤버를 초기화 해줄 지를
	// 매개변수로 받아와서
	// 함수 내부적으로 처리 해줄 수도 있다.
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
			// 사용자가 A 혹은 B외의 다른 값을 넣는다면
			// false를 리턴함으로써 제대로 동작되지 않았다고
			// 표현할 수 있다.
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
			// 사용자가 A 혹은 B외의 다른 값을 넣는다면
			// false를 리턴함으로써 제대로 동작되지 않았다고
			// 표현할 수 있다.
			return false;
		}
	}
	//	부모 클래스에 같은 이름의 멤버 변수인
	// a기 존재하므로 자식 객체에서 바로 멤버변수 a에
	// 접근하여 값을 초기화 시키기가 어렵다
	// 따라서 스코프 연산자를 써줌으로써 모호성을 없애주고
	// 각각의 a에 알맞게 초기화 해주는 메소드를 만들어서
	// 사용할 수 있다.
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
		printf("오류가 발생했음\n");
	}
	c.dof1('A');
	c.dof1('B');
	// 재정의는 그대로 해도 된다.
	// 어떤 부모인지보다 자식에서 정의된 내용이 중요하기 때문에
	c.f2();
	//c.ParentA::a = 100;
	//c.f1();
}