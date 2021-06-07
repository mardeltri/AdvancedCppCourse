#include <iostream>
#include <vector>
using namespace std;


int main(){
    int one = 1;
    int two = 2;
    int three = 3;

    // Capture one and two by value
    [one, two](){cout << one << ", " << two << endl;}();

    // Capture all local variables
    [=](){cout << one << ", " << two << endl;}();

    // Capture all local variables by value and three by reference
    [=, &three](){
        three = 7;
        cout << one << ", " << two << ", " << three << endl;
    }();
    cout << three << endl;

    // Capture all by reference
    [&](){
        one = 4;
        two = 5;
        three = 6;
        cout << one << ", " << two << ", " << three << endl;
    }();
    cout << one << ", " << two << ", " << three << endl;
    // Capture all by reference, except two and three
    [&, two, three](){
        one = 4;
        cout << one << ", " << two << ", " << three << endl;
    }();
    cout << one << ", " << two << ", " << three << endl;
    return 0;
}
