#include <iostream>
#include <string>
using namespace std;

class User {
public:
	static int cnt; // ������ �ʱ�ȭ ����� �� Ŭ���� ����, ��� ����
	int a; // �ν��Ͻ� ����, ��� ����
	User() {
		cnt++;
	}
	static void showCnt() {
		// cout << a; �ν��Ͻ� ������ ������� ���Ѵ�.
		// ��ü���� �޶����� ������ � ��ü(�ν��Ͻ�)���� �˷���� �Ѵ�.
		// static �Լ��� static �����ۿ� ������� ���Ѵ�.
		cout << "���� ȸ�� ���� " << cnt << "�� �Դϴ�." << endl;
	}
	void hello() { //�޼ҵ�, ��� �Լ�
		cnt++; // �Ϲ� �޼ҵ忡���� static �޼ҵ嵵 ����� �� �ִ�.
		cout << "�ȳ��ϼ���" << endl;
	}
};
// static ������ �ʱ�ȭ�� ����� �ϴµ�
// Ŭ���� �ȿ����� �ʱ�ȭ�� ������ ���ϱ⿡
// �ۿ��� �ʱ�ȭ ���ش�.

int User::cnt = 0;

void main() {
	User u1 = User();
	User u2 = User();
	User u3 = User();
	User u4 = User();
	//cout << "�� ȸ���� : " << User::cnt << endl;
	User::showCnt();
	u1.hello();
	u1.cnt = 100;
	u2.cnt = 200;
	// static ������ ��ü�� ���� �߿����� �ʴ�
	// ��� ��ü�� ���� �����ϰ� �ֱ� �����̴�.
	// ���� ��ü. �ϰ� �����ϴ� ���� �ƴ϶�
	// Ŭ���������� �ٷ� ������ �� �ִ�.
	User::cnt = 5000;
	u1.a = 10;
	u2.a = 20;
	cout << "u1.cnt : " << u1.cnt << endl;
	cout << "u2.cnt : " << u2.cnt << endl;
	cout << "u1.a : " << u1.a << endl;
	cout << "u2.a : " << u2.a << endl;
}