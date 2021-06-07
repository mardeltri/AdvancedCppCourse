#include <iostream>
using namespace std;


int main(){

    int cats = 5;
    // mutable can be used to change the value of the input variable
    // Note that the value is not change outside the lambda expression
    [cats]()mutable {
        cats = 8;
        cout << cats << endl;
    }();
    cout << cats << endl;

    return 0;
}
