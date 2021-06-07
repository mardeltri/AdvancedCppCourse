#include <iostream>
#include <vector>
using namespace std;

class Test {
    // This is called before constructor
    int id{3};
    string name{"Mike"};
public:
    // If another constructor is defined we lose the default one
    Test() = default;
     Test(const Test &other) = default;
    // Using default constructor
    Test &operator=(const Test &other) = default;
    // Using no default constructor. An object of this class couldn't be assigned to other.
//    Test &operator=(const Test &other) = delete;

    Test (int id): id(id){}
    void print(){
        cout << id << ": " << name << endl;
    }

};

int main(){

    Test test;
    test.print();

    Test test1(77);
    test1.print();

    Test test2 = test1;
    test2 = test;
    return 0;
}
