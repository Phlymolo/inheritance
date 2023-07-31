#include "Vehicle.h"

class Car : public Vehicle
{
private:
    int numberOfDoors;

public:
    Car();
    Car(string manufacturer, int yearBuilt, int numberOfDoors);

    int getNumberOfDoors() const;

    void setNumberOfDoors(int numberOfDoors);

    void displayInfo() const;
};
