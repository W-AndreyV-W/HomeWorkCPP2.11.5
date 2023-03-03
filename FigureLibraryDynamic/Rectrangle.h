#pragma once

#include <iostream>
#include "Parallelogram.h"

#ifdef FigureLibraryDynamic_EXPORTS
#define FigureLibraryDynamic_API __declspec(dllexport)
#else
#define FigureLibraryDynamic_API __declspec(dllimport)
#endif


class Rectrangle :public Parallelogram {
public:
    FigureLibraryDynamic_API Rectrangle() :Rectrangle("Прямоугольник:", 10, 20) {}
    FigureLibraryDynamic_API ~Rectrangle();
protected:
    FigureLibraryDynamic_API Rectrangle(std::string name_, int side_a_c_, int side_b_d_);
};