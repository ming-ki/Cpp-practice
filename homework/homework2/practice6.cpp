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
		cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
		cin >> n >> r;
		p[i].setCircle(n, stoi(r));
	}
}

void CircleManager::searchByName() {
	string name;
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> name;
	for (int i = 0; i < size; i++) {
		if (p[i].getName() == name)
		{
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << endl;
		}
		
	}
}

void CircleManager::searchByArea() {
	int num;
	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	cin >> num;
	cout << num << "���� ū ���� �˻��մϴ�."<<endl;
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > num)
		{
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << ", ";
		}
	}
}

int main() {
	cout << "20201509 �ȹ���" << endl;
	int CircleNum;
	cout << "���� ���� >> ";
	cin >> CircleNum;
	CircleManager cm(CircleNum);
	cm.searchByName();
	cm.searchByArea();
}