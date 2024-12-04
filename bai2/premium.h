#pragma once
#include <iostream>
#include "baseroom.h"

using namespace std;

class Premium : public baseroom {
private:
	static int tongtien;
public:
	static int gettongtien();

	Premium(int sodem, int phidichvu);

	int tinhtien();
};