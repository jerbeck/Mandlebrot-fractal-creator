#include <iostream>
#include <cstdint>
#include "fractalcreator.h"
#include "rgb.h"
#include "zoom.h"

int main()
{


    FractalCreator fractalCreator(800, 600);

    fractalCreator.addColorRange(0.0, RGB(0, 0, 0));
    fractalCreator.addColorRange(0.3, RGB(255, 0, 0));
    fractalCreator.addColorRange(0.5, RGB(255, 255, 0));
    fractalCreator.addColorRange(1.0, RGB(255, 255, 255));

    fractalCreator.addZoom(Zoom(295, 202, 0.1));
    fractalCreator.addZoom(Zoom(312, 304, 0.1));
    fractalCreator.run("../test.bmp");

    std::cout << "Finished" << std::endl;

    return 0;
}