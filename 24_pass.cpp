#include <iostream>
using namespace std;

//Function declaration
void swpNum(int &x, int &y);

//Pass Array to a Function
void swpArray(int myNum[5]);

int main() {
    // int firstNum = 10;
    // int secondNum = 20;
    // int &first = firstNum;
    // int &second = secondNum;
    // swpNum(first, second);
    int myNum[5] = {10,20,30,40,50};
    swpArray(myNum);
    return 0;
}

//Function definition
void swpNum(int &x, int &y) {
    cout << "Before: " << endl;
    cout << x << " " << y << endl;

    int z = x;
    x = y;
    y = z;

    cout << "After: " << endl;
    cout << x << " " << y << endl;
}

//Pass Array to a Function
void swpArray(int myNum[5]) {
    for (int i = 0; i < 5; i++) {
        cout << myNum[i] << endl;
    }
}