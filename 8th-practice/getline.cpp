#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("c:\\windows\\system.ini");
	if (!fin) {
		cout << "c:\\windows\\system.ini ���� ����" << endl;
		return 0;
	}
	//char buf[81]; // �� ������ �ִ� 80���� ���ڷ� �����ȴٰ� ����
	//while (fin.getline(buf, 81)) { // �� ������ �ִ� 80���� ���ڷ� ����
	//	cout << buf << endl; // ���� ���
	//}
	string line;
	while (getline(fin, line)) {
		cout << line << endl;
	}
	fin.close();
}