#include "deluxe.h"
#include <iostream>

using namespace std;

/*
* Static variable to keep track of the total amount (together with a static function)
*/
int Deluxe::tongtien = 0;

/*
* Constructor set up the values for the Deluxe object
* @param sodem - The number of items/services for the Deluxe
* @param phidichvu - The service fee for the Deluxe
* @param phiphucvu - The additional fee for the Deluxe
*/
Deluxe::Deluxe(int sodem, int phidichvu, int phiphucvu) {
    this->sodem = sodem;
    this->phidichvu = phidichvu;
    this->phiphucvu = phiphucvu;
    tongtien += tinhtien();
}

/*
* Function calculates the total cost based on 'sodem', 'phidichvu', and 'phiphucvu'
* @return - The calculated total cost
*/
int Deluxe::tinhtien() {
    int tien = sodem * 750000 + phidichvu + phiphucvu;
    return tien;
}

/*
* Getter function to retrieve the current total amount
* @return - The static 'tongtien' which is the total accumulated amount
*/
int Deluxe::gettongtien() {
    return tongtien;
}

