#include <iostream>
using namespace std;

class Vehicle {
protected:
    string registrationNumber;
    string companyName;

public:
    Vehicle(string r, string c) {
        registrationNumber = r;
        companyName = c;
    }
};

class Car : public Vehicle {
private:
    string fuelType;
    int engineCapacity;

public:
    Car(string r, string c, string f, int e)
        : Vehicle(r, c) {
        fuelType = f;
        engineCapacity = e;
    }

    void display() {
        cout << "Vehicle: Car" << endl;
        cout << "Registration Number: " << registrationNumber << endl;
        cout << "Company: " << companyName << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Engine Capacity: " << engineCapacity << " cc" << endl;
        cout << "------------------" << endl;
    }
};

class Bike : public Vehicle {
private:
    string fuelType;
    int engineCapacity;

public:
    Bike(string r, string c, string f, int e)
        : Vehicle(r, c) {
        fuelType = f;
        engineCapacity = e;
    }

    void display() {
        cout << "Vehicle: Bike" << endl;
        cout << "Registration Number: " << registrationNumber << endl;
        cout << "Company: " << companyName << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Engine Capacity: " << engineCapacity << " cc" << endl;
        cout << "------------------" << endl;
    }
};

int main() {

    Car c("JK12B7341", "SWIFT", "Petrol", 1500);
    Bike b("JK12B8756", "Pulsar", "Petrol", 150);

    c.display();
    b.display();

    return 0;
}