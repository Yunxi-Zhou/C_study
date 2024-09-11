#include <iostream>
using namespace std;

//Base class 
class Animal {
    public:
        void animalSound() {
            cout << "The animal makes a sound." << endl;
        }
};

//Derived class
class Pig : public Animal {
    public:
        void animalSound() {
            cout << "The pig says: wee wee" << endl;
        }
};

//Derived class
class Dog : public Animal {
    public:
        void animalSound() {
            cout << "The dog says: bow bow" << endl;
        }
};

int main() {
    Animal animal;
    Dog dog;
    Pig pig;
    animal.animalSound();
    dog.animalSound();
    pig.animalSound();
    return 0;
}