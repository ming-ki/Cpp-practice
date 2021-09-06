#include <iostream>
#include <string>
using namespace std;

class Test {
	int age;
	string name;
public:
	// 기본 생성자
	Test() {
		cout << "기본 생성자가 호출됨" << endl;
	}
	// 초기화 생성자
	Test(int age, string name = "아무개") {
		cout << "생성자가 호출되었습니다." << endl;
		this->age = age;
		this->name = name;
	}
	// 소멸자 메모리에서 해제 시켜주는 역할을 한다.
	~Test() {
		cout << "소멸자" << endl;
	}
	void show() {
		cout << "age : " << this->age << endl;
		cout << "name : " << this->name << endl;
	}
};
void main() {
	Test t1 = Test(10, "홍길동");
	Test t2 = Test();
	Test t3 = Test(15);
	t1.show();
}