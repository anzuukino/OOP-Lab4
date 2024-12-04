#include <iostream>
#include "sheep.h"
#include <ctime>
#include <cstdlib>
using namespace std;

/*
* Static variable to keep track of the number of Sheep objects created
*/
int Sheep::count = 0;

/*
* Static variable to keep track of the total milk produced by Sheep objects
*/

int Sheep::milkcount = 0;

/*
* Default constructor to initialize a Sheep object
* Initializes milk to 0, isfeed to false, and baby to 0
* Increments the static count variable
*/
Sheep::Sheep() {
    milk = givemilk();
    isfeed = false;
    baby = givebirth();
    count++;
}

/*
* Function to return the sound made by a sheep
* @return - A string representing the sound ("Beeee")
*/
string Sheep::sound() {
    return "Beeee";
}

/*
* Function to simulate giving birth
* @return - The number of babies (0, 1, or 2) determined randomly
*/
int Sheep::givebirth() {
    baby = rand() % 3;
	count += baby;
    return baby;
}

/*
* Function to simulate giving milk
* @return - The amount of milk produced (random value between 0 and 5)
*/
int Sheep::givemilk() {
    milk = rand() % 6;
	milkcount += milk;
    return milk;
}

/*
* Static function to get the current count of Sheep objects
* @return - The total number of Sheep objects created
*/
int Sheep::getCount() {
    return count;
}

/*
* Function to feed the sheep, setting its feed status to true
*/
void Sheep::feed() {
    isfeed = true;
}

/*
* Function to check if the sheep has been fed
* @return - A boolean indicating whether the sheep has been fed
*/
bool Sheep::isFeed() {
    return isfeed;
}

/*
* Function to get the name of the animal
* @return - A string representing the name ("Sheep")
*/
string Sheep::getname() {
    return "Sheep";
}

/*
* Static function to get the total milk produced by Sheep objects
* @return - The total milk produced by Sheep objects
*/

int Sheep::getMilkCount() {
	return milkcount;
}

/*
* Function to get the amount of milk produced by the sheep
* @return - The amount of milk produced
*/
int Sheep::getMilk() {
	return milk;
}

/*
* Function to get the number of babies born to the sheep
* @return - The number of babies born
*/
int Sheep::getBaby() {
	return baby;
}
