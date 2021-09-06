#include <iostream>
#include <string>
#include "avatar.h"
using namespace std;

void main() {

	Animal a = Animal("기본", 0, 0);
	a.show();
	int choice = 0;
	Animal* avatar;
	cout << "캐릭터를 선택해 주세요!" << endl;
	cout << "1. 토끼 2. 호랑이 3. 고양이" << endl;
	cin >> choice;

	if (choice == 1) {
		// 토끼 구역
		Rabbit r = Rabbit("토끼", 10, 10);
		avatar = &r;
		
	}
	else if (choice == 2) {
		// 호랑이 구역
		Tiger t = Tiger("호랑이", 20, 5); 
		avatar = &t;
	}
	else if (choice == 3) {
		// 고양이 구역
		Cat c = Cat("고양이", 10, 10);
		avatar = &c;
	}
	else {
		cout << "잘못 입력했습니다." << endl;
	}
	while (true) {
		cout << "1. 밥먹기 2. 산책하기 3. 휴식 4. 나가기\n";
		cin >> choice;
		if (choice == 4) {
			cout << "게임을 종료합니다\n";
			break;
		}
		else if (choice == 1) {
			avatar->eat();
		}
		else if (choice == 2) {
			avatar->walk();
		}
		else if (choice == 3) {
			avatar->rest();
		}
		else {
			cout << "다시 입력해주세요\n";
		}
	}
	// dynamic_cast<바꾸고 싶은 타입>(바꿀 포인터)
	// 바꾸지 못한다면 결과가 NULL이 나온다.
	if (dynamic_cast<Rabbit*>(avatar) != NULL) {
		Rabbit* r = (Rabbit*)avatar;
		r->onlyRabbit();
		
	}
}