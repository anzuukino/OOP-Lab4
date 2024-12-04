#pragma once
#include <iostream>
#include "nhanvien.h"

using namespace std;

class Kysu : public Nhanvien {
private:
	int sogiolamthem;
public:
	double TienThuong() override;
	Kysu(string masonhanvien, string ten, int luongcoban, int sogiolamthem);
	void Xuat() override;
};
