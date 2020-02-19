cmake_minimum_required(VERSION 3.13)
project(fractal_creator)

set(CMAKE_CXX_STANDARD 14)

add_executable(fractal_creator main.cpp bitmapfileheader.h bitmapinfoheader.h bitmap.cpp bitmap.h mandelbrot.cpp mandelbrot.h zoom.h zoomlist.cpp zoomlist.h fractalcreator.cpp fractalcreator.h rgb.cpp rgb.h)