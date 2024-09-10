#include <iostream>
using namespace std;

class MyClass {
    public:
        MyClass() {
            cout << "Hello, world!" << endl;
        }
};

class Car {
    public:
        string brand;
        string model;
        int year;
        // Car(string x, string y, int z) {
        //     brand = x;
        //     model = y;
        //     year = z;
        // }
        // void print() {
        //     cout << brand << " " << model << " " << year << endl;
        // }

        Car(string x, string y, int z); // Function declaration
        void print();
};

// Function definition
Car::Car(string x, string y, int z) {
    brand = x;
    model = y;
    year = z;
}

void Car::print() {
    cout << brand << " " << model << " " << year << endl;
}

int main() {
    //MyClass myObj;
    Car myCar1("BMW","X5",2000);
    Car myCar2("Ford","Mustang",2024);
    myCar1.print();
    myCar2.print();
    return 0;
}