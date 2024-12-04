#pragma once
#include <iostream>

using namespace std;

class Nhanvien {
protected:
	string masonhanvien;
	string ten;
	int luongcoban;
public:
	virtual double TienThuong() = 0;

	virtual void Xuat();
};
