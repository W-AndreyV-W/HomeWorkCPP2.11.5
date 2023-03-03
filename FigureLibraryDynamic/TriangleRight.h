#pragma once

#include <iostream>
#include "Triangle.h"

#ifdef FigureLibraryDynamic_EXPORTS
#define FigureLibraryDynamic_API __declspec(dllexport)
#else
#define FigureLibraryDynamic_API __declspec(dllimport)
#endif

class TriangleRight :public Triangle {
public:
    FigureLibraryDynamic_API TriangleRight() :TriangleRight("������������� �����������:", 10, 20, 30, 30, 60) {}
    FigureLibraryDynamic_API ~TriangleRight();
protected:
    FigureLibraryDynamic_API TriangleRight(std::string name_, int side_a_, int side_b_, int side_c_, int angle_a_, int angle_b_);
};