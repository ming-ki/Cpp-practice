#include <iostream>
#include <string>
using namespace std;

class ArrayException {
public:
	string errMsg() {
		return "배열범위 벗어남 오류 발생";
	}
};
class DividedByZeroException {
public:
	string errMsg() {
		return "0으로 나눈 오류 발생";
	}
};
void main() {
	int a, b;
	int ar[] = { 10,20,30 };
	cout << "몇번째 방을 나누고 싶습니까? >>> ";
	cin >> a;
	cout << "몇으로 나누고 싶습니까? >>> ";
	cin >> b;
	try {
		if (!(a >= 0 && a <= 2)) {
			throw ArrayException();
		}
		if (b == 0) {
			throw DividedByZeroException();
		}
	int res = ar[a] / b;
	int rest = ar[a] % b;

	cout << "몫 : " << res << endl;
	cout << "나머지 : " << rest << endl;

	}
	catch (int a) {
		cout << "int로 잡은 catch문" << endl;
	}
	catch (ArrayException a) {
		cout << "배열의 범위를 벗어났습니다." << endl;
		cout << a.errMsg() << endl;
	}
	catch (DividedByZeroException a) {
		cout << "0으로 나눌 수 없습니다." << endl;
	}
}