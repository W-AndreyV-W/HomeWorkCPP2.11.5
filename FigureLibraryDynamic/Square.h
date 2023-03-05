#pragma once

#include <iostream>
#include "Rectrangle.h"

class Square :public Rectrangle {
public:
    FigureLibraryDynamic_API Square() :Square(" вадрат:", 20) {}
    FigureLibraryDynamic_API ~Square();
protected:
    FigureLibraryDynamic_API Square(std::string name_, int side_a_b_c_d_);
};