#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius);
	double getArea() {return 3.14 * radius * radius;}
	string getName() {return name;}
};

class CircleManager {
	Circle* p;
	int size;
public:
	CircleManager(int size);
	~CircleManager() { delete[] p; }
	void searchByName();
	void searchByArea();
};

void Circle::setCircle(string name, int radius) {
	this->radius = radius;
	this->name = name;
}

CircleManager::CircleManager(int size) {
	p = new Circle[size];
	this->size = size;
	string n,r;
	
	for (int i = 0; i < size; i++)
	{
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		cin >> n >> r;
		p[i].setCircle(n, stoi(r));
	}
}

void CircleManager::searchByName() {
	string name;
	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> name;
	for (int i = 0; i < size; i++) {
		if (p[i].getName() == name)
		{
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << endl;
		}
		
	}
}

void CircleManager::searchByArea() {
	int num;
	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> num;
	cout << num << "보다 큰 원을 검색합니다."<<endl;
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > num)
		{
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ", ";
		}
	}
}

int main() {
	cout << "20201509 안민지" << endl;
	int CircleNum;
	cout << "원의 개수 >> ";
	cin >> CircleNum;
	CircleManager cm(CircleNum);
	cm.searchByName();
	cm.searchByArea();
}