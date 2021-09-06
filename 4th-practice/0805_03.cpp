#include <iostream>
#include <string>
using namespace std;

class Animal {
	virtual void eat() = 0;
	virtual void walk() = 0;
	virtual void rest() = 0;
};

class Cat : public Animal {
public:
	virtual void eat() override {
		cout << "고양이가 밥을 먹다." << endl;
	}
	virtual void walk() override {
		cout << "고양이 산책" << endl;
	}
	virtual void rest() override {
		cout << "고양이 휴식" << endl;
	}
};
class Tiger : public Animal {
public:
	virtual void eat() override {
		cout << "호랑이가 밥을 먹다." << endl;
	}
	virtual void walk() override {
		cout << "호랑이 산책" << endl;
	}
	virtual void rest() override {
		cout << "호랑이 휴식" << endl;
	}
};

void main() {
	Cat c;
	c.eat();
	Tiger t;
	t.eat();
	// 추상클래스 혹은 인터페이스는 객체화는 불가능 하지만
	// 포인터 변수는 생성 할 수 있고, 따라서 업캐스팅하여
	// 공통의 타입으로 묶어서 활용하는 것이 가능하다.
	Animal* p;
	p = &t;

}