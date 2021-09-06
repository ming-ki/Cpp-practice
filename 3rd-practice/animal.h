#pragma once // 중복되는 헤더파일은 한 번만 include 해라
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	int age;
	string name;
	void show() {
		cout << "학생 이름 : " << this->name << endl;
		cout << "학생 나이 : " << this->age << endl;
	}
};
