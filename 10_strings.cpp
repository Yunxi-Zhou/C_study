#include <iostream>
#include <string>
using namespace std;

void string_1() {
    string firstName = "John";
    string lastName = "Doe";
    string fullName = firstName + " " + lastName;
    cout << fullName << endl;
}

void string_append() {
    string firstName = "John";
    string lastName = "Doe";
    string fullName = firstName.append(lastName);
    cout << fullName << endl;
}

void string_add() {
    string x = "10";
    string y = "20";
    string z = x + y;
    cout << z << endl;
}

void string_length() {
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length() << endl;    
}

void string_access() {
    string myString = "Hello";
    cout << myString[0] << endl;

    cout << myString[myString.length() - 1] << endl;

    myString[0] = 'J';
    cout << myString << endl;
}

void string_at() {
    //at() Function 
    string myString = "Hello";
    cout << myString << endl;
    cout << myString.at(0) << endl;
    cout << myString.at(1) << endl;
    cout << myString.at(myString.length() - 1) << endl;

    myString.at(0) = 'J';
    cout << myString << endl;
}

void string_special() {
    // \' = ', \" = ", \\ = \, \n = newline, \t = tab

}

void string_user() {
    string firstName;
    cout << "Type your first name" << endl;
    cin >> firstName;
    cout << "Your name is " << firstName << endl;
}

void string_getline() {
    string fullName;
    cout << "Type your full name" << endl;
    getline (cin, fullName);
    cout << "Your full name is " << fullName << endl;
}


int main() {
    // string_1();
    // string_append();
    // string_add();
    // string_length();
    // string_access();
    string_at();
    //string_user();
    string_getline();
    return 0;
}