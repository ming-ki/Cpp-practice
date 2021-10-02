#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom{
	bool EvenOption;
public:
	SelectableRandom(bool selectEven) { EvenOption = selectEven; }
	int next();
	int nextInRange(int front, int end);
	void setOption(bool option) { EvenOption = option; }
};

int SelectableRandom::next() {
	int n;

	if (EvenOption) {		
		while (true) {
			n = rand();
			if (n % 2 == 0)
				break;
		}
	}
	else {					
		while (true) {
			n = rand();
			if (n % 2 != 0)
				break;
		}
	}
	return n;
}

int SelectableRandom::nextInRange(int front, int end) {
	int n;

	if (EvenOption) {
		while (true) {
			n = rand() % (end + 1);   
			if (n % 2 == 0)
				break;
		}
	}
	else {
		while (true) {
			n = rand() % (end + 1);   
			if (n % 2 != 0)
				break;
		}
	}

	if (n < front && EvenOption)		
		n += (front - n);
	else if (n < front && !EvenOption)   
		n += (front - n + 1);

	return n;
}


int main(void) {
	srand((unsigned)time(0));
	SelectableRandom selectRandom(true);  
	cout << "20201509 �ȹ���" << endl;
	cout << "-- 0����" << RAND_MAX << "������ ¦�� ���� ���� 10��--" << endl;

	for (int i = 0; i < 10; i++) {
		int n = selectRandom.next();	
		cout << n << ' ';
	}

	selectRandom.setOption(false);		
	cout << endl << endl << "--2���� " << "9 ������ ���� Ȧ�� ���� 10�� --" << endl;

	for (int i = 0; i < 10; i++) {
		int n = selectRandom.nextInRange(2, 9);	
		cout << n << ' ';
	}
	cout << endl;
}
