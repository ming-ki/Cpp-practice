#include <iostream>
#include <string>
using namespace std;

class Printer {
protected:
	string model;
	string manuf;
	int printedCount;
	int availableCount;
public:
	Printer(string model, string manuf, int printedCount, int availableCount) {
		this->model = model;
		this->manuf = manuf;
		this->printedCount = printedCount;
		this->availableCount = availableCount;

	}
	virtual bool print(int pages) = 0;
	virtual void show() = 0;
};


class InkJetPrinter : public Printer {
private:
	int availableInk;
public:
	InkJetPrinter(string model, string manuf, int printedCount, int availableCount, int availableInk) : Printer(model,manuf,printedCount, availableCount){
		this->availableInk = availableInk;
	}
	virtual bool print(int pages) {
		if (availableCount >= pages && availableInk >= pages) {
			availableCount -= pages;
			availableInk -= pages;
			printedCount += pages;
			cout << "프린트하였습니다." << endl;
			return true;
		}
		else if (availableCount < pages) {
			cout << "용지가 부족하여 프린트 할 수 없습니다.\n";
			return false;
		}
		else if (availableInk< pages) {
			cout << "잉크가 부족하여 프린트 할 수 없습니다.\n";
			return false;
		}
		return false;
	}
	virtual void show() {
		cout << model << ", " << manuf << ", 남은 종이 " << availableCount << "장, 남은 잉크 " << availableInk << endl;
	}
};

class LaserPrinter : public Printer {
private:
	int availableToner;
public:
	LaserPrinter(string model, string manuf, int printedCount, int availableCount, int availableInk) : Printer(model, manuf, printedCount, availableCount) {
		this->availableToner = availableToner;
	}
	virtual bool print(int pages) {
		if (availableCount >= pages && availableToner > 0) {
			availableCount -= pages;
			availableToner--;
			printedCount += pages;
			cout << "프린트하였습니다." << endl;
			return true;
		}
		else if (availableCount < pages) {
			cout << "용지가 부족하여 프린트 할 수 없습니다.\n";
			return false;
		}
		else if (availableToner <= 0) {
			cout << "토너가 부족하여 프린트 할 수 없습니다.\n";
			return false;
		}
		return false;
	}
	virtual void show() {
		cout << model << ", " << manuf << ", 남은 종이 " << availableCount << "장, 남은 토너 " << availableToner << endl;
	}
};

int main() {
	InkJetPrinter* inkPrn = new InkJetPrinter("Officejet V40", "HP", 0, 5, 10);
	LaserPrinter* laserPrn = new LaserPrinter("SCX-6x45", "삼성전자", 0, 3, 20);
	cout << "현재 작동중인 2대의 프린터는 아래와 같다." << endl;
	cout << "잉크젯 : ";
	inkPrn->show();
	cout << "레이저 : ";
	laserPrn->show();
	int type, pages;
	char input;
	do {
		cout << "\n프린터(1:잉크젯, 2:레이저)와 매수 입력 >> ";
		cin >> type >> pages;
		if (type == 1)
			inkPrn->print(pages);
		else if (type == 2)
			laserPrn->print(pages);
		else {
			cout << "잘못 입력하였습니다.\n";
			return 0;
		}
		inkPrn->show();
		laserPrn->show();
		cout << "계속 프린트 하시겠습니까?(y/n) >> ";
		cin >> input;
	} while (input == 'y');
	return 0;

}