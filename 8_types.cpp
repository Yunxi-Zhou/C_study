#include <iostream>
#include <string>
using namespace std;


void types() {
    int myNum = 5;               // Integer (whole number)
    float myFloatNum = 5.99;     // Floating point number
    double myDoubleNum = 9.98;   // Floating point number
    char myLetter = 'D';         // Character
    bool myBoolean = true;       // Boolean
    string myText = "Hello";     // String
}

void numeric_int() {
    int myNum = 5;
    cout << myNum << endl;
}

void numeric_float() {
    float myNum = 5.99;
    cout << myNum << endl;
}

void numeric_double() {
    double myNum = 19.99;
    cout << myNum << endl;
}

void boolean() {
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun << endl;  // Outputs 1 (true)
    cout << isFishTasty << endl;  // Outputs 0 (false)
}

void character() {
    char myGrade = 'B';
    cout << myGrade << endl;
}

void String() {
    string greeting = "Hello";
    cout << greeting << endl;
}

int main() {
    numeric_int();
    numeric_float();
    numeric_double();
    boolean();
    String();
}