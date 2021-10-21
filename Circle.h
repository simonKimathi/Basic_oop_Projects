#ifndef ASSIGNMENT_3_CIRCLE_H
#define ASSIGNMENT_3_CIRCLE_H


#include "Shape.h"
#include "Color.h"

class Circle : public Shape,public Color{
private:
    double radius;
public:
    Circle();
    Circle(double radius);
    double getRadius() const;

    void setRadius(double radius);

    double calculateArea() override;

    double calculatePerimeter() override;

    void print();


};


#endif //ASSIGNMENT_3_CIRCLE_H
