// Nathan Rapp
// CIS 1202-5T1
// July 30, 2023

#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main()
{
    string manufacturer;
    int yearBuilt;
    int numberOfDoors;
    int towingCapacity;

    cout << "Vehicle Program\n\n";

    // Vehicle
    cout << "Vehicle:\nEnter manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter year built: ";
    cin >> yearBuilt;
    Vehicle vehicle(manufacturer, yearBuilt);
    vehicle.displayInfo();
    cin.ignore(); // clear cin buffer

    // Car
    cout << "\nCar:\nEnter manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter year built: ";
    cin >> yearBuilt;
    cout << "Enter number of doors: ";
    cin >> numberOfDoors;
    Car car(manufacturer, yearBuilt, numberOfDoors);
    car.displayInfo();
    cin.ignore();

    // Truck
    cout << "\nTruck:\nEnter manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter year built: ";
    cin >> yearBuilt;
    cout << "Enter towing capacity: ";
    cin >> towingCapacity;
    Truck truck(manufacturer, yearBuilt, towingCapacity);
    truck.displayInfo();

    return 0;
}
