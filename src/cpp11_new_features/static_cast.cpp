#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;

class Parent {
public:
    void speak(){
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

    // C casting
    float value = 3.23;
    cout << static_cast<int>(value) << endl;

    // New line very unsafe! Because parent may not have methods that exists in brother
    Brother *pb = static_cast<Brother *>(&parent);

    Parent *ppb = &brother;

    // Static cast doesnt have a runtime checking.
    Brother *pbb = static_cast<Brother *>(ppb);

    cout << pbb << endl;

    Parent &&p = static_cast<Parent &&>(parent);
    p.speak();

    return 0;
}
