#include "Triangle.h"
#include <iostream>

Triangle::Triangle() {}

Triangle::Triangle(double base, double height, double hypotenuse) : base(base), height(height),
                                                                    hypotenuse(hypotenuse) {}

double Triangle::getBase() const {
    return base;
}

void Triangle::setBase(double base) {
    Triangle::base = base;
}

double Triangle::getHeight() const {
    return height;
}

void Triangle::setHeight(double height) {
    Triangle::height = height;
}

double Triangle::getHypotenuse() const {
    return hypotenuse;
}

void Triangle::setHypotenuse(double hypotenuse) {
    Triangle::hypotenuse = hypotenuse;
}

double Triangle::calculateArea() {
    return 0.5*base*height;
}

double Triangle::calculatePerimeter() {
    return getBase()+getHeight()+getHypotenuse();
}

void Triangle::print() {
    cout << "A Rectangle of base " <<
         getBase() << " , height of "<<
         getHeight() << " and hypotenuse of "<<
         getHypotenuse() << " has an area of "<<
         calculateArea() <<
         " and a perimeter of " <<
         calculatePerimeter() <<
         endl;
}
