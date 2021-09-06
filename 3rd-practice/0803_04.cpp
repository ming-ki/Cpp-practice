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
		cout << name << "님의 차가 앞으로 갑니다" << endl;
	}
	void engineOn() {
		cout << name << "님의 차를 열쇠로 시동 켰습니다" << endl;
	}
};
class SuperCar : public Car {
	/*void test() {
		pro_i = 100;
	}*/
public:
	// 부모 클래스 멤버 말고 추가적으로 필요한 멤버들은
	// 추가적으로 작성하여 사용할 수 있다.
	string brand;
	//overriding 재정의
	void engineOn() {
		cout << name << "님의 차를 버튼으로 시동 켰습니다" << endl;
	}
	void openRoof() {
		cout << name << "님의 차 지붕이 열렸습니다." << endl;
	}
};
void main() {
	Car myCar = Car();
	SuperCar momCar = SuperCar();
	momCar.name = "엄마";
	momCar.price = 2000;
	momCar.color = "빨간색"; 
	//momCar.pro_i;
	myCar.name = "안민지";
	myCar.price = 200;
	myCar.color = "파란색";
	//Car myCar = Car("안민지", 200, "검정색");

	myCar.engineOn();
	momCar.engineOn();
	momCar.openRoof();
	// myCar.openRoof(); openRoof() 메소드는 SuperCar 클래스에 정의가 되어있기에
	// 일반 Car 타입에서는 접근 할 수 없다.
}