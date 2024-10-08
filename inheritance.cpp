#include <iostream>
using namespace std;

class Vehicle {
public:
    void display() {
        cout << "I am a vehicle" << endl;
    }
};

class FourWheeler : public Vehicle {
public:
    void display() {
        cout << "I am a four wheeler" << endl;
    }
};

class Car : public FourWheeler {
public:
    void display() {
        cout << "I am a car" << endl;
    }
};

int main() {
    Car myCar;
    myCar.display();
    myCar.FourWheeler::display();
    myCar.Vehicle::display();
    return 0;
}