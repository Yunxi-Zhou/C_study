#include <iostream>
using namespace std;

//Global variables
int y = 5;
int z = 5;
int m = 5;

//local variables are only accessible inside the region they are created
void scopeLocal();
void scopeGlobal();
void scopePrint();
void scopeAdd();

int main() {
    //scopeLocal();
    //cout << x << endl; //beyond the scope 超出范围
    //scopeGlobal(); // 5
    //cout << y << endl; // output 5
    //scopePrint(); // 22
    //cout << z << endl; // output 5
    scopeAdd(); // 6
    cout << m << endl; // output 6
    return 0;
}

void scopeLocal() {
    int x = 5;
    cout << x << endl;
}

void scopeGlobal() {
    cout << y << endl;
}

void scopePrint() {
    int z = 22;
    cout << z << endl;
}

//Global variables can be accessed and modified from any function:
void scopeAdd() {
    cout << ++m << endl;
}