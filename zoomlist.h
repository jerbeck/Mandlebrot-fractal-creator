//
// Created by Jeremy Beck on 2019-06-06.
//

#ifndef FRACTAL_CREATOR_ZOOMLIST_H
#define FRACTAL_CREATOR_ZOOMLIST_H
#include <vector>
#include <utility>
#include "zoom.h"

class ZoomList
{
private:
    double m_xCenter{0};
    double m_yCenter{0};
    double m_scale{1.0};

    int m_width{0};
    int m_height{9};
    std::vector<Zoom> zooms;

public:
    ZoomList(int width, int height);
    void add(const Zoom &zoom);
    std::pair<double, double> doZoom(int x, int y);
};


#endif //FRACTAL_CREATOR_ZOOMLIST_H
