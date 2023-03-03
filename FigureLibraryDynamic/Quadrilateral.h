#pragma once

#include <iostream>
#include "Triangle.h"

#ifdef FigureLibraryDynamic_EXPORTS
#define FigureLibraryDynamic_API __declspec(dllexport)
#else
#define TFigureLibraryDynamic_API __declspec(dllimport)
#endif

class Quadrilateral :public Triangle {
public:
    void print_angle() override;
    void print_side() override;
    FigureLibraryDynamic_API Quadrilateral():Quadrilateral("Четырехугольник:", 10, 20, 30, 40, 50, 60, 70, 80) {}
    FigureLibraryDynamic_API ~Quadrilateral();
protected:
    FigureLibraryDynamic_API Quadrilateral(std::string name_, int side_a_, int side_b_, int side_c_, int side_d_, int angle_a_, int angle_b_, int angle_c_, int angle_d_);
private:
    int _side_d = 0;
    int _angle_d = 0;
};