#include "include/operator_overloading/complex_numbers.h"

using namespace std;
using namespace caveofprogramming;

int main(){
    Complex c1(2, 3);
    Complex c2(2, 3);
    if (c1 == c2){
        cout << "Equals"<< endl;
    }else {
        cout << "Not equals"<< endl;
    }

    if (c1 != c2){
        cout << "Not equals"<< endl;
    }else {
        cout << "Equals"<< endl;
    }
    return 0;
}
