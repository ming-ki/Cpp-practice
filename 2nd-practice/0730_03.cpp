#include <iostream>
#include <string>
using namespace std;
void main() {
	// std��� namespace ���� string�� ��� �� �� �ִ�.
	// �ٸ� string�� <string>�� ������ �����Ƿ� �ݵ��
	// ��������� include ����� �Ѵ�
	string str = "�ݰ����ϴ�.";
	// �ٸ� ������ �����ϴ� ���
	str = "�ȳ��ϼ���!";
	cout << "���ڿ� �Է� : ";
	// �Է��� �޴� ���
	// ����,\t,\n���� �����Ѵ�.
	// cin >> str;
	// std �ȿ� �ִ� getline()�Լ�
	// �� ���� ��ä�� �޾ƿ´�.
	getline(cin, str);
	cout << str << endl;
}