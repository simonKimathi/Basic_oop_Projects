#ifndef ASSIGNMENT_3_TRIANGLE_H
#define ASSIGNMENT_3_TRIANGLE_H


#include "Shape.h"
#include "Color.h"

class Triangle : public Shape, public Color{
private:
    double base,height,hypotenuse;

public:
    Triangle();

    Triangle(double base, double height, double hypotenuse);

    double getBase() const;

    void setBase(double base);

    double getHeight() const;

    void setHeight(double height);

    double getHypotenuse() const;

    void setHypotenuse(double hypotenuse);

    double calculateArea() override;

    double calculatePerimeter() override;

    void print();

};


#endif //ASSIGNMENT_3_TRIANGLE_H
