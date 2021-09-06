#include <iostream>
#include <string>

void main() {
	
	std::string str = "abc1234";
	// 한글(2 byte 이상)의 경우 크기가 영어(1 byte)와 달라서 깨진다.
	std::cout << str[0] << std::endl;
	// 문자열의 길이 가져오기 --> length()
	std::cout << "길이 : " << str.length() << std::endl;
	// 해당 인덱스에 있는 문자 가져오기 at(index)
	// a[index] 기능이 비슷하다. 한글의 경우 깨짐

	std::cout << "str.at(0) : " << str.at(0) << std::endl;
	std::string str1 = "바나나";
	std::cout << "str+str1 = " << str + str1 << std::endl;

}