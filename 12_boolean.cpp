#include <iostream>
using namespace std;

void boolean_age(int myAge, int votingAge) {
    

    if (myAge >= votingAge) {
        cout << "Old enough" << endl;
    } else {
        cout << "Not enough" << endl;
    }
}

int main() {
    boolean_age(25,18);
    return 0;
}