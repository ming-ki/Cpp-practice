#include <iostream>
using namespace std;

class Coord {
	int x;
	int y;
public:
	Coord(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void show() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
	Coord operator+(Coord c) {
		int x = this->x + c.x;
		int y = this->y + c.y;
		//cout << "x,y = " << x << "," << y << endl;
		return Coord(x, y);
	}
	Coord operator+(int a) {
		int x = this->x + a;
		int y = this->y + a;
		//cout << "x,y = " << x << "," << y << endl;
		return Coord(x, y);
	}
	Coord operator+=(Coord c) {
		this->x += c.x;
		this->y += c.y;
		return *this;
	}
	Coord operator-(Coord c) {
		int x = this->x - c.x;
		int y = this->y - c.y;
		//cout << "x,y = " << x << "," << y << endl;
		return Coord(x, y);
	}
	int operator==(Coord c) {
		if (this->x == c.x && this->y == c.y) {
			return 1;
		}
		return 0;
	}
	Coord operator++() {
		this->x++;
		this->y++;
		return *this;
	}
	// 매개변수는 후위형임을 나타내기위해서만 사용이 된다.
	// 따라서 직접 사용 안 함
	Coord operator++(int a) {
		Coord temp = Coord(this->x, this->y);
		this->x++;
		this->y++;
		return temp;
	}
	friend Coord operator+(int a, Coord c);
};

// operator+(피연산자1,피연산자2)
// 피연산자1+피연산자2
Coord operator+(int a, Coord c) {
	int x = a + c.x;
	int y = a + c.y;
	return Coord(x, y);
}
void main() {
	Coord c1 = Coord(10, 10);
	Coord c2 = Coord(5, 7);
	Coord c3 = Coord(10, 10);
	cout << (c1 == c3) << endl;
	if (c1 == c3) {
		cout << "서로 같은 위치에 존재합니다." << endl;
	}
	c1.operator + (c2);
	Coord res = c1 + c2;
	c1.show();
	c2.show();
	cout << "--c1+c2 결과--" << endl;
	res.show();
	cout << "--c1+10 결과--" << endl;
	//res = c1.operator+(10);
	res = c1 + 10;
	res.show();
	cout << "--10+c1 결과--" << endl;
	res = 10 + c1;
	res.show();
	cout << "--c1-c2 결과--" << endl;
	c1.operator-(c2);
	res = c1 - c2;
	res.show();
	cout << "--c1+=c2 결과--" << endl;
	c1.show();
	c1 += c2;
	c1.show();
	cout << "--++c1 결과--" << endl;
	c1.operator++();
	++c1;
	c1.show();
	cout << "--c1++ 결과--" << endl;
	res = c1++;
	res.show();
	c1.show();
}