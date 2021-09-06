#include <iostream>
#include <string>
using namespace std;

class Student {
	int age;
	string name;
	int st_num;
public:
	void setAll(int a, string b, int c) {
		age = a;
		name = b;
		st_num = c;
	 }
	void show() {
		cout << "이름 : " << name << endl;
		cout <<  "나이 : " << age << endl;
		cout << "번호 : " << st_num << endl;
	}
};
void main() {
	// 객체를 생성함과 동시에 초기화를 해줄 수 있다.
	// 멤버 변수가 public일때만 중괄호로 초기화 해줄 수 있다.
	//Student s1 = { 10,"홍길동",15 };
	Student s1;
	s1.setAll(10, "홍길동", 15);
	//s1.age = 10;
	//s1.name = "홍길동";
	//s1.st_num = 15;
	s1.show();
}