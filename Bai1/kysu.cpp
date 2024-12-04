#include <iostream>
#include "kysu.h"
#include <iomanip>

using namespace std;

/*
* Constructor set up the values for the Kysu object
* @param masonhanvien
* @param ten
* @param luongcoban
* @param sogiolamthem
* @return void
* 
*/

Kysu::Kysu(string masonhanvien, string ten, int luongcoban, int sogiolamthem) {
	this->masonhanvien = masonhanvien;
	this->ten = ten;
	this->luongcoban = luongcoban;
	this->sogiolamthem = sogiolamthem;
}

/*
* TienThuong method calculates the bonus for the Kysu object
* @return double
*
*/

double Kysu::TienThuong() {
	return luongcoban + 100000 * sogiolamthem;
}

/*
* Xuat method prints out the information of the Kysu object
* @return void
*
*/

void Kysu::Xuat() {
	cout << "Ky su" << endl;
	Nhanvien::Xuat();
	cout << "So gio lam them: " << sogiolamthem << endl;
	cout << "Tien thuong: " << fixed << setprecision(0) << TienThuong() << endl;
}