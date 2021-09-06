#include <iostream>
#include <string>
using namespace std;

class User {
public:
	static int cnt; // 무조건 초기화 해줘야 함 클래스 변수, 멤버 변수
	int a; // 인스턴스 변수, 멤버 변수
	User() {
		cnt++;
	}
	static void showCnt() {
		// cout << a; 인스턴스 변수는 사용하지 못한다.
		// 객체마다 달라지기 때문에 어떤 객체(인스턴스)인지 알려줘야 한다.
		// static 함수는 static 변수밖에 사용하지 못한다.
		cout << "현재 회원 수는 " << cnt << "명 입니다." << endl;
	}
	void hello() { //메소드, 멤버 함수
		cnt++; // 일반 메소드에서는 static 메소드도 사용할 수 있다.
		cout << "안녕하세요" << endl;
	}
};
// static 변수는 초기화를 해줘야 하는데
// 클래스 안에서는 초기화를 해주지 못하기에
// 밖에서 초기화 해준다.

int User::cnt = 0;

void main() {
	User u1 = User();
	User u2 = User();
	User u3 = User();
	User u4 = User();
	//cout << "총 회원수 : " << User::cnt << endl;
	User::showCnt();
	u1.hello();
	u1.cnt = 100;
	u2.cnt = 200;
	// static 변수는 객체는 별로 중요하지 않다
	// 모든 객체가 값을 공유하고 있기 때문이다.
	// 따라서 객체. 하고 접근하는 것이 아니라
	// 클래스명으로 바로 접근할 수 있다.
	User::cnt = 5000;
	u1.a = 10;
	u2.a = 20;
	cout << "u1.cnt : " << u1.cnt << endl;
	cout << "u2.cnt : " << u2.cnt << endl;
	cout << "u1.a : " << u1.a << endl;
	cout << "u2.a : " << u2.a << endl;
}