#include <iostream>
using namespace std;

void main() {
	int a, b;
	cout << "���� �����ڽ��ϱ�? : ";
	cin >> a;
	cout << "������ �����ڽ��ϱ�? : ";
	cin >> b;
	try {
		if (b == 0) {
			throw b;
		}
		cout << a << "��" << b << "�� ���� �� : " << a / b << endl;
		cout << a << "��" << b << "�� ���� ������ : " << a % b << endl;
	}
	catch (int a) {
		cout << "0���δ� ���� �� �����ϴ�." << endl;
	}
}