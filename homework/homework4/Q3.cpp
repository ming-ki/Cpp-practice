#include <iostream>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title, int price, int pages) {
		this->title = title;
		this->price = price;
		this->pages = pages;
	}
	bool operator!();
};
bool Book::operator!() {
	if (this->price == 0)
		return true;
	else
		return false;
}

int main() {
	cout << "20201509 안민지" << endl;
	Book book("�������", 0, 50);

	if (!book)
		cout << "��¥��" << endl;
}