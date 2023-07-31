#include "Vehicle.h"
#include <iostream>

// Constructors
Vehicle::Vehicle() : manufacturer(""), yearBuilt(0) {}
Vehicle::Vehicle(std::string manufacturer, int yearBuilt) : manufacturer(manufacturer), yearBuilt(yearBuilt) {}

std::string Vehicle::getManufacturer() const
{
    return manufacturer;
}

int Vehicle::getYearBuilt() const
{
    return yearBuilt;
}

void Vehicle::setManufacturer(const std::string &manufacturer)
{
    this->manufacturer = manufacturer;
}

void Vehicle::setYearBuilt(int yearBuilt)
{
    this->yearBuilt = yearBuilt;
}

void Vehicle::displayInfo() const
{
    cout << "Manufacturer: " << manufacturer << "\nYear Built: " << yearBuilt << std::endl;
}
