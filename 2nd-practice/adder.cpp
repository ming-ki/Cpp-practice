#include <iostream>
using namespace std;

int adder(int a, int b) {
	int sum;
	sum = a + b;
	return sum;
}

int main() {
	int n = adder(24567, 98374);
	cout << "24567과 98374의 합 : " << n << "입니다.\n";

	int a, b;
	cout << "두 개의 정수를 입력하세요 : ";
	cin >> a >> b;
	n = adder(a, b);
	cout << a << "+" << b << " = " << n;
}