#pragma once

#include <iostream>
#include "Parallelogram.h"

#ifdef FigureLibraryDynamic_EXPORTS
#define FigureLibraryDynamic_API __declspec(dllexport)
#else
#define FigureLibraryDynamic_API __declspec(dllimport)
#endif

class Rhombus :public Parallelogram {
public:
    FigureLibraryDynamic_API Rhombus() :Rhombus("����:", 30, 30, 40) {}
    FigureLibraryDynamic_API ~Rhombus();
protected:
    FigureLibraryDynamic_API Rhombus(std::string name_, int side_a_b_c_d_, int angle_a_c_, int angle_b_d_);
};