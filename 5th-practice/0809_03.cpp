#include <iostream>
using namespace std;

void main() {
	int a, b;
	cout << "몇을 나누겠습니까? : ";
	cin >> a;
	cout << "몇으로 나누겠습니까? : ";
	cin >> b;
	try {
		if (b == 0) {
			throw b;
		}
		cout << a << "를" << b << "로 나눈 몫 : " << a / b << endl;
		cout << a << "를" << b << "로 나눈 나머지 : " << a % b << endl;
	}
	catch (int a) {
		cout << "0으로는 나눌 수 없습니다." << endl;
	}
}