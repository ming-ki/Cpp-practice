#include <iostream>
#include <string>
#include <windows.h> //Sleep()�̶�� �Լ� ��� ���� include
using namespace std;

void main() {
	cout << "���� ��";
	for (int i = 0; i < 3; i++) {
		// Sleep(�и���)
		// �и��ʸ�ŭ ��� �����ش�.
		// 1000ms�� 1s
		Sleep(1000);
		cout << ".";
	}
	cout << endl;
}