#include <iostream>
#include <string>
using namespace std;

class Parent {
public:
	virtual void sayHello() {
		cout << "안녕하세요! 부모클래스" << endl;
	}
};

class Child : public Parent {
public:
	// override 키워드를 사용하면, 오타로 인해 새로운 멤버 함수를
	// 정의하는 것을 방지할 수 있다.
	// override 키워드는 생략할 수 있다.
	void sayHello() override{
		cout << "자식에서 재정의된 메소드" << endl;
	}
};
void main() {
	Child c;
	c.sayHello();
	// c.sayhello();
}