#ifndef BITMAP_H
#define BITMAP_H

#include <string>
#include <cstdint>
#include <iostream>
#include <memory>
#include <fstream>

#include "include/bitmap/bitmapInfoHeader.h"
#include "include/bitmap/bitmapFileHeader.h"

using namespace std;

namespace caveofprogramming {

class Bitmap
{
private:
    int width_{0};
    int height_{0};
    unique_ptr<uint8_t[]> p_pixel_{nullptr};

public:
    Bitmap(int width, int height);
    void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);
    virtual ~Bitmap();
    bool write(string filename);
};

}

#endif // BITMAP_H
