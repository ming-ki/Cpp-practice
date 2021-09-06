#include <iostream>
using namespace std;

template <typename T>
class Data {
	T a;
public:
	Data(T a) {
		this->a = a;
	}
	T getA() {
		return a;
	}
};
// Ŭ���� ���ø��� ����� Ư��ȭ
template <>
class Data<double> { //Ÿ���� double Ÿ���϶� Ư���ϰ� �����
	double d;
public:
	Data(double d) {
		this->d = d;
	}
	double getA() {
		cout << "ȣ��Ǿ����ϴ�." << endl;
		return d;
	}
};
void main() {
	Data<double> d2 = Data<double>(3.14);
	Data<int> d = Data<int>(10);
	cout << d.getA() << endl;
	cout << d2.getA() << endl;
}