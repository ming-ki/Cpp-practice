#include <iostream>
#include <string>

using namespace std;
class User {
	//private : ������ ���� Ŭ���� ���ο����� ���� �� �� �ִ�.
private:
	string id;
	string pw;
	int age;
	int ar[3];
	//public : ��𼭵� ���� ����!
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
		//id�� ���� Ŭ������ �����Ƿ� ������ �����ϴ�.
		cout << "id : " << id << endl;
		cout << "pw : " << pw << endl;
		cout << "���� : " << age << endl;

	}
};

void main() {

	User u1;
	u1.setId("abc123");
	u1.setPw("1234");
	u1.setAge(15);
	u1.ar[10];
	cout << "����" << u1.getAge() << endl;
	u1.show();
}