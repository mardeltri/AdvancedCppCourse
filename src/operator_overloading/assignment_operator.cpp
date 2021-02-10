#include <iostream>
using namespace std;

class Test{
private:
    int id;
    string name;

public:
    Test(): id(0), name(""){

    }
    Test(int id, string name): id(id), name(name){

    }

    ~Test(){
//        cout << "Object destroyed"<<endl;
    }

    void print() {
        cout << id << ":" << name << endl;
    }
    const Test &operator=(const Test &other){
        cout << "Assignment running" << endl;
        id = other.id;
        name = other.name;
        return *this;
    }
    // Copy constructor
    Test(const Test &other){
        cout << "Copy constructor running" << endl;
//        id = other.id;
//        name = other.name;
        // Using the equal operator
        *this = other;
    }

};

int main(){
    Test test1(10, "Mike");
    cout << "Print test 1: " << flush;
    test1.print();

    Test test2(20, "Bob");
    test2 = test1;
    cout << "Print test 2: " << flush;
    test2.print();

    Test test3;
//    test3 = test2 = test1;

    test3.operator=(test2); // Equals to test3 = test2. Equal is like a method
    cout << "Print test 3: " << flush;
    test3.print();

    cout << endl;
    // Copy initialization (invoking the implicit constructor)
    Test test4 = test1;
    test4.print();
    return 0;
}
