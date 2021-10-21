#include "Shape.h"

double Shape::getPerimeter() const {
    return perimeter;
}

void Shape::setPerimeter(double perimeter) {
    Shape::perimeter = perimeter;
}

double Shape::getArea() const {
    return area;
}

void Shape::setArea(double area) {
    Shape::area = area;
}

int Shape::getMId() const {
    return m_ID;
}

void Shape::setMId(int mId) {
    m_ID = mId;
}

double Shape::calculateArea() {
    return 0;
}

double Shape::calculatePerimeter() {
    return 0;
}

const string &Shape::getMName() const {
    return m_name;
}

void Shape::setMName(const string &mName) {
    m_name = mName;
}

Shape::Shape(double perimeter, double area, const string &mName, int mId) : perimeter(perimeter), area(area),
                                                                            m_name(mName), m_ID(mId) {}

Shape::Shape() {}

