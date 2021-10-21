#include <iostream>
#include "Circle.h"

double Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(double radius) {
    Circle::radius = radius;
}

Circle::Circle(double radius) : radius(radius) {}

Circle::Circle() {}

double Circle::calculateArea() {
    return ((double ) 22/7)*(getRadius()*getRadius());
}

double Circle::calculatePerimeter() {
    return ((double ) 22/7) *getRadius()*2;
}

void Circle::print() {
    cout << "The circle of radius " <<
         getRadius() << " has an area of "<<
         calculateArea() <<
         " and a perimeter of " <<
         calculatePerimeter() <<
         endl;
}



