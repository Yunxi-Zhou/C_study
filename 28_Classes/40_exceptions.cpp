#include <iostream>
using namespace std;

void except() {
    try {
        int age = 15;
        if (age >= 18) {
            cout << "Access granted" << endl;
        } else {
            throw (age); //throw (); -> when a problem is detected, create a custom error
        }
    }
    catch (int myNum) {
        cout << "Access denied" << endl;
        cout << "Error Number: " << myNum << endl;
    }
}

void except_two() {
    try {
        int age = 15;
        if (age >= 18) {
            cout << "Access granted" << endl;
        } else {
            throw 505; // 505 -> custom error number/code
        }
    }
    catch (int myNum) {
        cout << "Access denied" << endl;
        cout << "Error Number: " << myNum << endl;
    }
}

void except_three() {
    try {
        int age = 15;
        if (age >= 18) {
            cout << "Access granted" << endl;
        } else {
            throw 505; // 505 -> custom error number/code
        }
    }
    catch (...) {  // ... -> inside the catch block, will handle any type of exceptions
        cout << "Access denied" << endl;
    }
}

int main() {
    /*
    Access denied
    Error Number: 15
    */
    except();
    /*
    Access denied
    Error Number: 505
    */
    except_two();

    except_three();
    
    return 0;
}