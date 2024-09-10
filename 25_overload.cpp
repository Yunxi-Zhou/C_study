#include <iostream>
using namespace std;

//multiple functions can have the same name with different parameters
//Function declaration
// int myFunction(int x);
// float myFunction(float x);
// double myFunction(double x, double y);
int plusFun(int x, int y);
double plusFun(double x, double y);

int main() {
    int myNum1 = plusFun(8,5);
    double myNum2 = plusFun(4.3,6.26);
    cout << "Int: " << myNum1 << endl;
    cout << "Double: " << myNum2 << endl;
    return 0;
}

//Function definition
int plusFun(int x, int y) {
    return x + y;
}

double plusFun(double x, double y) {
    return x + y;
}