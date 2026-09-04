#include<bits/stdc++.h>
using namespace std;

// PARENT CLASS
class Car {
public:

    // Virtual method
    // This allows Dynamic Polymorphism

    virtual void startEngine() { 
        cout << "Car engine starts normally" << endl;
    }
};

// CHILD CLASS:
class SportsCar : public Car {
public:
    // METHOD OVERRIDING 

    // SportsCar is overriding the startEngine() method of Car.

    // Same method name, Same parameters BUT Different implementation

    void startEngine() override {
        cout << "SportsCar engine starts with a roar!" << endl;
    }
};


// ANOTHER CHILD CLASS
class ElectricCar : public Car {
public:

    // METHOD OVERRIDING
    void startEngine() override {
        cout << "ElectricCar starts silently!" << endl;
    }
};


int main() {

    // Create a SportsCar object
    SportsCar sportsCar;

    // Create an ElectricCar object
    ElectricCar electricCar;


    // CASE 1: Car pointer -> SportsCar object
    Car* car = &sportsCar;

    // Although the pointer type is Car*,
    // it is pointing to a SportsCar object.
    
    // Because startEngine() is virtual,
    // SportsCar's startEngine() will be called.

    car->startEngine();


    // CASE 2: Car pointer -> ElectricCar object

    car = &electricCar;

    // Now the same Car pointer is pointing
    // to an ElectricCar object.
    // Therefore ElectricCar's startEngine() will be called.

    car->startEngine();
    return 0;
}