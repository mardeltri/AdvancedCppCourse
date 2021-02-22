#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Sometimes it does not have sense to instantiate a parent class
// Abstract class does not have implementation, just pure virtual methods
// When a class has a pure virtual method (=0), the class is
// considered abstract, an object cannot be instatiated.
// All the virtual methods should be defined if you want to instantiate it (subclass).
// Advantages:
// - Programmers must define the virtual methods
// - Abstract classes cannot be instantiated

class Animal{
public:
    virtual void run()=0;
    virtual void speak() = 0;//There is no implementation
public:
};

class Dog : public Animal {
public:
    virtual void speak(){
        cout << "Woof!" << endl;
    }
};


class Labrador:public Dog {
public:
    Labrador(){
        cout << "New Labrador!" << endl;

    }
    virtual void run(){
        cout << "Labrador running!" << endl;
    }
};

void test(Animal &a){
    a.run();
}

int main(){
//    Animal animal;
//    Dog dog;
//    dog.speak();
    Labrador labs[5];
    Labrador lab;
    lab.run();
    lab.speak();
    // You can save subclasses in an array of the superclass
    Animal *animals[5];
    animals[0] = &lab;
    animals[0]->speak();
    test(lab);
    return 0;
}
