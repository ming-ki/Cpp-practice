#include <iostream>
#include <string>
using namespace std;

class Test {
	int age;
	string name;
public:
	// �⺻ ������
	Test() {
		cout << "�⺻ �����ڰ� ȣ���" << endl;
	}
	// �ʱ�ȭ ������
	Test(int age, string name = "�ƹ���") {
		cout << "�����ڰ� ȣ��Ǿ����ϴ�." << endl;
		this->age = age;
		this->name = name;
	}
	// �Ҹ��� �޸𸮿��� ���� �����ִ� ������ �Ѵ�.
	~Test() {
		cout << "�Ҹ���" << endl;
	}
	void show() {
		cout << "age : " << this->age << endl;
		cout << "name : " << this->name << endl;
	}
};
void main() {
	Test t1 = Test(10, "ȫ�浿");
	Test t2 = Test();
	Test t3 = Test(15);
	t1.show();
}