#include <iostream>
#include <vector>
#include "goat.h"
#include "cow.h"
#include "sheep.h"
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	srand(time(0));
	vector <Animal*> animals;
	int soluongbo, soluongcuu, soluongde;
	cout << "Nhap so luong bo: ";
	cin >> soluongbo;
	cout << "Nhap so luong cuu: ";
	cin >> soluongcuu;
	cout << "Nhap so luong de: ";
	cin >> soluongde;
	for (int i = 0; i < soluongbo; i++) {
		animals.push_back(new Cow());
	}

	for (int i = 0; i < soluongcuu; i++) {
		animals.push_back(new Sheep());
	}

	for (int i = 0; i < soluongde; i++) {
		animals.push_back(new Goat());
	}

	cout << "--------------------------" << endl;
	cout << "Cac tieng keu trong nong trai" << endl;

	for (int i = 0; i < animals.size(); i++) {
		if (!animals[i]->isFeed()) {
			cout << animals[i]->sound() << endl;
		}
	}

	int firstcow = 0, firstgoat = 0, firstsheep = 0;

	cout << "--------------------------" << endl;
	cout << "So luong bo : " << Cow::getCount() << endl;
	cout << "So luong sua bo : " << Cow::getMilkCount() << " lit" << endl;
	cout << "--------------------------" << endl;

	cout << "--------------------------" << endl;
	cout << "So luong de : " << Goat::getCount() << endl;
	cout << "So luong sua de : " << Goat::getMilkCount() << " lit" << endl;
	cout << "--------------------------" << endl;

	cout << "--------------------------" << endl;
	cout << "So luong cuu : " << Sheep::getCount() << endl;
	cout << "So luong sua cuu : " << Sheep::getMilkCount() << " lit" << endl;
	cout << "--------------------------" << endl;

	cout << "--------------------------" << endl;
	cout << "Tong luong sua : " << Cow::getMilkCount() + Goat::getMilkCount() + Sheep::getMilkCount() << " lit" << endl;
	cout << "--------------------------" << endl;
	cout << endl;

}