#include <iostream>
#include <string>
using namespace std;

class Student {
public:	
	int age;
	int st_num;
};
void main() {
	Student s1;
	Student* p = &s1;

	s1.age = 100;
	(*p).age = 200;

	s1.st_num = 12;
	(*p).st_num = 15;
	p->st_num = 20;
	cout << "학생 나이 : " << s1.age << endl;
	cout << "학생 번호 : " << s1.st_num << endl;
}