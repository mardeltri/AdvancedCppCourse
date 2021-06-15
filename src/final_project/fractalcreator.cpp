#include "include/final_project/fractalcreator.h"

FractalCreator::FractalCreator(int width, int height):
    width_(width), height_(height),
    histogram_(new int[Mandelbrot::MAX_ITERATIONS + 1]{0}),
    fractal_(new int[width_*height_]{0}),
    bitmap_(width_, height_),
    zoomlist_(width_, height_)
{
    addZoom(Zoom(width_/2, height_/2, 4.0/width_));
}

void FractalCreator::calculateIteration()
{
    for (int y = 0; y < height_; y++)
    {
        for (int x = 0; x < width_; x++)
        {
            pair<double, double> coords = zoomlist_.doZoom(x, y);
            int iterations = Mandelbrot::getIterations(coords.first , coords.second);

            fractal_[y*width_ + x] = iterations;

            if (iterations != Mandelbrot::MAX_ITERATIONS)
            {
                histogram_[iterations]++;
            }
        }
    }
}

void FractalCreator::calculateTotalIterations()
{
    for (int i = 0; i < Mandelbrot::MAX_ITERATIONS; i++)
    {
        total_ += histogram_[i];
    }
}

void FractalCreator::drawFractal()
{
    for (int y = 0; y < height_; y++)
    {
        for (int x = 0; x < width_; x++)
        {
            uint8_t red = 0;
            uint8_t green = 0;
            uint8_t blue = 0;

            int iterations = fractal_[y*width_ + x];
            if (iterations != Mandelbrot::MAX_ITERATIONS)
            {
                double hue = 0.0;

                for (int i =0; i<=iterations;i++ ) {
                    hue += (double(histogram_[i]))/total_;
                }

                green = pow(255, hue);
            }
            bitmap_.setPixel(x, y, red, green, blue);

        }
    }
}

void FractalCreator::addZoom(const caveofprogramming::Zoom &zoom)
{
    zoomlist_.add(zoom);
}

void FractalCreator::writeBitmap(std::__cxx11::string name)
{
    bitmap_.write(name);
}
