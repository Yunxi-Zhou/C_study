#include <iostream>
using namespace std;

void n() {
    cout << "\n";
}

void newline() {
    cout << "Hello,world!" << "\n";
    cout << "Have a nice day";
}

void newline_2() {
    cout << "Hello,world!" << "\n\n";
    cout << "Have a nice day";
}

void newline_3() {
    cout << "Hello,world!" << endl;
    cout << "Have a nice day";
}

int main() {
    newline();
    n();
    newline_2();
    n();
    newline_3();
    return 0;
}