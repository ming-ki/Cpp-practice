#include <iostream>
#include <string>

void main() {
	
	std::string str = "abc1234";
	// �ѱ�(2 byte �̻�)�� ��� ũ�Ⱑ ����(1 byte)�� �޶� ������.
	std::cout << str[0] << std::endl;
	// ���ڿ��� ���� �������� --> length()
	std::cout << "���� : " << str.length() << std::endl;
	// �ش� �ε����� �ִ� ���� �������� at(index)
	// a[index] ����� ����ϴ�. �ѱ��� ��� ����

	std::cout << "str.at(0) : " << str.at(0) << std::endl;
	std::string str1 = "�ٳ���";
	std::cout << "str+str1 = " << str + str1 << std::endl;

}