//
// Created by Jeremy Beck on 2019-06-06.
//

#ifndef FRACTAL_CREATOR_ZOOM_H
#define FRACTAL_CREATOR_ZOOM_H

struct Zoom
{
    int x{0}, y{0};
    double scale{1.0};

    Zoom(int x, int y, double scale): x(x), y(y), scale(scale) {};

};


#endif //FRACTAL_CREATOR_ZOOM_H
