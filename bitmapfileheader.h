//
// Created by Jeremy Beck on 2019-06-04.
//

#ifndef FRACTAL_CREATOR_BITMAPFILEHEADER_H
#define FRACTAL_CREATOR_BITMAPFILEHEADER_H
#include <cstdint>

#pragma pack(2)

struct BitMapFileHeader {
    char header[2]{'B', 'M'};
    int32_t fileSize;
    int32_t reserved{0};
    int32_t dataOffset;

};

#endif //FRACTAL_CREATOR_BITMAPFILEHEADER_H
