#pragma once
#include <iostream>
using namespace std;

class Ram {
	char mem[100 * 1024];
	int size;
public:
	Ram() { mem[0] = { 0 }; size = 100 * 1024; }
	~Ram() { cout << "메모리 제거됨"; }
	char read(int address);
	void write(int address, char value);
};