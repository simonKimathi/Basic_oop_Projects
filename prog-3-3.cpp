#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
#include "Color.h"
#include <list>
#include <algorithm>
#include <cmath>

void loopRectangles(list<Rectangle> rectangles);
void loopTriangles(list<Triangle> triangles);
void loopCircles(list<Circle> circles);

void loopRectangles_(list<Rectangle> list1);

void loopTriangles_(list<Triangle> list1);

void loopCircles_(list<Circle> list1);

colors convert(string basicString);

double averageArea=0;
double averagePerimeter=0;
int indexValue=0;
string output="";
list<Shape> shapes;

using namespace std;
int main() {
    string text;
    list<Rectangle> rectangles;
    list<Triangle> triangles;
    list<Circle> circles;
    ifstream MyReadFile("../input-3-3.txt");
    if(MyReadFile.is_open()) {
        cout<< "Reading input file" << endl;
        while (getline(MyReadFile, text)) {
            // Read the text from the file
            stringstream ssin(text);
            int i = 0;
            string arr[7];
            while (ssin.good() && i < 7){
                string value;
                ssin >> value;
                arr[i]=value;
                ++i;
            }
            if(i == 6){ //rectangle
                Rectangle rectangle=Rectangle(stod(arr[4]),stod(arr[5]));
                rectangle.setColor(convert(arr[3]));
                rectangle.setMId(stoi( arr[0]));
                rectangle.setMName( arr[1]);
                rectangles.push_back(rectangle);

            }
            else if(i == 7){ //triangle
                Triangle triangle=Triangle(stod(arr[4]),stod(arr[5]),stod(arr[6]));
                triangle.setColor(convert(arr[3]));
                triangle.setMId(stoi( arr[0]));
                triangle.setMName( arr[1]);
                triangles.push_back(triangle);
            }
            else if(i == 5){ //circle
                Circle circle=Circle(stod(arr[4]));
                circle.setColor(convert(arr[3]));
                circle.setMId(stoi( arr[0]));
                circle.setMName( arr[1]);
                circles.push_back(circle);
            }

        }
        MyReadFile.close();

        cout<< "Done reading input file" << endl;
        cout<< "\nStarting Calculations and printing per object\n" << endl;

        //calculate area and perimeter and their averages
        loopRectangles(rectangles);
        loopTriangles(triangles);
        loopCircles(circles);

        cout<< " \ndone on Calculations and printing per object \n" << endl;

        cout<< "Writing outputs file" << endl;

        output="Average Area of the Objects are : "+ to_string(averageArea) +" \n";
        //set colors according to values relative to average
        loopRectangles_(rectangles);
        loopTriangles_(triangles);
        loopCircles_(circles);

        //write output to file
        // Create and open a text file
        ofstream MyFile("../output-3-3.txt");

        // Write to the file
        MyFile << output;

        cout<< "Done writing outputs file" << endl;
    }
    else{
        cout << "file not found " <<endl;
    }


    return 0;
}

colors convert(string str) {

    if(str == "red"){
        return red;
    } else if(str == "yellow"){
        return yellow;
    } else if(str == "blue"){
        return blue;
    } else if(str == "black"){
        return black;
    } else {
        return white;
    }
}
string convert(colors str) {

    if(str == red){
        return "red";
    } else if(str == yellow){
        return "yellow";
    } else if(str == blue){
        return "blue";
    } else if(str == black){
        return "black";
    } else {
        return "white";
    }
}


void loopRectangles(const list<Rectangle> rectangles) {
    for(Rectangle r: rectangles){
        if(averageArea == 0){
            averageArea=r.calculateArea();
            averagePerimeter=r.calculatePerimeter();
        }else{
            averageArea=(averageArea+r.calculateArea())/2;
            averagePerimeter=(averageArea+r.calculatePerimeter())/2;
        }
        indexValue++;
        Shape shape=Shape(r.calculatePerimeter(),r.calculateArea(),r.getMName(),r.getMId());
        shapes.push_back(shape);
        r.print();
    }
}
void loopTriangles(list<Triangle> triangles) {
    for(Triangle t : triangles){
        if(averageArea == 0){
            averageArea=t.calculateArea();
            averagePerimeter=t.calculatePerimeter();
        }else{
            averageArea=(averageArea+t.calculateArea())/2;
            averagePerimeter=(averageArea+t.calculatePerimeter())/2;
        }
        indexValue++;
        Shape shape=Shape(t.calculatePerimeter(),t.calculateArea(),t.getMName(),t.getMId());
        shapes.push_back(shape);
        t.print();
    }
}
void loopCircles(list<Circle> circles) {
    for(Circle c : circles){
        if(averageArea == 0){
            averageArea=c.calculateArea();
            averagePerimeter=c.calculatePerimeter();
        }else{
            averageArea=(averageArea+c.calculateArea())/2;
            averagePerimeter=(averageArea+c.calculatePerimeter())/2;
        }
        indexValue++;
        Shape shape=Shape(c.calculatePerimeter(),c.calculateArea(),c.getMName(),c.getMId());
        shapes.push_back(shape);
        c.print();
    }
}

void loopCircles_(list<Circle> circles) {
    for(Circle c: circles){
        if(c.calculateArea() > averageArea){
            c.setColor(black);
        }else{
            c.setColor(white);
        }
        output= output + to_string(c.getMId()) +  " " + c.getMName()+ " " +  to_string( c.calculateArea()) + " " +convert(c.getColor())+ " \n";

    }
}

void loopTriangles_(list<Triangle> triangles) {
    for(Triangle t : triangles){
        if(t.calculateArea() > averageArea){
            t.setColor(black);
        }else{
            t.setColor(white);
        }
        output= output + to_string(t.getMId()) +  " " + t.getMName()+ " " +  to_string( t.calculateArea()) + " " +convert(t.getColor())+ " \n";

    }
}

void loopRectangles_(list<Rectangle> rectangles) {
    for(Rectangle r: rectangles){
        if(r.calculateArea() > averageArea){
            r.setColor(black);
        }else{
            r.setColor(white);
        }
        output= output + to_string(r.getMId()) +  " " + r.getMName()+ " " +  to_string( r.calculateArea()) + " " +convert(r.getColor())+ " \n";

    }
}

