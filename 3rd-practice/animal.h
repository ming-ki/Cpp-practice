#pragma once // �ߺ��Ǵ� ��������� �� ���� include �ض�
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	int age;
	string name;
	void show() {
		cout << "�л� �̸� : " << this->name << endl;
		cout << "�л� ���� : " << this->age << endl;
	}
};
