#include <iostream>
using namespace std;

class Color {
	int red, green, blue;
public:
	Color(int red = 0, int green = 0, int blue = 0) {
		this->red = red;
		this->green = green;
		this->blue = blue;
	}
	Color& operator+(Color op2);
	bool operator==(Color op2);
	void show() {
		cout << this->red << " " << this->green << " " << this->blue << endl;
	}
};

Color& Color::operator+(Color op2) {
	red = this->red + op2.red;
	green = this->green + op2.green;
	blue = this->blue + op2.blue;

	return *this;
}
bool Color::operator==(Color op2) {
	if (this->red == op2.red && this->green == op2.green && this->blue == op2.blue)
		return true;
	else
		return false;
}

int main() {
	cout << "20201509 안민지" << endl;

	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음";
	else
		cout << "보라색 아님";
}
