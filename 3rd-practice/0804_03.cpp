#include <iostream>
#include <string>
#include <windows.h> //Sleep()이라는 함수 사용 위해 include
using namespace std;

void main() {
	cout << "쉬는 중";
	for (int i = 0; i < 3; i++) {
		// Sleep(밀리초)
		// 밀리초만큼 잠시 멈춰준다.
		// 1000ms는 1s
		Sleep(1000);
		cout << ".";
	}
	cout << endl;
}