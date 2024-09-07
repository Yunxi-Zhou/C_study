#include <iostream>
#include <cmath>  //sqrt (square root), round (rounds a number) and log (natural logarithm)
using namespace std;

void math_max(int x, int y) {
    cout << max(x, y) << endl;
}

void math_min(int x, int y) {
    cout << min(x, y) << endl;
}

void math_cmath() {
    cout << "sqrt is: "<< sqrt(64) << endl;
    cout << "round is: "<< round(2.6) << endl;
    cout << "log is: "<< log(2) << endl;
}

int main() {
    math_max(5,10);
    math_min(5,10);
    math_cmath();
    return 0;
}