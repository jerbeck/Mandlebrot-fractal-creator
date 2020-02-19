//
// Created by Jeremy Beck on 2019-06-07.
//

#ifndef FRACTAL_CREATOR_RGB_H
#define FRACTAL_CREATOR_RGB_H


class RGB
{
public:
    double m_red = 0.0;
    double m_green = 0.0;
    double m_blue = 0.0;

    RGB() = default;
    RGB(double red, double green, double blue);
    virtual ~RGB();


};

RGB operator-(const RGB &r1, const RGB &r2);

#endif //FRACTAL_CREATOR_RGB_H
