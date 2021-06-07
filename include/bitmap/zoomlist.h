#ifndef ZOOMLIST_H
#define ZOOMLIST_H
#include "include/bitmap/zoom.h"
#include <vector>
#include <utility>

namespace caveofprogramming {

class ZoomList
{
private:
    double x_center_{0};
    double y_center_{0};
    double scale_{1.0};
    int width_{0};
    int height_{0};
    std::vector<Zoom> zooms_;

public:
    ZoomList(int width, int height);
    void add(const Zoom& zoom);
    std::pair<double, double> doZoom(int x, int y);
};
}

#endif // ZOOMLIST_H
