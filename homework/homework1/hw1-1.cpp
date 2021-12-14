#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
public:
	Random() {}
	int next() {
		int n = rand();
		return n;
	}
	int nextInRange(int x,int y) {
		int n = rand() % (y + 1);
		if (n < x)
			n += (x - n);


		return n;
	}
};

int main() {

	srand((unsigned)time(0));
	Random r;
	cout << "20201509 안민지" << endl;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "4������ ���� ���� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
}