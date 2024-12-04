#pragma once
#include <iostream>
#include "baseroom.h"

using namespace std;

class Deluxe : public baseroom {
private:
	static int tongtien;
public:
	static int gettongtien();

	Deluxe(int sodem, int phidichvu, int phiphucvu);

	int tinhtien();
};