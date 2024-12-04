#include <iostream>
#include "cow.h"
#include <ctime>
#include <cstdlib>
using namespace std;

/*
* Static variable to keep track of the number of Cow objects created
*/
int Cow::count = 0;

/*
* Static variable to keep track of the total milk produced by Cow objects
*/

int Cow::milkcount = 0;

/*
* Default constructor to initialize a Cow object
* Initializes milk to 0, isfeed to false, and baby to 0
* Increments the static count variable
*/
Cow::Cow() {
    milk = givemilk();
    isfeed = false;
    baby = givebirth();
    count++;
}

/*
* Function to return the sound made by a cow
* @return - A string representing the sound ("Mooooo")
*/
string Cow::sound() {
    return "Mooooo";
}

/*
* Function to simulate giving birth
* @return - The number of babies (0 or 1) determined randomly
*/
int Cow::givebirth() {
    baby = rand() % 2;
	count += baby;
    return baby;
}

/*
* Function to simulate giving milk
* @return - The amount of milk produced (random value between 0 and 20)
*/
int Cow::givemilk() {
    milk = rand() % 21;
	milkcount += milk;
    return milk;
}

/*
* Static function to get the current count of Cow objects
* @return - The total number of Cow objects created
*/
int Cow::getCount() {
    return count;
}

/*
* Function to feed the cow, setting its feed status to true
*/
void Cow::feed() {
    isfeed = true;
}

/*
* Function to check if the cow has been fed
* @return - A boolean indicating whether the cow has been fed
*/
bool Cow::isFeed() {
    return isfeed;
}

/*
* Function to get the name of the animal
* @return - A string representing the name ("Cow")
*/
string Cow::getname() {
    return "Cow";
}

/*
* Static function to get the total milk produced by Cow objects
* @return - The total milk produced by Cow objects
*/
int Cow::getMilkCount() {
	return milkcount;
}

/*
* Function to get the amount of milk produced by the cow
* @return - The amount of milk produced
*/
int Cow::getMilk() {
	return milk;
}

/*
* Function to get the number of babies born to the cow
* @return - The number of babies born
*/
int Cow::getBaby() {
	return baby;
}