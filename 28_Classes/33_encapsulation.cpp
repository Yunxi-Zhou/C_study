#include <iostream>
using namespace std;
// encapsulation -> 封装
class Employee {
    private:
        int salary;
    
    public:
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
    Employee myObj;
    myObj.setSalary(100);
    cout << myObj.getSalary() << endl;
    return 0;
}