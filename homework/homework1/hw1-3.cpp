#include <iostream>
#include <string>
using namespace std;

class Integer {
public:
	int num;
	Integer(int n) { num = n; }
	Integer(string n) { num = stoi(n); }
	inline int get() { return num; }
	inline void set(int num) { this->num = num; }
	inline bool isEven() {
		if (num < 0) return false;
		else return true;
			}
};

int main() {
	Integer n(30);
	cout << "20201509 안민지" << endl;
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}