#include <iostream>
using namespace std;

int big(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}
int big(int a[], int size) {
	int big = a[0];
	for (int i = 1; i < size-1; i++) {
		if (a[i] > big)
		{
			big = a[i];
			return big;
		}
		else
		{ 
			return big;
		}
	}
}

int main() {
	int array[5] = { 1,9,-2,8,6 };
	cout << big(2, 3) << endl;
	cout << big(array, 5) << endl;
}