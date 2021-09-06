#include <iostream>
#include <string>
using namespace std;

class Test {
public:	
	int a;
	int b;
};
struct Stt {
	int a;
	int b;
};
void main() {
	struct Stt s1;
	s1.a = 10;
	// 객체화
	Test t1; //t1 --> 객체 인스턴스화
	Test t2;
	Test t3;
	t1.a = 10;
	t1.hello();
}