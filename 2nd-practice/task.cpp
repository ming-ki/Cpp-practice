#include <iostream>
#include <string>

using namespace std;
const int KEY = 10;
void main() {
    // ��ȣȭ Ű�� ����� �����Ͽ� ������ ���ϰ� �Ѵ�.
    string pw = "anc";
    cout << "��й�ȣ ���� : ";
    cin >> pw;
    string en_pw = encode(pw);
    cout << "��ȣȭ�� ��й�ȣ : " << en_pw << endl;
    cout << "��ȣȭ�� ��й�ȣ : " << decode(en_pw) << endl;

    // �빮�ڸ� �ҹ��ڷ�, �ҹ��ڸ� �빮�ڷ� �ٲٱ�
    string str;
    cout << "�ٲ� ���ڿ� : " << endl;
    cin >> str;
    cout << change(str) << endl;

    string s1 = "abc";
    string s2 = "def";
    //compare();
    // �տ� �ִ� ����� �ƽ�Ű �ڵ� �󿡼� ������ -1
    // �� ������ 1
    // ���� ������ 0�� ���´�
    cout << s1.compare(s2) << endl;
}
// ����ڰ� �Է��� ���� ���� Ư������ ���ڿ�����
// �ҹ��ڴ� �빮�ڷ�, �빮�ڴ� �ҹ��ڷ� �ٲ㼭 ���
string change(string str) {
    for (int i = 0; i < str.length(); i++)
    {

        //���ڰ� �ҹ��ڶ��
        if (96 < str[i] < 123)
        {
            str[i] = (char)(str[i] - 32);
        }
        else if (64 < str[i] < 91)
        {
            str[i] = (char)(str[i] + 32);
        }
    }
    return str;
}

string encode(string pw) {
    for (int i = 0; i < pw.length(); i++) {
        pw[i] = (char)(pw[i] + KEY);
    }
    return pw;
}
string decode(string pw) {
    for (int i = 0; i < pw.length(); i++) {
        pw[i] = (char)(pw[i] - KEY);
    }
    return pw;

}