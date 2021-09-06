#include <iostream>
#include <string>
using namespace std;

class Student {
	string name;
	int kor;
	int eng;
public:
	Student(string name, int kor, int eng) {
		this->name = name;
		this->kor = kor;
		this->eng = eng;
	}
	bool operator==(Student s) {
		if (this->name.compare(s.name) == 0) {
			return true;
		}
		return false;
	}
};
void main() {
	Student s1 = Student("±èÃ¶¼ö", 80, 90);
	Student s2 = Student("±è¿µÈñ", 100, 70);
	Student s3 = Student("±èÃ¶¼ö", 10, 10);
	if (s1 == s2) {
		cout << "s1°ú s2´Â °°½À´Ï´Ù." << endl;
	}
	if (s1 == s3) {
		cout << "s1°ú s3´Â °°½À´Ï´Ù." << endl;
	}
}