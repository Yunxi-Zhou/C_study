#include <iostream>
using namespace std;

class MyClass {
    public:
        void myMethod() {  // Method / function defined inside the class
            cout << "my Method" << endl;
        }
};

class MyClass2 {
    public:
        void myMethod2(); // Method/function declaration
};

// Method/function definition outside of the class
void MyClass2::myMethod2() {
    cout << "my Method2" << endl;
}

class Car {
    public:
        int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
    return maxSpeed;
}

int main() {
    //MyClass myObj;
    //myObj.myMethod();
    // MyClass2 myObj;
    // myObj.myMethod2();
    Car myCar;
    cout << myCar.speed(260) << endl;
    return 0;
}