#include <iostream>
using namespace std;

//variables are only accessible inside the region they are created

void scopeFun() {
    int x = 5;
    cout << x << endl;
}

int main() {
    scopeFun();
    //cout << x << endl; //beyond the scope 超出范围
    return 0;
}