#pragma once

#include <iostream>
#include "Triangle.h"

#ifdef FigureLibraryDynamic_EXPORTS
#define FigureLibraryDynamic_API __declspec(dllexport)
#else
#define FigureLibraryDynamic_API __declspec(dllimport)
#endif

class TriangleIsos :public Triangle {
public:
    FigureLibraryDynamic_API TriangleIsos() :TriangleIsos("�������������� �����������:", 10, 20, 50, 60) {}
    FigureLibraryDynamic_API ~TriangleIsos();
protected:
    FigureLibraryDynamic_API TriangleIsos(std::string name_, int side_a_c_, int side_b_, int angle_a_c_, int angle_b_);
};