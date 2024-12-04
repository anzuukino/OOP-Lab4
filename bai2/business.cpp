#include "business.h"
#include <iostream>

using namespace std;

/*
* Static variable to keep track of the total amount (together with a static function)
*/
int Business::tongtien = 0;

/*
* Constructor set up the values for the Business object
* @param sodem - The number of items/services for the business
*/
Business::Business(int sodem) {
    this->sodem = sodem;
    this->phidichvu = 0;
    this->phiphucvu = 0;
    tongtien += tinhtien();
}

/*
* Function calculates the total cost based on 'sodem' and service-related fees
* @return - The calculated total cost
*/
int Business::tinhtien() {
    int tien = sodem * 300000 + phidichvu + phiphucvu;
    return tien;
}

/*
* Getter function to retrieve the current total amount
* @return - The static 'tongtien' which is the total accumulated amount
*/
int Business::gettongtien() {
    return tongtien;
}

