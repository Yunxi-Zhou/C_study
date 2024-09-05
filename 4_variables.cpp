#include <iostream>
using namespace std;


void Number(int myNum) {
    cout << myNum;
}

void n() {
    cout << "\n";
}

void Number_2(int myNum) {
    myNum = 10;
    cout << myNum;
}

void display(int myAge) {
    cout << "Age: " << myAge;
}

void count(int x, int y) {
    int sum = x + y;
    cout << sum;
}

int main() {
    Number(15);
    n();
    Number_2(15);
    n();
    display(35);
    n();
    count(5,6);
    return 0;
}