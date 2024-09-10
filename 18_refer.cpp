#include <iostream>
using namespace std;

string food = "Pizza";
string &meal = food; //"reference" to an existing variable

void refer_print() {
    cout << food << endl;
    cout << meal << endl;

    /*
    the & operator was used to create a reference variable. 
    But it can also be used to get the memory address of a variable
    */
    cout << &food << endl;
    cout << &meal << endl;
}

int main() {
    refer_print();
    return 0;
}