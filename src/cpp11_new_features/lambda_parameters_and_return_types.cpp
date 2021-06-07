#include <iostream>
#include <vector>
using namespace std;


void testGreet(void (*greet)(string)){
    greet("Bob");
}

void runDivide(double (*divide)(double a, double b)){
    double rval = divide(9, 3);
    cout << rval << endl;
}
int main(){

    auto pGreet = [](string name){cout << "Hola " << name << endl;};
    pGreet("Mario");

    testGreet(pGreet);
    //  -> double is used to define a return type
    auto pDivide = [](double a, double b) -> double{
        if(b == 0.0){
            return 0;
        }
        return a/b;
    };

    cout << pDivide(4,2) << endl;

    runDivide(pDivide);
    return 0;
}
