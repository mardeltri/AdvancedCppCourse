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
    cout << test1 << endl;

    return 0;
}
