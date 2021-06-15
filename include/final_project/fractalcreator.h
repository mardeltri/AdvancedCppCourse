#ifndef FRACTALCREATOR_H
#define FRACTALCREATOR_H

#include <math.h>
#include <memory>

#include "include/bitmap/zoom.h"
#include "include/bitmap/bitmap.h"
#include "include/bitmap/zoomlist.h"
#include "include/mandelbrot/mandelbrot.h"

using namespace caveofprogramming;

class FractalCreator
{
public:
    FractalCreator(int width, int height);

    void calculateIteration();
    void calculateTotalIterations();
    void drawFractal();
    void addZoom(const Zoom& zoom);
    void writeBitmap(std::string name);

private:
    int width_;
    int height_;
    int total_{0};

    Bitmap bitmap_;
    ZoomList zoomlist_;

    unique_ptr<int[]> histogram_;
    unique_ptr<int[]> fractal_;
};

#endif // FRACTALCREATOR_H
