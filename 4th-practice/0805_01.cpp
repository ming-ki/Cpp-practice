#include <iostream>
#include <string>
using namespace std;

class Test abstract {
public:
	void show() {
		cout << "일반메소드" << endl;
	}
};

class Parent abstract{ // abstract 키워드는 안 써도 상관이 없지만
			   // 개발자들이 한 눈에 추상클래스인지 알아보기 편하게 하기 위해 추가가 되었다.

public:
	void f1() {
		cout << "부모 클래스에서 정의된 f1 일반함수" << endl;
	}
	virtual void f2() {
		cout << "부모 클래스에서 정의된 f2 가상함수" << endl;
	}
	// 순수 가상 함수
	virtual void f3() = 0;
	// abstract 키워드를 활용하여 미구현된 함수를 명시
	virtual void f4() abstract;
};
class Child : public Parent{
public:
	void f1() {
		cout << "자식 클래스에서 재정의된 f2 함수" << endl;
	}
	void f2() {
		cout << "자식 클래스에서 재정의된 f2 가상함수" << endl;
	}
	virtual void f3() {
		cout << "자식 클래스에서 재정의된 f3 순수 가상 함수" << endl;
	}
};
void main() {
	// Test t;
}