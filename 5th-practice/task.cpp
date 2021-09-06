#include <iostream>
using namespace std;

class NumberFormatException {

};
class NumberLengthException {

};

void main() {
	char phone[20];
	cout << "전화번호 입력(-는 빼고 11자리만 입력해주시오) : ";
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
		cout << "전화번호 등록 완료!" << endl;
		
	}
	catch (NumberFormatException nfe) {
		cout << "-는 제외하고 숫자만 입력해주세요." << endl;
	}
	catch (NumberLengthException nle) {
		cout << "전화번호를 확인한 후 11자리만 입력해주세요." << endl;
	}
}

