#include <iostream>
#include <string>
using namespace std;

class ArrayException {
public:
	string errMsg() {
		return "�迭���� ��� ���� �߻�";
	}
};
class DividedByZeroException {
public:
	string errMsg() {
		return "0���� ���� ���� �߻�";
	}
};
void main() {
	int a, b;
	int ar[] = { 10,20,30 };
	cout << "���° ���� ������ �ͽ��ϱ�? >>> ";
	cin >> a;
	cout << "������ ������ �ͽ��ϱ�? >>> ";
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

	cout << "�� : " << res << endl;
	cout << "������ : " << rest << endl;

	}
	catch (int a) {
		cout << "int�� ���� catch��" << endl;
	}
	catch (ArrayException a) {
		cout << "�迭�� ������ ������ϴ�." << endl;
		cout << a.errMsg() << endl;
	}
	catch (DividedByZeroException a) {
		cout << "0���� ���� �� �����ϴ�." << endl;
	}
}