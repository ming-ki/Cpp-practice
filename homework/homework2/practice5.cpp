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
	cout << "20201509 안민지" << endl;
	cout << "이름과 전화 번호를 입력해 주세요" << endl;
	Person personArray[3];
	string name, tel,search;
	for (int i = 0; i < 3; i++)
	{
		cout << "사람" << i + 1 << ">>";
		getline(cin, name, ' ');
		getline(cin, tel, '\n');
		personArray[i].set(name, tel);
	}
	cout << "모든 사람의 이름은 ";
	for (int i = 0; i < 3; i++)
	{
		cout << personArray[i].getName()<< " ";
	}
	cout << "\n";
	cout << "전화번호를 검색합니다. ";
	cout << "이름을 입력하세요 >>";
	cin >> search;
	for (int i = 0; i < 3; i++) {
		if (search == personArray[i].getName())
			search = personArray[i].getTel();
	}
	cout << "전화번호는 "<<search;
}