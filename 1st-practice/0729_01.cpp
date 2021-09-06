#include <iostream>
using namespace std;

void main() {
	int num = 10;
	printf("오늘은 cpp 첫 수업입니다.\n");
	printf("num에 담겨있는 숫자 : %d\n", num);
	std::cout << "안녕하세요" <<"num에 담겨있는 숫자는 "<<num<<"입니다.";

	// :: 스코프 연산자, 소속을 알려준다.
	// std namespace 구분하기 위해서 사용한다.
	// << 비트연산이 아니라, 연산자의 중복정의(overloading)에 의해 다르게 동작한다.
	// 다형성을 구현하는 요소 : overloading
	//cout은 줄바꿈을 자동으로 해주지 않는다.
	std::cout << "두번째 줄 입니다.";
	// 줄바꿈 하는 방법 1. 문자열 끝에 "\n"을 써준다.
	std::cout << "1번 방법을 통해 줄 바꿈 했습니다.\n";\
	//2. endl을 활용하여 줄 바꿈을 한다.
	std::cout << "endl을 활용하여 줄바꿈 했습니다." << std::endl;
	std::cout << "확인용 문장입니다."<<std::endl;
	// scanf(); c언어
	// scanf_s(); c언어
	// cin을 통해서 입력받기 c++
	std::cin >> num;
	//cout 활용하여 num : 100;
	std::cout << "num : " <<num << std::endl;
	

}