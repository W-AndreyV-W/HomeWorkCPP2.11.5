#pragma once

#include <iostream>
#include "Triangle.h"

#ifdef FigureLibraryDynamic_EXPORTS
#define FigureLibraryDynamic_API __declspec(dllexport)
#else
#define TFigureLibraryDynamic_API __declspec(dllimport)
#endif

class TriangleEquil :public Triangle {
public:
    FigureLibraryDynamic_API TriangleEquil() :TriangleEquil("Равносторонний треугольник:", 30) {}
    FigureLibraryDynamic_API ~TriangleEquil();
protected:
    FigureLibraryDynamic_API TriangleEquil(std::string name_, int side_a_b_c_);
};