#pragma once
#include <iostream>
#include "baseroom.h"

using namespace std;

class Business : public baseroom {
private:
	static int tongtien;
public:
	static int gettongtien();

	Business(int sodem);

	int tinhtien();
};