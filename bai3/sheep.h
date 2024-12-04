#pragma once
#include "animal.h"
#include <iostream>

using namespace std;

class Sheep : public Animal {
private:
	static int count;
	static int milkcount;
public:
	Sheep();
	string sound();
	int givebirth();
	int givemilk();
	static int getCount();
	void feed();
	bool isFeed();
	string getname();
	static int getMilkCount();
	int getMilk();
	int getBaby();
};