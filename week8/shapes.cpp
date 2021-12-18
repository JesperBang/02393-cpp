#include <cmath>
#include "shapes.h"

using namespace std;

// Rectangle
Rectangle::Rectangle(double height, double width){
    recwidth = width;
    recheight = height;
}

double Rectangle::area(void){
    return recwidth * recheight;
}

double Rectangle::perimeter(void){
    return (2 * recwidth) + (2 * recheight);
}

double Rectangle::width(void){
    return recwidth;
}

double Rectangle::height(void){
    return recheight;
}

void Rectangle::rotate(void){
    double temp = recwidth;
    recwidth = recheight;
    recheight = temp;
}

// Square

//Square::Square(double side){
//    sidelen = side;
//}

Square::Square(double sidelen) : Rectangle(sidelen, sidelen) {}

// Does nothing, same len on each side..
void Square::rotate(void){
    return;
}

// Circle
Circle::Circle(double radius){
    cirradius = radius;
}

double Circle::area(void){
    return M_PI * pow(cirradius,2);
}

double Circle::perimeter(void){
    return 2 * M_PI * cirradius;
}

double Circle::width(void){
    return 2 * cirradius;
}

double Circle::height(void){
    return 2 * cirradius;
}

// Does nothing
void Circle::rotate(void){
    return;
}
