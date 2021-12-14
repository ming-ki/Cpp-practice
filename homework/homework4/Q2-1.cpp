#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}
	string getTitle() { return title; }
	bool operator==(int op);
	bool operator==(string op1);
	bool operator==(Book op2);

};

bool Book::operator==(int op) {
	if (this->price == op) {
		return true;
	}
	else return false;
}

bool Book::operator==(string op1) {
	if (this->title == op1) {
		return true;
	}
	else return false;
}
bool Book::operator==(Book op2) {
	if (this->title == op2.title && this->price == op2.price && this->pages == op2.pages) {
		return true;
	}
	else return false;
}
int main() {
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if (a == 30000)
		cout << "정가 30000원" << endl;
	if(a == "명품 C++")
		cout<<"명품 C++입니다."<<endl;
	if (a == b)
		cout << "두 책이 같은 책입니다." << endl;
}