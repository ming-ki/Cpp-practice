#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() {
		this->radius = 1;
	}
	Circle(int radius) {
		this->radius = radius;
	}
	void setRadius(int radius) {
		this->radius = radius;
	}
};

int main() {
	Circle c1;
	Circle c2(2);
	Circle c3(3);

	c1.setRadius(4);
	c2.setRadius(5);
	c3.setRadius(6);
}