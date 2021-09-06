#include <iostream>

using namespace std;

void add(int a,int b,int c=100) {
	cout << "더한 값 : " << a + b + c << endl;
}

void show(int a=100, int b=100 , int c=100) {
	cout << "a의 값은 " << a << endl;
	cout << "b의 값은 " << b << endl;
	cout << "c의 값은 " << c << endl;
	cout << "======================" << endl;
}
void main() {
	add(10, 20, 30);
	add(10, 30);
	show();
	show(10);
	show(10, 30);
	show(10, 20, 0);
}