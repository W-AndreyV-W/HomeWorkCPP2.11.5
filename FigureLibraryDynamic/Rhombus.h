#pragma once

#include <iostream>
#include "Parallelogram.h"

class Rhombus :public Parallelogram {
public:
    FigureLibraryDynamic_API Rhombus() :Rhombus("Ромб:", 30, 30, 40) {}
    FigureLibraryDynamic_API ~Rhombus();
protected:
    FigureLibraryDynamic_API Rhombus(std::string name_, int side_a_b_c_d_, int angle_a_c_, int angle_b_d_);
};