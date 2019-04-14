#include <iostream>
#include "rectangle.h"

Rectangle::Rectangle(double width, double height) {
    _width  = width;
    _height = height;
}

Rectangle::Rectangle() {
    _width  = 1;
    _height = 1;
}

double Rectangle::set_width(double width) {
    _width = width;
}

double Rectangle::get_width() {
    return _width;
}

double Rectangle::set_height(double height) {
    _height = height;
}

double Rectangle::get_height() {
    return _height;
}

double Rectangle::get_area() {
    return  _width * _height;
}

double Rectangle::get_perimeter() {
    return (_width * 2) + (_height * 2);
}