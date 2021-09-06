#include <iostream>
using namespace std;

int g = 20; //전역 변수

int add(int x, int y) //전역 함수
{
	return x + y;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 

int main()
{ 
	int a, b, sum;
	int n[10];
	double d[] = { 0.1,0.2,9.5,3.9 };
	int i;

	cout << "두 정수를 입력하세요 >>";
	cin >> a >> b; //두 정수를 읽어 a와 b에 입력
	sum = a + b;
	cout << "합은 " << sum << "\n";
	cout << "합은 " << add(a,b) << "\n";
	cout << "전역 변수 g 값은 " << g;
	for (i = 0; i < 10; i++)
		n[i] = i * 2;
	for (i = 0; i < 10; i++)
		cout << "\n";

	double sum = 0;
	for (i = 0; i < 4; i++)
		sum += d[i];

	cout << "배열의 d의 합은" << sum;


	return 0; //return 문을 생략하면 자동으로 return 0; 삽입된다.
	
}