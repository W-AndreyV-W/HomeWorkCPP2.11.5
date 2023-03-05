#pragma once

#include <iostream>
#include "Triangle.h"

class TriangleEquil :public Triangle {
public:
    FigureLibraryDynamic_API TriangleEquil() :TriangleEquil("Равносторонний треугольник:", 30) {}
    FigureLibraryDynamic_API ~TriangleEquil();
protected:
    FigureLibraryDynamic_API TriangleEquil(std::string name_, int side_a_b_c_);
};