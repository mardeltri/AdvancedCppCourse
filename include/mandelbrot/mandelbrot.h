#ifndef MANDELBROT_H
#define MANDELBROT_H
#include <complex>

using namespace std;

namespace caveofprogramming {

class Mandelbrot
{
public:
    static const int MAX_ITERATIONS = 1000;
public:
    Mandelbrot();
    virtual ~Mandelbrot();

    static int getIterations(double x, double y);
};

}

#endif // MANDELBROT_H
