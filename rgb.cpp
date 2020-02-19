//
// Created by Jeremy Beck on 2019-06-07.
//
#include "rgb.h"

RGB::RGB(double red, double green, double blue): m_red(red), m_green(green), m_blue(blue)  {

}

RGB::~RGB() {

}

RGB operator-(const RGB &r1, const RGB &r2) {
    return RGB(r1.m_red - r2.m_red, r1.m_green - r2.m_green, r1.m_blue - r2.m_blue);
}