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
// 클레스 템플릿의 명시적 특수화
template <>
class Data<double> { //타입이 double 타입일때 특수하게 실행됨
	double d;
public:
	Data(double d) {
		this->d = d;
	}
	double getA() {
		cout << "호출되었습니다." << endl;
		return d;
	}
};
void main() {
	Data<double> d2 = Data<double>(3.14);
	Data<int> d = Data<int>(10);
	cout << d.getA() << endl;
	cout << d2.getA() << endl;
}