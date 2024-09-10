#include <iostream>
using namespace std;

//function declaration
int myReturn(int x);
int myReturn2(int x, int y);

int main() {
    //cout << myReturn(3) << endl;
    //cout << myReturn2(5, 3) << endl;
    int z = myReturn2(5,3);
    cout << z << endl;
    return 0;
}

//function definition
int myReturn(int x) {
    return 5 + x;
}

int myReturn2(int x, int y) {
    return x + y;
}