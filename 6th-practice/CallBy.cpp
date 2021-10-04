#include <iostream>
using namespace std;

//Call By Value
//void swap(int a, int b) {
//	int tmp;
//
//	tmp = a;
//	a = b;
//	b = tmp;
//}

//Call By address
void swap(int* a, int* b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
int main() {
	int m = 2, n = 9;
	swap(m, n);
	cout << m << ' ' << n;
}