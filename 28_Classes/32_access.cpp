#include <iostream>
using namespace std;

class MyClass {
    public:
        int x;
    private:
        int y;
};

int main() {
    // MyClass myObj;
    // myObj.x = 5;
    // myObj.y = 10; //error: 'y' is a private member of 'MyClass'
    return 0;
}

/*
public - members are accessible from outside the class
private - members cannot be accessed (or viewed) from outside the class
protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about Inheritance later.
*/