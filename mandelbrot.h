//
// Created by Jeremy Beck on 2019-06-05.
//

#ifndef FRACTAL_CREATOR_MANDELBROT_H
#define FRACTAL_CREATOR_MANDELBROT_H


class Mandelbrot
{
public:
    static const int MAX_ITERATIONS = 1000;

public:
    Mandelbrot();
    virtual ~Mandelbrot();

    static int getIterations(double x, double y);
};


#endif //FRACTAL_CREATOR_MANDELBROT_H
