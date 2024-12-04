#include "Kysu.h"
#include "Quanly.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	Nhanvien* nv[2];
	for (int i = 0; i < 2; i++) {
		string masonhanvien, ten;
		int luongcoban;
		cout << "Nhap ma so nhan vien: ";
		cin >> masonhanvien;
		cout << "Nhap ten nhan vien: ";
		cin.ignore();
		getline(cin,ten);
		cout << "Nhap luong co ban: ";
		cin >> luongcoban;
		if (i == 1) {
			int sogiolamthem;
			cout << "Nhap so gio lam them: ";
			cin >> sogiolamthem;
			nv[i] = new Kysu(masonhanvien, ten, luongcoban, sogiolamthem);
		}
		else {
			float tylethuong;
			cout << "Nhap ty le thuong: ";
			cin >> tylethuong;
			nv[i] = new Quanly(masonhanvien, ten, luongcoban, tylethuong);
		}

	}
	for (int i = 0; i < 2; i++) {
		nv[i]->Xuat();
	}

	return 0;
}