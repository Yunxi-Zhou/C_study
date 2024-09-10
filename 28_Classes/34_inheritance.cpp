#include <iostream>
using namespace std;
/*
derived class (child) - the class that inherits from another class
base class (parent) - the class being inherited from
*/

//base class
class Brand {
    private:
        string brand = "BMW";
    public:
        void honk() {
            cout << "inherited from brand" << endl;
        }
        //setter
        void setBrand(string b) {
            brand = b;
        }
        //getter
        string getBrand() { 
            return brand; 
        }
};

//derived class
class Model: public Brand {
    private:
        string model = "X5";
    public:
        //setter
        void setModel(string m) {
            model = m;
        }
        //getter
        string getModel() {
            return model;
        }

};

int main() {
    Model myCar;
    myCar.honk();
    cout << myCar.getBrand() << " " << myCar.getModel()<< endl;
    return 0;
}