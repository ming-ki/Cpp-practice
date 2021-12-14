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
			cout << "����Ʈ�Ͽ����ϴ�." << endl;
			return true;
		}
		else if (availableCount < pages) {
			cout << "������ �����Ͽ� ����Ʈ �� �� �����ϴ�.\n";
			return false;
		}
		else if (availableInk< pages) {
			cout << "��ũ�� �����Ͽ� ����Ʈ �� �� �����ϴ�.\n";
			return false;
		}
		return false;
	}
	virtual void show() {
		cout << model << ", " << manuf << ", ���� ���� " << availableCount << "��, ���� ��ũ " << availableInk << endl;
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
			cout << "����Ʈ�Ͽ����ϴ�." << endl;
			return true;
		}
		else if (availableCount < pages) {
			cout << "������ �����Ͽ� ����Ʈ �� �� �����ϴ�.\n";
			return false;
		}
		else if (availableToner <= 0) {
			cout << "��ʰ� �����Ͽ� ����Ʈ �� �� �����ϴ�.\n";
			return false;
		}
		return false;
	}
	virtual void show() {
		cout << model << ", " << manuf << ", ���� ���� " << availableCount << "��, ���� ��� " << availableToner << endl;
	}
};

int main() {
	InkJetPrinter* inkPrn = new InkJetPrinter("Officejet V40", "HP", 0, 5, 10);
	LaserPrinter* laserPrn = new LaserPrinter("SCX-6x45", "�Ｚ����", 0, 3, 20);
	cout << "���� �۵����� 2���� �����ʹ� �Ʒ��� ����." << endl;
	cout << "��ũ�� : ";
	inkPrn->show();
	cout << "������ : ";
	laserPrn->show();
	int type, pages;
	char input;
	do {
		cout << "\n������(1:��ũ��, 2:������)�� �ż� �Է� >> ";
		cin >> type >> pages;
		if (type == 1)
			inkPrn->print(pages);
		else if (type == 2)
			laserPrn->print(pages);
		else {
			cout << "�߸� �Է��Ͽ����ϴ�.\n";
			return 0;
		}
		inkPrn->show();
		laserPrn->show();
		cout << "��� ����Ʈ �Ͻðڽ��ϱ�?(y/n) >> ";
		cin >> input;
	} while (input == 'y');
	return 0;

}