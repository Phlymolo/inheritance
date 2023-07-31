#include "Car.h"
#include <iostream>

// Default constructor
Car::Car() : Vehicle(), numberOfDoors(0) {}

// Parameterized constructor
Car::Car(string manufacturer, int yearBuilt, int numberOfDoors) : Vehicle(manufacturer, yearBuilt), numberOfDoors(numberOfDoors) {}

int Car::getNumberOfDoors() const
{
    return numberOfDoors;
}

void Car::setNumberOfDoors(int numberOfDoors)
{
    this->numberOfDoors = numberOfDoors;
}

void Car::displayInfo() const
{
    Vehicle::displayInfo();
    cout << "Number of Doors: " << numberOfDoors << endl;
}
