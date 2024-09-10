#include <iostream>
using namespace std;

string food = "Pizza";
string* ptr = &food;

void modify_pointer() {
    cout << food << endl; // Value of food Pizza
    cout << &food << endl; // memory address of food 0x104b5c008
    cout << ptr << endl; // pointer store memory address of food 0x104b5c008
    cout << *ptr << endl; // access memory address of food dereference operator 
    //-> store value of food: Value
    *ptr = "Sushi";
    // food = "Ham";
    cout << *ptr << endl; // pointer store value of food: Sushi
    cout << food << endl; // 
    


}

int main() {
    modify_pointer();
    return 0;
}