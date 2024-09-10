#include <iostream>
using namespace std;

string food = "Pizza";
string* ptr = &food;

void deRefer() {
    cout << ptr << endl; // 0x104ed0008 reference operator 
    cout << *ptr << endl; // Pizza dereference operator
}

//  ptr = reference operator <-> * (reference operator) = dereference operator 
// * ptr = pointer variable
int main() {
    deRefer();
    return 0;
}