#include<bits/stdc++.h>
using namespace std;

// INHERITANCE
// Inheritance allows one class to acquire the properties
// and behaviours of another class.

// Parent / Base Class
class Car {
private:
    // Characters / Properties
    string brand;
    string model;
    bool isEngineOn;
    int currentSpeed;
    int currentGear;

public:

    // Constructor
    Car(string b, string m) {
        this->brand = b;
        this->model = m;
        isEngineOn = false;
        currentSpeed = 0;
        currentGear = 0;
    }

    // Getter
    int getCurrentSpeed() {
        return currentSpeed;
    }

    string getBrand() {
        return brand;
    }

    string getModel() {
        return model;
    }

    // Behaviours / Methods

    void startEngine() {
        isEngineOn = true;
        cout << brand << " " << model << ": Engine starts!" << endl;
    }

    void shiftGear(int gear) {
        if (!isEngineOn) {
            cout << brand << " " << model << ": Engine is off. Cannot shift gear."<< endl;
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
            if (currentSpeed < 0) currentSpeed = 0;
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


// CHILD / DERIVED CLASS

class SportsCar : public Car {
private:
    string tyre;

public:
    // Constructor of SportsCar
    SportsCar(string b, string m, string t)
        : Car(b, m)   // Calling Parent Constructor
    {
        tyre = t;
    }

    // SportsCar's own behaviour yaa fir methods u can call
    void activateSportsMode() {
        cout << getBrand() << " " << getModel() << ": Sports Mode Activated!" << endl;
        cout << "Maximum performance unlocked!" << endl;
    }

    // SportsCar's own getter
    string getTyre() {
        return tyre;
    }

    void setTyre(string t) {
        tyre = t;
    }
};



int main() {
    SportsCar* mySportsCar = new SportsCar("Ford", "Mustang", "MRF");


    // These methods are inherited from Car
    mySportsCar->startEngine();
    mySportsCar->shiftGear(1);
    mySportsCar->accelerate();
    mySportsCar->shiftGear(2);
    mySportsCar->accelerate();
    mySportsCar->brake();


    // and these r from sportscar
    mySportsCar->activateSportsMode();


    // Getter inherited from Car
    cout << "Current Speed: " << mySportsCar->getCurrentSpeed() << " km/h" << endl;


    // SportsCar's own property
    cout << "Tyre: " << mySportsCar->getTyre() << endl;

    mySportsCar->stopEngine();
    delete mySportsCar;
    return 0;
}