#include <iostream>
#include <locale.h>

#include "./FigureLibraryDynamic/Figure.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    Triangle triangle;
    TriangleRight triangleRight;
    TriangleIsos triangleIsos;
    TriangleEquil triangleEquil;
    Quadrilateral quadrilateral;
    Parallelogram parallelogram;
    Rhombus rhombus;
    Rectrangle rectrangle;
    Square square;

    triangle.print_info();
    triangleRight.print_info();
    triangleIsos.print_info();
    triangleEquil.print_info();
    quadrilateral.print_info();
    parallelogram.print_info();
    rhombus.print_info();
    rectrangle.print_info();
    square.print_info();
}