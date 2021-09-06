#include <iostream>
#include <string>
using namespace std;

int add(int a, int b) {
	cout << "일반 add()함수" << endl;
	return a + b;
}
//
//double add(double a, double b) {
//	return a + b;
//}
//템플릿 함수 함수를 사용할때 타입을 알려줘서
//마치 매개변수처럼 받아와 활용하는 함수이다.
//보통 T를 사용한다.
template <typename T>
T add(T a, T b) {
	return a + b;
}
class Coord {
	int x;
	int y;
public:
	Coord(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void show() {
		cout << "(" << x << "," << y << ")" << endl;
	}
	Coord operator+(Coord c) {
		return Coord(this->x+c.x,this->y+c.y);
	}
};
template <typename T>
void show(T a) {
	cout << a << endl;
}
// 템플릿 함수의 명시적 특수화
// 만약 해당하는 타입이 매개변수처럼 넘어온다면
// 일반화된 정의를 따르지 않고,
// 특수화된 정의를 따르게 만드는 행위이다.
template<>
void show<Coord>(Coord a) {
	a.show();
}
// 타입이 다른 친구를 여러개 받아올 경우
// 콤마로 연결하여 작성하면 된다.
template<typename T1, typename T2>
void print(T1 a,T2 b) {
	cout << "a : " <<a<< endl;
	cout << "b : " <<b<< endl;
}
void main() {
	print<int, double>(10, 5.1);
	// dynamic_cast <Student*>(p);
	// <타입>을 명시적으로 쓰지 않더라도 알아서 타입을 넘겨준다.
	cout << add(10, 50) << endl;
	// 템플릿 함수와 똑같은 이름의 함수가 존재한다면
	// 일반함수가 동작하기 때문에 혹시 모를 상황을 방지하기 위해
	// 타입을 명시적으로 넘겨주는 것이 좋다.
	cout << add<int>(10, 50) << endl;
	cout << add<double>(10.5, 20.9) << endl;
	// 하지만 문자열의 경우 문자열 상수로 타입을 넘겨주기때문에
	// 예기치 못한 오류가 발생할 수 있따.
	// 따라서 템플릿을 사용할 경우 명시적으로 타입을 써주는 것이
	// 바람직하다.
	cout << add<string>("안녕하세요","반갑습니다") << endl;
	Coord c1 = Coord(10, 10);
	Coord c2 = Coord(20, 20);
	add<Coord>(c1, c2).show();
	show< int > (10);
	show<Coord>(c1);
	/*cout << add(10, 50) << endl;
	add(10.5, 30.9);*/
}
