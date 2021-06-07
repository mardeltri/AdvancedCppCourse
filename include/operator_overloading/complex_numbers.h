#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

namespace caveofprogramming {
class ComplexParent{

};

class  Complex:public ComplexParent{

private:
    double real;
    double imaginary;

public:
    Complex();
    Complex(double real, double imaginary);
    Complex(const Complex &complex);
    const Complex &operator=(const Complex &other);
    bool operator==(const Complex &other) const;
    bool operator!=(const Complex &other) const;
    Complex operator*() const;
    double getReal()const {return real;}
    double getImaginary()const{return imaginary;}

};

ostream &operator<<(ostream &out, const Complex &complex);
Complex operator+(const Complex &c1, const Complex &c2);
Complex operator+(const Complex &c1, const double d);
Complex operator+(const double d, const Complex &c1);

}/* namespace caveofprogramming */
