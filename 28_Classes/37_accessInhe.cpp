#include <iostream>
using namespace std;

//Base class
class Employee {
    protected:
        int salary;
};

// Derived classes
class Programmer : public Employee {
    public:
        int bonus;
        //setter
        void setSalary(int s) {
            salary = s;
        }
        //getter
        int getSalary() {
            return salary;
        }

};

int main() {
    Programmer myObj;
    myObj.setSalary(50000);
    myObj.bonus = 15000;
    cout << "Salary: " << myObj.getSalary() << endl;
    cout << "bonus: " << myObj.bonus << endl;
    return 0;
}