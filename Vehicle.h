#include <string>

using namespace std;

class Vehicle
{
protected:
    string manufacturer;
    int yearBuilt;

public:
    Vehicle();
    Vehicle(string manufacturer, int yearBuilt);

    string getManufacturer() const;
    int getYearBuilt() const;

    void setManufacturer(const string &manufacturer);
    void setYearBuilt(int yearBuilt);

    void displayInfo() const;
};
