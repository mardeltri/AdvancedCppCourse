#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;

class Parent {
public:
    virtual void speak(){
        cout << "parent!" << endl;
    }
};

class Brother: public Parent {

};

class Sister: public Parent {

};


int main(){
    Parent parent;
    Brother brother;
    Sister sister;

    Parent *ppb = &brother;
    // Reinterpret cast is even more flexible than static cast
    Sister *pss = reinterpret_cast<Sister *>(ppb);

    if(pss == nullptr){
        cout << "Invalid cast" << endl;
    }
    else {
        cout << pss << endl;
    }

    return 0;
}
