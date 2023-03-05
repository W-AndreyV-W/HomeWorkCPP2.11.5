#pragma once

#include <iostream>
#include "Parallelogram.h"

class Rectrangle :public Parallelogram {
public:
    FigureLibraryDynamic_API Rectrangle() :Rectrangle("Прямоугольник:", 10, 20) {}
    FigureLibraryDynamic_API ~Rectrangle();
protected:
    FigureLibraryDynamic_API Rectrangle(std::string name_, int side_a_c_, int side_b_d_);
};