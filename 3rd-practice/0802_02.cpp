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
		cout << "�̸� : " << name << endl;
		cout <<  "���� : " << age << endl;
		cout << "��ȣ : " << st_num << endl;
	}
};
void main() {
	// ��ü�� �����԰� ���ÿ� �ʱ�ȭ�� ���� �� �ִ�.
	// ��� ������ public�϶��� �߰�ȣ�� �ʱ�ȭ ���� �� �ִ�.
	//Student s1 = { 10,"ȫ�浿",15 };
	Student s1;
	s1.setAll(10, "ȫ�浿", 15);
	//s1.age = 10;
	//s1.name = "ȫ�浿";
	//s1.st_num = 15;
	s1.show();
}