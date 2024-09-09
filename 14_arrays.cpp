#include <iostream>
//#include <array>
using namespace std;

string cars[5] = {"Volvo","BMW","Ford","Mazda", "Tesla"};
int myNumbers[5] = {10,20,30,40,50};

void array_element(string cars[4]) {
    cout << cars[0] << endl;
}

void array_instead(string openL) {
    cars[0] = openL;
    cout << cars[0] << endl;
}

void array_for_str(string cars[5]) {
    for (int i = 0; i < 5; i++) {
        cout << cars[i] << endl;
    }
}

void array_for_int(int myNumbers[5]) {
    for (int i = 0; i < 5; i++) {
        cout << myNumbers[i] << endl;
    }
}

void array_forEach() {
    int myNumbers[5] = {10,20,30,40,50};
    for (int i : myNumbers) {
        cout << i << endl;
    }
}

void array_size() {
    string carR[] = {"Volvo", "BMW", "Ford"};
    string carRR[3] = {"Volvo", "BMW", "Ford"}; // equal

}

void array_input() {
    string value[5];  
    // string value[]; //False
    value[0] = "Volvo";
    value[1] = "BMW";
    value[2] = "Ford";
    value[3] = "Mazda";
    value[4] = "Tesla";

    for (int i = 0; i < 5; i++) {
        cout << value[i] << endl;
    }
}

void array_sizeOf() {
    cout << sizeof(myNumbers) << endl; 
    // int type usually 4 bytes, 4 bytes * 5 elements = 20 bytes
    int getLength = sizeof(myNumbers) / sizeof(int);
    cout << getLength << endl;
}

void array_forSize() {
    for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++) {
        cout << myNumbers[i] << endl;
    }
}

// C++ Multi-Dimensional Arrays

string letter[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
};

string letters[2][2][2] = {
    {
        { "A", "B" },
        { "C", "D" }
    },
    {
        { "E", "F" },
        { "G", "H" }
    }
};

void array_dimAccess(int x, int y) {
    cout << letter[x][y] << endl;
}

void array_dimChange(int x, int y) {
    letter[x][y] = "Z";
    cout << letter[x][y] << endl;
}

void array_dimFor() {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cout << letter[i][j] << endl;
        }
    }
}

void array_dimFor_3() {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << letters[i][j][k] << endl;
            }
        }
    }

}

int main() {
    //array_element(cars);
    //array_instead("OpenL");
    //array_for_str(cars);
    //array_for_int(myNumbers);
    //array_forEach();
    //array_input();
    //array_sizeOf();
    //array_forSize();
    //array_dimAccess(0,2);
    //array_dimChange(0,0);
    //array_dimFor();
    array_dimFor_3();
    return 0;
}