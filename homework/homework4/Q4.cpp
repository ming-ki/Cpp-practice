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

	friend bool operator<(string op1, Book& op2);
};

bool operator<(string op1, Book& op2) {
	if (op1 < op2.title) return true;
	else return false;
}



int main() {
	cout << "20201509 �ȹ���" << endl << endl;
	Book a("û��", 20000, 300);
	string b;
	cout << "å �̸��� �Է��ϼ���>>";
	getline(cin, b);
	if (b < a) cout << a.getTitle() << "�� " << b << "���� �ڿ� �ֱ���!" << endl;
}