#include "premium.h"
#include "business.h"
#include "deluxe.h"
#include <iostream>

using namespace std;

int main() {
	Deluxe a(1, 100000, 150000);
	Deluxe b(2, 50000, 75000);
	Premium c(5, 300000);
	Premium d(1, 150000);
	Business e(2);



	cout << "Doanh thu cua loai phong lon nhat la: " << endl;

	if (Deluxe::gettongtien() > Premium::gettongtien() && Deluxe::gettongtien() > Business::gettongtien()) {
		cout << "Deluxe: " << Deluxe::gettongtien() << endl;
	}
	else if (Premium::gettongtien() > Deluxe::gettongtien() && Premium::gettongtien() > Business::gettongtien()) {
		cout << "Premium: " << Premium::gettongtien() << endl;
	}
	else {
		cout << "Business: " << Business::gettongtien() << endl;
	}
}
	