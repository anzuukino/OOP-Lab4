#include "premium.h"
#include <iostream>

using namespace std;

/*
* Static variable to keep track of the total amount (together with a static function)
*/
int Premium::tongtien = 0;

/*
* Constructor set up the values for the Premium object
* @param sodem - The number of items/services for the Premium
* @param phidichvu - The service fee for the Premium
*/
Premium::Premium(int sodem, int phidichvu) {
    this->sodem = sodem;
    this->phidichvu = phidichvu;
    this->phiphucvu = 0;
    tongtien += tinhtien();
}

/*
* Function calculates the total cost based on 'sodem', 'phidichvu', and 'phiphucvu'
* @return - The calculated total cost
*/
int Premium::tinhtien() {
    int tien = sodem * 500000 + phidichvu + phiphucvu;
    return tien;
}

/*
* Getter function to retrieve the current total amount
* @return - The static 'tongtien' which is the total accumulated amount
*/
int Premium::gettongtien() {
    return tongtien;
}

