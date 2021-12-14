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
	void show() {
		cout << this->red << " " << this->green << " " << this->blue << endl;
	}
	friend Color operator+(Color a, Color b);
	friend bool operator==(Color a, Color b);
};

Color operator+(Color a, Color b) {
	Color c;
	c.red = a.red + b.red;
	c.green = a.green + b.green;
	c.blue = a.blue + b.blue;
	return c;
}
bool operator== (Color a, Color b) {
	if (a.red == b.red && a.blue == b.blue)
		return true;
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
