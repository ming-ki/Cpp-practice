#include <iostream>
#include <string>
using namespace std;

class User {
	string id;
	string pw;
public:
	// �ʱ�ȭ ������
	User(string id, string pw) {
		this->id = id;
		this->pw = pw;
	}
	// ����
	string getId() {
		return this->id;
	}
	string getPw() {
		return this->pw;
	}
	// ����
	void setId(string id) {
		this->id = id;
	}
	void setPw(string pw) {
		this->pw = pw;
	}
};
void main() {
	// �α��� ����
	//id abc	def		qwe
	//pw 123	9912	5148
	User u1 = User("abc", "1234");
	User u2 = User("def", "9912");
	User u3 = User("qwe", "5148");

	// Ŭ������ ��ҷ� ����ִ� �迭
	User ar[3] = { u1,u2,u3 };
	// int ar2[3] = { 10,20,30 };

	string id;
	string pw;
	bool check = false;
	cout << "id �Է� : ";
	cin >> id;
	cout << "pw �Է� : ";
	cin >> pw;
	for (int i = 0; i < 3; i++) {
		// ����ڰ� �Է��� ���̵� �迭�� ��� ���̵�� ��ġ�ϰ�
		// ����ڰ� �Է��� ��й�ȣ�� �迭�� ��� ��й�ȣ�� ��ġ�ϴٸ�
		// �α��� ����
		// �׷��� ������ �α��� ����
		//ar[i].getId().compare(����ڰ� �Է��� id ��);
		if (ar[i].getId().compare(id) == 0 && ar[i].getPw().compare(pw) == 0)
		{
			//cout << "�α��� ����" << endl;
			check = true;
			break;
		}
		else if (ar[i].getId().compare(id) != 0 && ar[i].getPw().compare(pw) == 0)
			cout << "ID�� Ʋ���ϴ�." << endl;
		else if (ar[i].getId().compare(id) == 0 && ar[i].getPw().compare(pw) != 0)
			cout << "PW�� Ʋ���ϴ�." << endl;
		//else
			//cout << "�α��� ����" << endl;
		
	}
	if (check) {
		cout << "�α��� ����" << endl;
	}
	else
		cout << "�α��� ����" << endl;
	
}