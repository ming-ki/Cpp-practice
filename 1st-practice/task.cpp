// 학생의 성적 정보를 출력하는 프로그램
// 학생의 성적은 다음과 같다
// 김영희 국어 : 70, 영어 : 80
// 홍길동 국어 : 60, 영어 : 80
// 학생의 이름과 국어 성적, 영어 성적을 출력하라
// 출력 예시
// ----학생 정보----
// 이름 : 김철수
// 국어 : 00
// 영어 : 00


//c++ 헤더파일 iostream을 include 해준다.
#include <iostream>
//std namespace를 생략하기 위해서 사용한다.
using namespace std;

//변수들이 같은 이름으로 반복되므로 구조체로 묶어준다.
struct Student {
	//학생 이름을 저장할 변수
	char name[30];
	//국어 점수를 저장할 변수
	int kor;
	//영어 점수를 저장할 변수
	int eng;
	// 학생 성적 정보를 알려줄 show() 멤버 함수를 만든다.
	// 구조체 멤버를 출력할 것이기 때문에 따로 매개변수 
	void show() {
		cout << "----학생정보----" << endl;
		cout << "이름: " << name << endl;
		cout << "국어: " << kor << endl;
		cout << "영어: " << eng << endl;
	}
};

void main() {
	// 학생 정보를 저장한 구조체 변수 생성
	struct Student s1 = { "김영희",70,80 };
	struct Student s2 = { "홍길동",60,80 };
	// 멤버함수 호출
	s1.show();
	s2.show();
}