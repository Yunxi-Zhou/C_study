#include <iostream>
using namespace std;

//Base class 
class MyClass {
    public:
        void myFunction() {
            cout << "inherited from base class" << endl;
        }
};

// another Base class
class MyClassTwo{
    public: 
        void myOtherFunction() {
            cout << "inherited from base class two" <<endl;
        }
};

// Derived class
class MyChild : public MyClass, public MyClassTwo {};

int main() {
    MyChild myObj;
    myObj.myFunction();
    myObj.myOtherFunction();
    return 0;
}