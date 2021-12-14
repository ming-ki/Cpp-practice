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
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
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
	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
	if (a == 30000)
		cout << "���� 30000��" << endl;
	if(a == "��ǰ C++")
		cout<<"��ǰ C++�Դϴ�."<<endl;
	if (a == b)
		cout << "�� å�� ���� å�Դϴ�." << endl;
}