#pragma once
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class Animal {
protected:
	string* name;
	int hp;
	int feedCnt;
public:
	Animal(string name, int hp, int feedCnt) {
		this->name = &name;
		this->hp = hp;
		this->feedCnt = feedCnt;
	}
	void show() {
		cout << "ÇöÀç ¸ÔÀÌ °¹¼ö : " << this->feedCnt << endl;
		cout << "ÇöÀç Ã¼·Â : " << this->hp << endl;
	}
	virtual void eat() {
		this->hp++;
		this->feedCnt--;
		show();
	}
	virtual void walk() {
		this->hp--;
		this->feedCnt++;
		show();
	}
	virtual void rest() {
		cout << "ÈÞ½Ä Áß";
		for (int i = 0; i < 3; i++) {
			Sleep(1000);
			cout << "!";
		}
		cout << endl;
		show();
	}
}; 

class Rabbit : public Animal {
public:
	Rabbit(string name, int hp, int feedCnt) : Animal(name, hp, feedCnt) {

	}
	void eat() {
		feedCnt -= 1;
		hp += 3;
		show();
	}
	void walk() {
		hp -= 5;
		feedCnt += 2;
		show();
	}
	void rest() {
		// ºÎ¸ðÀÇ rest() ÇÔ¼ö¸¦ »ç¿ëÇÏ°í ½ÍÀ»¶§´Â ½ºÄÚÇÁ ¿¬»êÀÚ¸¦ »ç¿ëÇÑ´Ù.
		cout << *name;
		Animal::rest();
	}
	void onlyRabbit() {
		cout << "±øÃÑ ±øÃÑ";
	}

};
class Tiger : public Animal {
public:
	Tiger(string name, int hp, int feedCnt) : Animal(name, hp, feedCnt) {

	}
	void eat() {
		feedCnt -= 5;
		hp += 2;
		show();
	}
	void walk() {
		hp -= 3;
		feedCnt += 4;
		show();
	}
	void rest() {
		cout << *name <<" ÈÞ½Ä Áß";
		for (int i = 0; i < 5; i++) {
			Sleep(1000);
			cout << "!";
		}
		cout << endl;
		show();
	}
		
};

class Cat : public Animal {
public:
	Cat(string name, int hp, int feedCnt) : Animal(name, hp, feedCnt) {

	}
	void walk() {
		hp -= 1;
		feedCnt += 2;
		show();
	}
	void rest() {
		cout << *name << " ÈÞ½Ä Áß";
		for (int i = 0; i < 4; i++) {
			Sleep(1000);
			cout << "!";
		}
		cout << endl;
		show();
	}
};
