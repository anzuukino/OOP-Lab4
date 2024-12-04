#include "nhanvien.h"
#include <iostream>

using namespace std;

/*
* Output the information of the employee
* @return void
*/

void Nhanvien::Xuat() {
	cout << "Ma so nhan vien: " << masonhanvien << endl;
	cout << "Ten nhan vien: " << ten << endl;
	cout << "Luong co ban: " << luongcoban << endl;
}