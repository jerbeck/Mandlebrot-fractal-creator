//
// Created by Jeremy Beck on 2019-06-06.
//

#ifndef FRACTAL_CREATOR_FRACTALCREATOR_H
#define FRACTAL_CREATOR_FRACTALCREATOR_H

#include <iostream>
#include <vector>
#include "zoomlist.h"
#include "mandelbrot.h"
#include "bitmap.h"
#include "rgb.h"
#include "bitmap.h"
#include "zoomlist.h"

class FractalCreator
{
private:
    int m_width{800};
    int m_height{600};
    int m_total = 0;
    std::vector<RGB> m_colors;
    std::vector<int> m_ranges;
    std::vector<int> m_rangeTotals;
    bool m_bGotFirstRange{false};

    Bitmap m_bitmap;
    ZoomList m_zoomList;

    std::unique_ptr<int[]> m_histogram;
    std::unique_ptr<int[]> m_fractal;

public:
    FractalCreator(int width, int height);
    virtual ~FractalCreator();
    void addZoom(const Zoom &zoom);
    void addColorRange(double rangeEnd, const RGB &rgb);

private:
    void calculateIterations();
    void calculateTotalIterations();

    void drawFractal();
    void writeBitmap(std::string const &name);
    void calculateRangeTotals();
    int getRange(int iterations) const;


public:
    void run(std::string name);
};


#endif //FRACTAL_CREATOR_FRACTALCREATOR_H
