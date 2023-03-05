#pragma once

#include <iostream>
#include "Quadrilateral.h"

class Parallelogram :public Quadrilateral {
public:
    FigureLibraryDynamic_API Parallelogram() :Parallelogram("ֿאנאככוכמדנאלל:", 20, 30, 30, 40) {}
    FigureLibraryDynamic_API ~Parallelogram();
protected:
    FigureLibraryDynamic_API Parallelogram(std::string name_, int side_a_c_, int side_b_d_, int angle_a_c_, int angle_b_d_);
};