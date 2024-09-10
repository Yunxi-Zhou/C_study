#include <iostream>
using namespace std;

string food = "Pizza";
string* ptr = &food;

void pointer_print() {
    cout << food << endl;  // Pizza
    cout << &food << endl;  // 0x1003bc008
    cout << ptr << endl;  // 0x1003bc008
}



int main() {
    pointer_print();
    return 0;
}