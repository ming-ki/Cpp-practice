#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	string name;
	int age;
	int st_num;
	// �Ҹ���
	~Student() {
		// �޸𸮿��� ���� �����Ǵ��� ������ Ȯ���ϱ� ����
		// ���� ��������
		cout << "�Ҹ��� ȣ���" << endl;
	}
};
void main() {
	Student* s1 = new Student();
	Student s2 = Student();
	s1->name = "ȫ�浿";
	s1->age = 12;
	s1->st_num = 15;
	cout << "�̸� : " << s1->name << endl;
	cout << "���� : " << s1->age << endl;
	cout << "��ȣ : " << s1->st_num << endl;
	// s1�� �Ҹ��ڰ� ȣ���
	// �� s1�� ���α׷��� ������� �ʾ������� �޸𸮿���
	// ������ �Ǿ���
	delete s1;
	// �޸𸮿��� ������Ų ���Ŀ��� ����� ���Ѵ�.
	cout << "s1�� �޸𸮿��� ������ �����̴�." << endl;

	// ���α׷��� ����Ǹ鼭 s2�� �Ҹ��ڰ� ȣ��Ǿ���,
	// �޸𸮿��� ������ �Ǿ���.
}