#include "Vehicle.h"

class Truck : public Vehicle {
private:
    int towingCapacity;

public:    
    Truck();    
    Truck(string manufacturer, int yearBuilt, int towingCapacity);
    
    int getTowingCapacity() const;
    
    void setTowingCapacity(int towingCapacity);
    
    void displayInfo() const;
};
