#ifndef ASSIGNMENT_3_SHAPE_H
#define ASSIGNMENT_3_SHAPE_H
#include <string>
using namespace std;

class Shape {
private:
    double perimeter;
    double area;
    string m_name;
    int m_ID;
public:
    Shape();

    Shape(double perimeter, double area, const string &mName, int mId);

    double getPerimeter() const;

    void setPerimeter(double perimeter);

    double getArea() const;

    void setArea(double area);

    const string &getMName() const;

    void setMName(const string &mName);

    int getMId() const;

    void setMId(int mId);

    virtual double calculateArea();

    virtual double calculatePerimeter();

};


#endif
