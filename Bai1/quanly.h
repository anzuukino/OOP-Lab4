#pragma once
#include <iostream>
#include "nhanvien.h"

using namespace std;

class Quanly : public Nhanvien {
private:
	float tylethuong;
public:
	double TienThuong() override;
	Quanly(string masonhanvien, string ten, int luongcoban, float tylethuong);
	void Xuat() override;

};
