#include <iostream>
#include "include/bitmap/bitmap.h"
#include "include/bitmap/zoomlist.h"
#include "include/bitmap/zoom.h"
#include "include/mandelbrot/mandelbrot.h"
#include "include/final_project/fractalcreator.h"

using namespace std;
using namespace caveofprogramming;

int main() {

    int height = 600;
    FractalCreator fractalCreator(800, height);

    fractalCreator.addZoom(Zoom(295, height - 202, 0.1));
    fractalCreator.addZoom(Zoom(312, height - 304, 0.1));
    fractalCreator.calculateIteration();
    fractalCreator.calculateTotalIterations();
    fractalCreator.drawFractal();
    fractalCreator.writeBitmap("test.bmp");

    cout << "Finished!!" << endl;
    return 0;
}
