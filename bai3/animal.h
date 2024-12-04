#pragma once
#include <iostream>

using namespace std;

class Animal {
protected:
	int milk;
	bool isfeed;
	int baby;
public:
	virtual string sound() = 0;
	virtual int givebirth() = 0;
	virtual int givemilk() = 0;
	virtual void feed() = 0;
	virtual bool isFeed() = 0;
	virtual string getname() = 0;
	virtual int getMilk() = 0;
	virtual int getBaby() = 0;
};