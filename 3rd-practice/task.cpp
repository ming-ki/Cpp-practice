#include <iostream>
#include <string>
using namespace std;

class User {
	string id;
	string pw;
public:
	// 초기화 생성자
	User(string id, string pw) {
		this->id = id;
		this->pw = pw;
	}
	// 게터
	string getId() {
		return this->id;
	}
	string getPw() {
		return this->pw;
	}
	// 세터
	void setId(string id) {
		this->id = id;
	}
	void setPw(string pw) {
		this->pw = pw;
	}
};
void main() {
	// 로그인 구현
	//id abc	def		qwe
	//pw 123	9912	5148
	User u1 = User("abc", "1234");
	User u2 = User("def", "9912");
	User u3 = User("qwe", "5148");

	// 클래스가 요소로 들어있는 배열
	User ar[3] = { u1,u2,u3 };
	// int ar2[3] = { 10,20,30 };

	string id;
	string pw;
	bool check = false;
	cout << "id 입력 : ";
	cin >> id;
	cout << "pw 입력 : ";
	cin >> pw;
	for (int i = 0; i < 3; i++) {
		// 사용자가 입력한 아이디가 배열에 담긴 아이디와 일치하고
		// 사용자가 입력한 비밀번호가 배열에 담긴 비밀번호와 일치하다면
		// 로그인 성공
		// 그렇지 않으면 로그인 실패
		//ar[i].getId().compare(사용자가 입력한 id 값);
		if (ar[i].getId().compare(id) == 0 && ar[i].getPw().compare(pw) == 0)
		{
			//cout << "로그인 성공" << endl;
			check = true;
			break;
		}
		else if (ar[i].getId().compare(id) != 0 && ar[i].getPw().compare(pw) == 0)
			cout << "ID가 틀립니다." << endl;
		else if (ar[i].getId().compare(id) == 0 && ar[i].getPw().compare(pw) != 0)
			cout << "PW가 틀립니다." << endl;
		//else
			//cout << "로그인 오류" << endl;
		
	}
	if (check) {
		cout << "로그인 성공" << endl;
	}
	else
		cout << "로그인 실패" << endl;
	
}