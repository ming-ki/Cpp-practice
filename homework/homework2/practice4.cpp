#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	cout << "20201509 �ȹ���" << endl;
	string str;
	//srand((unsigned)time(0));
	int n;
	while (true) {
		cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
		cout << ">> ";
		getline(cin, str, '\n');
		
		if (str == "exit") break;
		while (true) {
			srand((unsigned)time(0));
			n = rand() % (str.length());
			if (str[n] != ' ') break;
		}
		int change = rand() % 26 + 97;
		str[n] = change;
		cout << str << endl;
	}
}