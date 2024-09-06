#include <iostream>
using namespace std;

void print() {
    int x;
    cout << "Type a number: ";
    cin >> x;
    cout << "Your number is: " << x << endl;
}

void calculator() {
    int x, y;
    int sum;
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sum = x + y;
    cout << "Sum is: " << sum << endl;
}
void n() {
    cout << "\n";
}

int main() {
    print();
    calculator();
    return 0;
}