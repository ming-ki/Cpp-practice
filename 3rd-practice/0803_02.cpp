#include <iostream>
#include <string>
using namespace std;

class Test {
public:
	// Ŭ���� ���ο����� �̸��� �˷���
	void a();
	void b();
};
// Ŭ���� �ۿ��� ��� �Լ� ����
// �Ϲ� �Լ��� �����Ϸ��� ���� �� �� �ֵ���
// ������ ������(::)�� ����� �Ѵ�.
void Test::a() {
	cout << "a �Լ��� ȣ���" << endl;
}
void Test::b() {
	cout << "b �Լ��� ȣ���" << endl;
}
void main() {
	Test t;
	t.a();
}