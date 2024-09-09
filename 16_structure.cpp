#include <iostream>
using namespace std;

struct {
    int myNum;
    string myString;
} myStructure;

void print_myStructure() {
    myStructure.myNum = 1;
    myStructure.myString = "Hello, world!";
    
    cout << myStructure.myNum << endl;
    cout << myStructure.myString << endl;
}

struct {
    string brand;
    string model;
    int year;
} myCar1, myCar2;

void print_car() {
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 2023;

    myCar2.brand = "Ford";
    myCar2.model = "Fusion";
    myCar2.year = 2014;

    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << endl;
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << endl;
}

//Named Structure
struct car {
    string brand;
    string model;
    int year;
};

void printCar() {
    car myCar1;
    car myCar2;

    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 2023;

    myCar2.brand = "Ford";
    myCar2.model = "Fusion";
    myCar2.year = 2014;

    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << endl;
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << endl;
}

int main() {
    //print_myStructure();
    //print_car();
    printCar();
    return 0;
}