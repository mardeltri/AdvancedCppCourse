#include <iostream>
using namespace std;

void test(int value){
    cout << "Hello" << value << endl;
}
int main(){
    test(2);

    // Creating pointer to a function with void return type and no arguments
    void (*pTest)(int);

    pTest = test; // The name is a pointer to that function, & is not needed

    // Calling it
    (*pTest)(3);

    // We can call it directy with the pointer
    pTest(4);

    // It can be set directly
    void (*pTest2)(int) = test;
    return 0;
}
