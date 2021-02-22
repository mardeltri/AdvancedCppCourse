#include "include/operator_overloading/complex_numbers.h"

using namespace std;
using namespace caveofprogramming;

int main(){
    Complex c1(2, 3);
    Complex c2(2, 3);
    Complex * c3 = new Complex(2,3);
    cout << *c1 + *Complex(4, 3)<< endl;
    cout << *c3<< endl;
}
