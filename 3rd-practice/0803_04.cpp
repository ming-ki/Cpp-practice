#include <iostream>
#include <string>
using namespace std;

class Car {
private:
	int pri_i;
protected:
	int pro_i;
public:
	string name;
	int price;
	string color;
//	Car(string name,int price, string color) {
//		this->name = name;
//		this->price = price;
//		this->color = color;
//	}
	void go() {
		cout << name << "���� ���� ������ ���ϴ�" << endl;
	}
	void engineOn() {
		cout << name << "���� ���� ����� �õ� �׽��ϴ�" << endl;
	}
};
class SuperCar : public Car {
	/*void test() {
		pro_i = 100;
	}*/
public:
	// �θ� Ŭ���� ��� ���� �߰������� �ʿ��� �������
	// �߰������� �ۼ��Ͽ� ����� �� �ִ�.
	string brand;
	//overriding ������
	void engineOn() {
		cout << name << "���� ���� ��ư���� �õ� �׽��ϴ�" << endl;
	}
	void openRoof() {
		cout << name << "���� �� ������ ���Ƚ��ϴ�." << endl;
	}
};
void main() {
	Car myCar = Car();
	SuperCar momCar = SuperCar();
	momCar.name = "����";
	momCar.price = 2000;
	momCar.color = "������"; 
	//momCar.pro_i;
	myCar.name = "�ȹ���";
	myCar.price = 200;
	myCar.color = "�Ķ���";
	//Car myCar = Car("�ȹ���", 200, "������");

	myCar.engineOn();
	momCar.engineOn();
	momCar.openRoof();
	// myCar.openRoof(); openRoof() �޼ҵ�� SuperCar Ŭ������ ���ǰ� �Ǿ��ֱ⿡
	// �Ϲ� Car Ÿ�Կ����� ���� �� �� ����.
}