#include <iostream>
using namespace std;

class Sample {
	int* p;
	int size;
public:
	Sample(int n) {
		size = n; p = new int[n];
	}
	void read();
	void write();
	int big();
	~Sample() { delete[] p; }
};

void Sample::read() {
	for (int i = 0; i < size; i++) {
		cin >> p[i];
	}
}

void Sample::write() {
	for (int i = 0; i < size; i++) {
		cout << p[i] << ' ';
	}
}

int Sample::big() {
	int result = p[0];
	for (int i = 1; i < size; i++) {
		if (p[i] > result)
			result = p[i];	
	}
	return result;
}

int main() {
	cout << "20201509 안민지" << endl;
	Sample s(10);
	s.read();
	s.write();
	cout << "가장 큰 수는 " << s.big() << endl;
}