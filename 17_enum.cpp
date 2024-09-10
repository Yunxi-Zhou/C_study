#include <iostream>
using namespace std;

enum Level {
    //By default, LOW = 0, MEDIUM = 1, HIGH = 2
    // LOW = 25,
    // MEDIUM = 50,
    // HIGH = 75
};

enum Levels {
    LOW = 5,
    MEDIUM,
    HIGH
};

void print_level(enum Level myVar) {

    cout << myVar << endl;
}

void print_switch(enum Levels myVar) {
    switch (myVar) {
        case 5:
            cout << "Low level" << endl;
            break;
        case 6:
            cout << "Medium level" << endl;
            break;
        case 7:
            cout << "High level" << endl;
            break;
    }
}

int main() {
    // print_level(LOW);
    // print_level(MEDIUM);
    // print_level(HIGH);
    print_switch(LOW);
    print_switch(MEDIUM);
    print_switch(HIGH);
    return 0;
}
