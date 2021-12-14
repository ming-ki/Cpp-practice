#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cout << "20201509 안민지" << endl;
	cout << "문자열 입력 >> ";
	getline(cin, str, '\n');
	int sum = 0;
	int index = 0; 
	int count = 0;
	//3-1
	for (int i = 0; i < str.length(); i++)
	{
		if (str.at(i) == 'a')
			sum++;
	}
	cout << "문자 a는 " << sum << "개 있습니다."<<endl;
	//3-2
	while (true)
	{
		if (str.find('a', index) == -1) break;
		index = str.find('a', index) + 1;
		count++;
	}
	cout << "문자 a는 " << count << "개 있습니다.";
}