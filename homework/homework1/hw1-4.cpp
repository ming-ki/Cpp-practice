#include <iostream>
using namespace std;
#include "hw1-4.h"

char Ram::read(int address) {
	return mem[address];
}

void Ram::write(int address, char value) {
	mem[address] = value;
}