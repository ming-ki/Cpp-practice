#include <iostream>
#include <string>

using namespace std;
class User {
	//private : 오로지 같은 클래스 내부에서만 접근 할 수 있다.
private:
	string id;
	string pw;
	int age;
	int ar[3];
	//public : 어디서든 접근 가능!
public:
	void setAr() {

	}
	void setId(string s) {
		id = s;
	}
	void setPw(string s) {
		pw = s;
	}
	void setAge(int a) {
		age = a;
	}
	string getId()
	{
		return id;
	}
	string getPw()
	{
		return pw;
	}
	int getAge()
	{
		return age;
	}
	void show() {
		//id는 같은 클래스에 있으므로 접근이 가능하다.
		cout << "id : " << id << endl;
		cout << "pw : " << pw << endl;
		cout << "나이 : " << age << endl;

	}
};

void main() {

	User u1;
	u1.setId("abc123");
	u1.setPw("1234");
	u1.setAge(15);
	u1.ar[10];
	cout << "나이" << u1.getAge() << endl;
	u1.show();
}