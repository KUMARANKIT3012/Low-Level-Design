#include<bits/stdc++.h>
using namespace std;

// Encapsulation consists of characters and Behaviours


// NOTE - ALL the characters as well as Behaviours should be encapsulated - it is inside one single class called SportsCar
class SportsCar{
private:

    // characters 
    string brand;
    string model;
    bool isEngineOn;
    int currentSpeed;
    int currentGear;
    string tyre;


public: 
    // constructor : 
    SportsCar(string b, string m) {
        this->brand = b;
        this->model = m;
        isEngineOn = false;
        currentSpeed = 0;
        currentGear = 0;
        tyre = "MRF";
    }


    // GETTERS : 
    int getcurrentspeed(){
        return this->currentSpeed;
    }

    // NOTE - we will always use GETTER AND SETTER rather then making characters as PRIVATE and BEHAVIOURS as PUBLIC

    // using both getter and setter at the same time : 
    string getTyre(){
        return this->tyre;
    }
    void setTyre(string tyre){
        // Validation
        this->tyre = tyre;
    }




    // BEHAVIOURS --> Methods
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

    SportsCar* mySportsCar = new SportsCar("Ford", "Mustang");

    mySportsCar->startEngine();
    mySportsCar->shiftGear(1);
    mySportsCar->accelerate();
    mySportsCar->shiftGear(2);
    mySportsCar->accelerate();
    mySportsCar->brake();
    mySportsCar->stopEngine();

    // Setting arbitrarily value to speed. Note - this should'nt be possible 
    // for this i will make my characters as PRIVATE 
    // and i will make my behaviour as PUBLIC 

    // mySportsCar->currentSpeed = 500;
    // cout << "Current Speed of My Sports Car is set to " << mySportsCar->currentSpeed << endl;

    // calling getter 
    cout<<"we will use getter now"<<endl;
    cout<< mySportsCar->getcurrentspeed();

    delete mySportsCar;

    return 0;
}