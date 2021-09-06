#include <iostream>
using namespace std;

//return타입 함수명 (매개변수) { 코드 }
//같은 이름의 함수지만 매개변수의 갯수가 같더라도 자료형이 다르기 때문에
//컴퓨터가 구분할 수 있다. 따라서 오버로딩이 가능하다.
void add(int num1,int num2) {
	cout << "더한 값 : " << num1 + num2<<endl;
}

void main() {
	add(10, 30);
}