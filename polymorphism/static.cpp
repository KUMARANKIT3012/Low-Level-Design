#include<bits/stdc++.h>
using namespace std;

// STATIC POLYMORPHISM
// Also called COMPILE-TIME POLYMORPHISM
// Achieved using:
// 1. Method Overloading

// Method Overloading:
// Same method name but DIFF PARAMETERS.

class Car {
public:
    // METHOD OVERLOADING

    // Method 1
    void accelerate() {
        cout << "Car is accelerating by 20 km/h" << endl;
    }

    // Method 2
    void accelerate(int speed) {
        cout << "Car is accelerating by " << speed << " km/h" << endl;
    }

    // Method 3
    void accelerate(int speed, int duration) {
        cout << "Car is accelerating by " << speed << " km/h for " << duration << " seconds" << endl;
    }
};


int main() {
    Car myCar;
    // Compiler decides which method to call
    // based on the arguments jo ki pass kiya hai.
    myCar.accelerate();
    myCar.accelerate(50);
    myCar.accelerate(100, 10);
    return 0;
}