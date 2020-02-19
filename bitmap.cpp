//
// Created by Jeremy Beck on 2019-06-05.
//
#include <fstream>
#include "bitmap.h"



Bitmap::Bitmap(int width, int height): m_width(width), m_height(height), m_pPixels(new uint8_t[width*height*3]{ }) {}

Bitmap::~Bitmap() {}

void Bitmap::setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue){
    uint8_t *pPixel = m_pPixels.get();
    pPixel += (y *3) * m_width + (x * 3);

    pPixel[0] = blue;
    pPixel[1] = green;
    pPixel[2] = red;

}

bool Bitmap::write(std::string const &filename) {

    BitMapInfoHeader infoHeader;
    BitMapFileHeader fileHeader;

    fileHeader.fileSize = sizeof(BitMapFileHeader) + sizeof(BitMapInfoHeader) + (m_width*m_height*3);
    fileHeader.dataOffset = sizeof(fileHeader) + sizeof(BitMapInfoHeader);

    infoHeader.width = m_width;
    infoHeader.height = m_height;

    std::ofstream file;
    file.open(filename, std::ios::binary|std::ios::out);

    if (file.is_open()) {
        file.write(reinterpret_cast<char *>(&fileHeader), sizeof(fileHeader));
        file.write(reinterpret_cast<char *>(&infoHeader), sizeof(infoHeader));
        file.seekp(fileHeader.dataOffset);
        file.write(reinterpret_cast<char *>(m_pPixels.get()), m_width*m_height*3);
        file.close();
    } else {
        std::cout << "Could not create file " + filename << std::endl;
        return false;
    }

    return true;
}