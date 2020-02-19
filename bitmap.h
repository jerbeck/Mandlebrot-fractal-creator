//
// Created by Jeremy Beck on 2019-06-05.
//

#ifndef FRACTAL_CREATOR_BITMAP_H
#define FRACTAL_CREATOR_BITMAP_H
#include <iostream>
#include <string>
#include <cstdint>
#include "bitmapfileheader.h"
#include "bitmapinfoheader.h"

class Bitmap
{
private:
    int m_width{0};
    int m_height{0};
    std::unique_ptr<uint8_t[]> m_pPixels{nullptr};

public:
    Bitmap(int width, int height);
    void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);
    bool write(std::string const &filename);
    ~Bitmap();

};


#endif //FRACTAL_CREATOR_BITMAP_H
