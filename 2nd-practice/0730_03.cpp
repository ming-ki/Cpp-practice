#include <iostream>
#include <string>
using namespace std;
void main() {
	// std라는 namespace 안의 string을 사용 할 수 있다.
	// 다만 string은 <string>에 정보가 있으므로 반드시
	// 헤더파일을 include 해줘야 한다
	string str = "반갑습니다.";
	// 다른 값으로 수정하는 방법
	str = "안녕하세요!";
	cout << "문자열 입력 : ";
	// 입력을 받는 방법
	// 띄어쓰기,\t,\n으로 구분한다.
	// cin >> str;
	// std 안에 있는 getline()함수
	// 한 줄을 통채로 받아온다.
	getline(cin, str);
	cout << str << endl;
}