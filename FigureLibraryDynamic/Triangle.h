#pragma once

#include <iostream>

#ifdef FigureLibraryDynamic_EXPORTS
#define FigureLibraryDynamic_API __declspec(dllexport)
#else
#define FigureLibraryDynamic_API __declspec(dllimport)
#endif

class Triangle {
public:
    FigureLibraryDynamic_API void print_info();
    virtual void print_angle();
    virtual void print_name();
    virtual void print_side();
    FigureLibraryDynamic_API Triangle() :Triangle("Треугольник:", 30, 20, 40, 30, 90, 60) {}
    FigureLibraryDynamic_API ~Triangle();
protected:
    FigureLibraryDynamic_API Triangle(std::string name_, int side_a_, int side_b_, int side_c_, int angle_a_, int angle_b_, int angle_c_);
private:
    int _side_a = 0;
    int _side_b = 0;
    int _side_c = 0;
    int _angle_a = 0;
    int _angle_b = 0;
    int _angle_c = 0;
    std::string _name;
};