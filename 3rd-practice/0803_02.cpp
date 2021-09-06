#include <iostream>
#include <string>
using namespace std;

class Test {
public:
	// 클래스 내부에서는 이름만 알려줌
	void a();
	void b();
};
// 클래스 밖에서 멤버 함수 정의
// 일반 함수와 컴파일러가 구분 할 수 있도록
// 스코프 연산자(::)를 써줘야 한다.
void Test::a() {
	cout << "a 함수가 호출됨" << endl;
}
void Test::b() {
	cout << "b 함수가 호출됨" << endl;
}
void main() {
	Test t;
	t.a();
}