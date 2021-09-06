#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	string name;
	int age;
	int st_num;
	// 소멸자
	~Student() {
		// 메모리에서 언제 해제되는지 눈으로 확인하기 위해
		// 직접 정의해줌
		cout << "소멸자 호출됨" << endl;
	}
};
void main() {
	Student* s1 = new Student();
	Student s2 = Student();
	s1->name = "홍길동";
	s1->age = 12;
	s1->st_num = 15;
	cout << "이름 : " << s1->name << endl;
	cout << "나이 : " << s1->age << endl;
	cout << "번호 : " << s1->st_num << endl;
	// s1의 소멸자가 호출됨
	// 즉 s1은 프로그램이 종료되지 않았음에도 메모리에서
	// 해제가 되었다
	delete s1;
	// 메모리에서 해제시킨 이후에는 사용을 못한다.
	cout << "s1이 메모리에서 해제된 상태이다." << endl;

	// 프로그램이 종료되면서 s2의 소멸자가 호출되었고,
	// 메모리에서 해제가 되었다.
}