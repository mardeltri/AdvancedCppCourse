#include "include/bitmap/bitmap.h"

using namespace caveofprogramming;
using namespace std;

namespace caveofprogramming {
Bitmap::Bitmap(int width, int height): width_(width), height_(height), p_pixel_(new uint8_t[width*height*3]{})
{

}

void Bitmap::setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue)
{
    uint8_t * pixel = p_pixel_.get();

    pixel += (y*3)*width_ + (x*3);

    pixel[0] = blue;
    pixel[1] = green;
    pixel[2] = red;
}

Bitmap::~Bitmap()
{

}

bool Bitmap::write(string filename)
{
    BitmapFileHeader fileHeader;
    BitmapInfoHeader infoHeader;

    fileHeader.file_size = sizeof (BitmapFileHeader) + sizeof (BitmapInfoHeader) + width_*height_*3;
    fileHeader.data_offset = sizeof (BitmapFileHeader) + sizeof (BitmapInfoHeader);

    infoHeader.width = width_;
    infoHeader.height = height_;

    ofstream file;
    file.open(filename, ios::out|ios::binary);

    if (!file)
    {
        return false;
    }

    file.write((char *)&fileHeader, sizeof(fileHeader));
    file.write((char *)&infoHeader, sizeof(infoHeader));
    file.write((char *)p_pixel_.get(), width_*height_*3);

    file.close();

    if (!file)
    {
        return false;
    }

    return true;
}

}
