#include <iostream>
using namespace std;

//Function declaration
void myFunction();

//Function parameter
void functionParameter(string fname);

//default parameter
void defaultParameter(string country = "Norway");

//Multiple parameter
void multipleParameter(string fname, int age);

int main() {
    //myFunction();
    // functionParameter("Alice");
    // functionParameter("Bob");
    // functionParameter("Alan");
    //defaultParameter(); //Norway because default set to "Norway"
    // defaultParameter("India");
    // defaultParameter("China");
    // defaultParameter("Canada");
    multipleParameter("Alice",13);
    multipleParameter("Bob",24);
    multipleParameter("Jenny",33);
    return 0;
}

//Function definition
void myFunction() {
    cout << "myFunction" << endl;
}

//Function parameter
void functionParameter(string fname) {
    cout << fname << endl;
}

//Function default parameter
void defaultParameter(string country) {
    cout << country << endl;
}

//Function multi parameter
void multipleParameter(string fname, int age) {
    cout << fname << " is " << age << " years old." << endl;
}