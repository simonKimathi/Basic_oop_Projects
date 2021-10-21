#include "Rectangle.h"
#include <iostream>
Rectangle::Rectangle() {}

Rectangle::Rectangle(double length, double width) : length(length), width(width) {}

double Rectangle::getLength() const {
    return length;
}

void Rectangle::setLength(double length) {
    Rectangle::length = length;
}

double Rectangle::getWidth() const {
    return width;
}

void Rectangle::setHeight(double height) {
    Rectangle::width = height;
}

double Rectangle::calculateArea() {
    return getLength() * getWidth();
}

double Rectangle::calculatePerimeter() {
    return 2 * (getLength() + getWidth());
}

void Rectangle::print() {
    cout << "A Rectangle of length " <<
         getLength() << " and width of "<<
         getWidth() << " has an area of "<<
         calculateArea() <<
         " and a perimeter of " <<
         calculatePerimeter() <<
         endl;
}
