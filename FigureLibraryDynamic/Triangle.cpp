#include "Triangle.h"

void Triangle::print_info() {
    print_name();
    print_side();
    std::cout << std::endl;
    print_angle();
    std::cout << std::endl;
    std::cout << std::endl;
}

void Triangle::print_angle() {
    std::cout << "����: A=" << _angle_a << " B=" << _angle_b << " C=" << _angle_c;
}
void Triangle::print_side() {
    std::cout << "�������: a=" << _side_a << " b=" << _side_b << " c=" << _side_c;
}
void Triangle::print_name() {
    std::cout << _name << std::endl;
}
Triangle::Triangle(std::string name_, int side_a_, int side_b_, int side_c_, int angle_a_, int angle_b_, int angle_c_) {
    _side_a = side_a_;
    _side_b = side_b_;
    _side_c = side_c_;
    _angle_a = angle_a_;
    _angle_b = angle_b_;
    _angle_c = angle_c_;
    _name = name_;
}
Triangle::~Triangle(){}