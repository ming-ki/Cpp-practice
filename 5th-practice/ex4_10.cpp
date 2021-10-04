#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	~Circle() {}
	void setRadius(int n) {
		radius = n;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
		 
};

Circle::Circle() {
	radius = 1;
}

int main() {
	cout << "생성하고자 하는 원의 개수 : ";
	int count;
	cin >> count;
	Circle* pCircle = new Circle[count];
	for (int i = 0; i < count; i++) {
		cout << "원"<<i+1<< " : ";
		int inputCircle;
		cin >> inputCircle;
		
		pCircle[i].setRadius(inputCircle);
	}
	for (int i = 0; i < count; i++) {
		cout << pCircle[i].getArea() << ' ';
	}
	cout << "\n면적이 100에서 200사이인 원의 개수 : ";
	int cnt_area = 0;
	for (int i = 0; i < count; i++) {
		if ((pCircle[i].getArea() >= 100) && (pCircle[i].getArea() <= 200)) {
			cnt_area++;
		}
	}
	cout << cnt_area << endl;
	delete[] pCircle;
}