#include <iostream>
#include <string>
using namespace std;

class Ianimal {
public:
	virtual void eat() = 0;
	virtual void walk() = 0;
	virtual void sleep() = 0;

};
// 어댑터 클래스
// 인터페이스를 직접 상속 받으면
// 수많은 가상함수를 다 재정의 해야하는 번거로움이 있다.
// 따라서 필요한 가상함수만 재정의 하고 싶을 때는
// 어댑터 클래스를 활용하면 편리하다.
class IanimalAdapter : public Ianimal{
public:
	void eat() { ; }
	void walk() { ; }
	void sleep() { ; }
};
// Cat은 인터페이스를 직접 상속 받았기 때문에
// 모든 순수 가상 함수를 override 해야만 한다.
// 또한 어댑터타입으로 업캐스팅이 불가능하다.
class Cat : public Ianimal {
public:
	void eat() {
		cout << "고양이가 먹는 중" << endl;
	}
	void walk() {
		cout << "고양이가 걷는 중" << endl;
	}
	void sleep() {
		cout << "고양이가 자는 중" << endl;
	}
};

// Tiger 클래스는 어댑터 클래스를 상속 받았으므로
// 인터페이스에 있는 함수 중 자신이 필요로 하는 함수만
// 재정의하여 사용할 수 있다.
// 이때 어댑터 타입으로 업캐스팅이 가능하며
// 애니멀 타입으로도 업캐스팅이 가능하다.
class Tiger : public IanimalAdapter {
public:
	void eat() {
		cout << "호랑이가 먹는 중" << endl;
	}
	void walk() {
		cout << "호랑이가 걷는 중" << endl;
	}
	void sleep() {}
};
void main() {
	Ianimal* p;
	IanimalAdapter* p2;
	Cat c;
	Tiger t;
	//p2 = &c;
	p2 = &t;
	p = &t;
	t.eat();
}