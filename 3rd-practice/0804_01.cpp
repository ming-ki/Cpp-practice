#include <iostream>
#include <string>
using namespace std;

class Parent {
public:
	void f() {
		cout << "부모 클래스의 f 메소드" << endl;
	}
	void f2() {
		cout << "부모 클래스의 f2 메소드" << endl;
	}
};
class Child : public Parent {
public:
	void f2() {
		cout << "자식 클래스에서 재정의된 f2 메소드" << endl;
	}
	void f3() {
		cout << "자식 클래스에만 있는 f3 메소드" << endl;
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
// Samsung이라는 부모타입으로 받아오면
// Samsung을 상속받은 자식들이 모두 매개변수로 들어올 수 있다.
void checkSansung(Samsung* s) {

}
void main() {
	Child c1 = Child();
	Child2 c2 = Child2();
	Child3 c3 = Child3();
	// Child, Child2,Child3 클래스는 모두 공통으로
	// Parent 클래스를 상속 받고 있기 때문에
	// 업캐스팅하면 한 번에 배열로 묶어줄 수 있다.
	Parent *ar[] = { &c1,&c2,&c3 };
	// dynamic_cast<자식클래스*>(변환 하고자 하는 포인터)
	/*for (int i = 0; i < 3; i++) {
		ar[i]
	}*/

	Child c = Child();
	// 업캐스팅 : 자식 타입을 부모 타입으로 바꾸는 것
	Parent* p = &c;
	p->f2();
	//p->f3();
	// 다운 캐스팅 : 부모 타입이 자식 타입으로
	// 명시적으로 형변환을 해줘야 한다.
	Child* down = (Child*)p;
	down->f3();
}