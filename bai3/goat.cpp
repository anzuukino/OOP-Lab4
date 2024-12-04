#include <iostream>
#include "goat.h"
#include <ctime>
#include <cstdlib>
using namespace std;

/*
* Static variable to keep track of the number of Goat objects created
*/
int Goat::count = 0;

/*
* Static variable to keep track of the total milk produced by Goat objects
*/

int Goat::milkcount = 0;

/*
* Default constructor to initialize a Goat object
* Initializes milk to 0, isfeed to false, and baby to 0
* Increments the static count variable
*/
Goat::Goat() {
    milk = givebirth();
    isfeed = false;
    baby = givemilk();
    count++;
}

/*
* Function to return the sound made by a goat
* @return - A string representing the sound ("Meeee")
*/
string Goat::sound() {
    return "Meeee";
}

/*
* Function to simulate giving birth
* @return - The number of babies (0 or 1) determined randomly
*/
int Goat::givebirth() {
    baby = rand() % 2;
	count += baby;
    return baby;
}

/*
* Function to simulate giving milk
* @return - The amount of milk produced (random value between 0 and 10)
*/
int Goat::givemilk() {
    milk = rand() % 11;
	milkcount += milk;
    return milk;
}

/*
* Static function to get the current count of Goat objects
* @return - The total number of Goat objects created
*/
int Goat::getCount() {
    return count;
}

/*
* Function to feed the goat, setting its feed status to true
*/
void Goat::feed() {
    isfeed = true;
}

/*
* Function to check if the goat has been fed
* @return - A boolean indicating whether the goat has been fed
*/
bool Goat::isFeed() {
    return isfeed;
}

/*
* Function to get the name of the animal
* @return - A string representing the name ("Goat")
*/
string Goat::getname() {
    return "Goat";
}

/*
* Static function to get the total milk produced by Goat objects
* @return - The total milk produced by Goat objects
*/
int Goat::getMilkCount() {
	return milkcount;
}

/*
* Function to get the amount of milk produced by the goat
* @return - The amount of milk produced
*/
int Goat::getMilk() {
	return milk;
}

/*
* Function to get the number of babies born to the goat
* @return - The number of babies born
*/
int Goat::getBaby() {
	return baby;
}