#include <iostream>
using namespace std;

class NumberFormatException {

};
class NumberLengthException {

};

void main() {
	char phone[20];
	cout << "��ȭ��ȣ �Է�(-�� ���� 11�ڸ��� �Է����ֽÿ�) : ";
	cin >> phone;

	try 
	{
		for (int i = 0; i < strlen(phone); i++)
		{
			if (phone[i] == '-') 
			{
				throw NumberFormatException();
			}
		} 
		if (strlen(phone) != 11) {
			throw NumberLengthException();
		}
		cout << "��ȭ��ȣ ��� �Ϸ�!" << endl;
		
	}
	catch (NumberFormatException nfe) {
		cout << "-�� �����ϰ� ���ڸ� �Է����ּ���." << endl;
	}
	catch (NumberLengthException nle) {
		cout << "��ȭ��ȣ�� Ȯ���� �� 11�ڸ��� �Է����ּ���." << endl;
	}
}

