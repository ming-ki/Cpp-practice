#include <iostream>
#include <string>
#include "avatar.h"
using namespace std;

void main() {

	Animal a = Animal("�⺻", 0, 0);
	a.show();
	int choice = 0;
	Animal* avatar;
	cout << "ĳ���͸� ������ �ּ���!" << endl;
	cout << "1. �䳢 2. ȣ���� 3. �����" << endl;
	cin >> choice;

	if (choice == 1) {
		// �䳢 ����
		Rabbit r = Rabbit("�䳢", 10, 10);
		avatar = &r;
		
	}
	else if (choice == 2) {
		// ȣ���� ����
		Tiger t = Tiger("ȣ����", 20, 5); 
		avatar = &t;
	}
	else if (choice == 3) {
		// ����� ����
		Cat c = Cat("�����", 10, 10);
		avatar = &c;
	}
	else {
		cout << "�߸� �Է��߽��ϴ�." << endl;
	}
	while (true) {
		cout << "1. ��Ա� 2. ��å�ϱ� 3. �޽� 4. ������\n";
		cin >> choice;
		if (choice == 4) {
			cout << "������ �����մϴ�\n";
			break;
		}
		else if (choice == 1) {
			avatar->eat();
		}
		else if (choice == 2) {
			avatar->walk();
		}
		else if (choice == 3) {
			avatar->rest();
		}
		else {
			cout << "�ٽ� �Է����ּ���\n";
		}
	}
	// dynamic_cast<�ٲٰ� ���� Ÿ��>(�ٲ� ������)
	// �ٲ��� ���Ѵٸ� ����� NULL�� ���´�.
	if (dynamic_cast<Rabbit*>(avatar) != NULL) {
		Rabbit* r = (Rabbit*)avatar;
		r->onlyRabbit();
		
	}
}