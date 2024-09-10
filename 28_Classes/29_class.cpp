#include <iostream>
using namespace std;

class MyClass { //class
    public:  //access specifier
        int myNum;  //Attribute
        string myString;  //Attribute
};

// Multiple Objects
class Car {
    public:
        string brand;
        string model;
        int year;
};

int main() {
    MyClass myObj;

    myObj.myNum = 15;
    myObj.myString = "Hello, world!";

    //print attribute values
    cout << myObj.myNum << endl;
    cout << myObj.myString << endl;

    //create multiple objects
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 2000;

    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Fusion";
    carObj2.year = 2301;

    //Print multiple attributes values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;

    return 0;
}