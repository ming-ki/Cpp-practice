#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person() {};
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel);
};
void Person::set(string name, string tel) {
		this->name = name;
		this->tel = tel;
}


int main() {
	cout << "20201509 �ȹ���" << endl;
	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���" << endl;
	Person personArray[3];
	string name, tel,search;
	for (int i = 0; i < 3; i++)
	{
		cout << "���" << i + 1 << ">>";
		getline(cin, name, ' ');
		getline(cin, tel, '\n');
		personArray[i].set(name, tel);
	}
	cout << "��� ����� �̸��� ";
	for (int i = 0; i < 3; i++)
	{
		cout << personArray[i].getName()<< " ";
	}
	cout << "\n";
	cout << "��ȭ��ȣ�� �˻��մϴ�. ";
	cout << "�̸��� �Է��ϼ��� >>";
	cin >> search;
	for (int i = 0; i < 3; i++) {
		if (search == personArray[i].getName())
			search = personArray[i].getTel();
	}
	cout << "��ȭ��ȣ�� "<<search;
}