#ifndef ASSIGNMENT_3_COLOR_H
#define ASSIGNMENT_3_COLOR_H

#include <string>
using namespace  std;
enum colors {
    red,
    yellow,
    blue,
    black,
    white
};
using namespace std;
class Color {
public:
    colors color;

    colors getColor() const;

    void setColor(colors color);


};


#endif //ASSIGNMENT_3_COLOR_H
