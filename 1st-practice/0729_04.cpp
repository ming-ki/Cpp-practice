#include <iostream>
using namespace std;
struct Test {
	int a;
	int b;
	//c++������ ��� �Լ��� ���� �� �ִ�!
	void show() {
		cout << a << endl;
	}
};

void main() {
	struct Test t;
	t.a = 100;
	//��� �Լ��� ����ϰ� ���� ����
	//���� �����ڸ� ���� ����ؾ� �Ѵ�.
	t.show();
}