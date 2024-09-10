#include <iostream>
using namespace std;

// base class
class MyClass {
    public:
    // In the base class MyClass, myFunction is declared as virtual. 
    // This allows the function to be overridden in derived classes.
        virtual void myFunction() {
            cout << "inherited from MyClass" << endl;
        }
};

//Derived class child
class MyChild: public MyClass {
    public:
        void myFunction() override {
            cout << "override from MyChild" << endl;
        }
};

//Derived class grandchild
class MyGrandChild: public MyChild {
};

int main() {
    MyGrandChild myObj;
    myObj.myFunction();
    return 0;
}