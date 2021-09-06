#include <iostream>
#include <string>

using namespace std;
const int KEY = 10;
void main() {
    // 암호화 키를 상수로 설정하여 변하지 못하게 한다.
    string pw = "anc";
    cout << "비밀번호 설정 : ";
    cin >> pw;
    string en_pw = encode(pw);
    cout << "암호화된 비밀번호 : " << en_pw << endl;
    cout << "복호화된 비밀번호 : " << decode(en_pw) << endl;

    // 대문자를 소문자로, 소문자를 대문자로 바꾸기
    string str;
    cout << "바꿀 문자열 : " << endl;
    cin >> str;
    cout << change(str) << endl;

    string s1 = "abc";
    string s2 = "def";
    //compare();
    // 앞에 있는 대상이 아스키 코드 상에서 빠르면 -1
    // 더 느리면 1
    // 서로 같으면 0이 나온다
    cout << s1.compare(s2) << endl;
}
// 사용자가 입력한 영어 숫자 특수문자 문자열에서
// 소문자는 대문자로, 대문자는 소문자로 바꿔서 출력
string change(string str) {
    for (int i = 0; i < str.length(); i++)
    {

        //문자가 소문자라면
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