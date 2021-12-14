#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title;
		this->price = price;
		this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}
	string getTitle() { return title; }
	Book operator+= (int op2);
	Book operator-= (int op2);
};

Book Book::operator+=(int op2) {
	this->price = this->price + op2;
	return *this;
}
Book Book::operator-=(int op2) {
	this->price = this->price - op2;
	return *this;
}

int main() {
	cout << "20201509 �ȹ���" << endl;
	Book a("û��", 20000, 300), b("�̷�", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();
}