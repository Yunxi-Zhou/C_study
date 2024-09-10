#include <iostream>
using namespace std;

class MyClass { //class
    public:  //access specifier
        int myNum;  //Attribute
        string myString;  //Attribute
};

int main() {
    MyClass myObj;

    myObj.myNum = 15;
    myObj.myString = "Hello, world!";

    //print attribute values
    cout << myObj.myNum << endl;
    cout << myObj.myString << endl;

    return 0;
}