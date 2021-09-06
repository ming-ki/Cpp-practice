#include <iostream>
using namespace std;

void main() {
	int num = 10; // 지역변수 , 스택영역에 할당, 프로그램 종료시 해제

	int* p = new int; // 동적할당 , 힙영역에 할당, 초기화 x 상태
	int* p2 = new int(10);// 생성자를 통해 초기화도 해줄 수 있다.
	// 생성자 안에 매개변수가 없다면 기본 설정값(0)으로 초기화 된다.
	cout << "*p : "<< * p << endl;
	cout << "*p2 : " << *p2 << endl;
	// 메모리에서 해제 시켜주기
	delete p;
	delete p2;
	// 메모리에서 해제된 이후에는 더이상 사용할 수가 없다.
	// cout << "*p : " << *p << endl;
	// cout << "*p2 : " << *p2 << endl;
	int size;
	cin >> size;
	// int ar[size]; 정적 배열이기 때문에 시작 전에 사이즈를 알고 있어야 한다.
	// 중간에 크기를 설정 해줄 수 없다.
	int* p3 = new int[size]; //동적 할당 했기 때문에 프로그램 실행 중 크기를 알려줘도 상관 없다.
	p3[0] = 10;
	p3[1] = 20;
	p3[2] = 30;

	for (int i = 0; i < 3; i++) {
		cout << "p3[" << i << "] : " << p3[i] << endl;
	}
	// new[]를 통해 할당 했으므로 delete[]를 통해 해제해야 한다.
	delete[] p3;
}