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

    Parent *ppb = &sister;
    // Dynamic cast does a runtime checking. So, it is better than static cast
    Brother *pbb = dynamic_cast<Brother *>(ppb);

    if(pbb == nullptr){
        cout << "Invalid cast" << endl;
    }
    else {
        cout << pbb << endl;
    }

    return 0;
}
