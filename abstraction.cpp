#include<bits/stdc++.h>
using namespace std;


// real life car : 
// VIRTUAL - this method is just declared not defined      child class will define this method 
// (virtual function acts as an interface)

class Car {
public:
    virtual void startEngine() = 0;
    virtual void shiftGear(int gear) = 0;
    virtual void accelerate() = 0;
    virtual void brake() = 0;
    virtual void stopEngine() = 0;

    virtual ~Car() {}   // Destructor
};

class SportsCar : public Car {
public:

    // defining everything 
    string brand;
    string model;
    bool isEngineOn;
    int currentSpeed;
    int currentGear;

    // constructor : 
    SportsCar(string b, string m) {
        this->brand = b;
        this->model = m;
        isEngineOn = false;
        currentSpeed = 0;
        currentGear = 0;
    }

    // this is under the hood you don't need to know what is written in here 
    void startEngine() {
        isEngineOn = true;
        cout << brand << " " << model<< ": Engine starts with a roar!" << endl;
    }

    void shiftGear(int gear) {
        if (!isEngineOn) {
            cout << brand << " " << model << ": Engine is off. Cannot Shift Gear" << endl;
            return;
        }
        currentGear = gear;
        cout << brand << " " << model << ": Shifted to gear " << currentGear << endl;
    }

    void accelerate() {
        if (!isEngineOn) {
            cout << brand << " " << model << ": Engine is off. Cannot accelerate." << endl;
            return;
        }
        currentSpeed += 20;
        cout << brand << " " << model << ": Accelerating. Speed is now " << currentSpeed << " km/h" << endl;
    }

    void brake() {
        if (currentSpeed > 0) {
            currentSpeed -= 20;
            if (currentSpeed < 0)
                currentSpeed = 0;
        }

        cout << brand << " " << model << ": Braking. Speed is now " << currentSpeed << " km/h" << endl;
    }

    void stopEngine() {
        isEngineOn = false;
        currentSpeed = 0;
        currentGear = 0;

        cout << brand << " " << model << ": Engine stopped." << endl;
    }
};

// Main Method
int main() {

    Car* myCar = new SportsCar("Ford", "Mustang");

    myCar->startEngine();
    myCar->shiftGear(1);
    myCar->accelerate();
    myCar->shiftGear(2);
    myCar->accelerate();
    myCar->brake();
    myCar->stopEngine();

    delete myCar;

    return 0;
}