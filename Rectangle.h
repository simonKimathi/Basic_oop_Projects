#ifndef ASSIGNMENT_3_RECTANGLE_H
#define ASSIGNMENT_3_RECTANGLE_H


#include "Shape.h"
#include "Color.h"

class Rectangle : public Shape, public Color {
private:
    double length,width;
public:
    Rectangle();

    Rectangle(double length, double width);

    double getLength() const;

    void setLength(double length);

    double getWidth() const;

    void setHeight(double height);

    double calculateArea() override;

    double calculatePerimeter() override;

    void print();
};


#endif //ASSIGNMENT_3_RECTANGLE_H
