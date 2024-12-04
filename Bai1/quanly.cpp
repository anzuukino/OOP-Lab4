#include <iostream>
#include <iomanip>
#include "quanly.h"

using namespace std;

/*
* Constructor set up the values for the Quanly object
* @param masonhanvien
* @param ten
* @param luongcoban
* @param tylethuong
*/

Quanly::Quanly(string masonhanvien, string ten, int luongcoban, float tylethuong) {
	this->masonhanvien = masonhanvien;
	this->ten = ten;
	this->luongcoban = luongcoban;
	this->tylethuong = tylethuong;
}

/*
* TienThuong method calculates the bonus for the Quanly object
* @return double
*
*/

double Quanly::TienThuong() {
	return luongcoban * tylethuong;
}

/*
* Xuat method prints out the information of the Quanly object
* @return void
*
*/

void Quanly::Xuat() {
	cout << "Quan ly" << endl;
	Nhanvien::Xuat();
	cout << "Ty le thuong: " << tylethuong << endl;
	cout << "Tien thuong: " << fixed << setprecision(0) << TienThuong() << endl;

}