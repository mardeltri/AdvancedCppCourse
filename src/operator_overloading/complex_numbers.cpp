#include "include/operator_overloading/complex_numbers.h"
namespace caveofprogramming
{
ostream &operator<<(ostream &out, const Complex &complex){
    out << "real: " << complex.getReal() << ", imaginary: " << complex.getImaginary();
    return out;
}

Complex::Complex(): real(0), imaginary(0)
{

}
Complex::Complex(double real, double imaginary) :
    real(real), imaginary(imaginary)
{

}

Complex::Complex(const caveofprogramming::Complex &complex)
{
    cout << "Copy" << endl;
    *this = complex;
}

const Complex &Complex::operator=(const Complex &other)
{
    cout << "Assignment" << endl;
    real = other.real;
    imaginary = other.imaginary;
    return *this;
}

bool Complex::operator==(const Complex &other) const
{
    return (real == other.real) && (imaginary == other.imaginary);
}

bool Complex::operator!=(const Complex &other) const
{
    return !(*this==other);
}

Complex Complex::operator*() const
{
    return Complex(real, -imaginary);
}

Complex operator+(const Complex &c1, const Complex &c2)
{
    return Complex(c1.getReal()+c2.getReal(), c1.getImaginary()+c2.getImaginary());
}
Complex operator+(const Complex &c1, const double d)
{
    return Complex(c1.getReal()+d, c1.getImaginary());
}

Complex operator+(const double d, const Complex &c1)
{
    return Complex(c1.getReal()+d, c1.getImaginary());
}

}

