#include <iostream>
using namespace std;

class Car {
public:
    // Attributes
    string color;
    string model;
    string fuel_type;
    int speed;

    // Method to increase speed
    void accelerate() {
        speed += 10;
    }

    // Method to decrease speed
    void brake() {
        speed -= 5;
    }

    // Method to display details
    void displayDetails() {
        cout << "Model: " << model << endl;
        cout << "Color: " << color << endl;
        cout << "Fuel Type: " << fuel_type << endl;
        cout << "Speed: " << speed << " km/h" << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    // Creating first object
    Car myTesla;
    myTesla.model = "Model S";
    myTesla.color = "Red";
    myTesla.fuel_type = "Electric";
    myTesla.speed = 50;

    // Creating second object
    Car myFord;
    myFord.model = "Mustang";
    myFord.color = "Black";
    myFord.fuel_type = "Petrol";
    myFord.speed = 40;

    // Using methods
    myTesla.accelerate();
    myFord.brake();

    // Displaying details
    myTesla.displayDetails();
    myFord.displayDetails();

    return 0;
}