
#include <iostream>
#include "Rectangle.h"
using namespace std;


Rectangle::Rectangle() { width = 1; height = 1; }
Rectangle::Rectangle(double w, double h) { width = w; height = h; }

double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::getHeight() const
{
    return height;
}

double Rectangle::changeWidth(double x)
{
    return width + x;
}

double Rectangle::changeHeight(double x)
{
    return height + x;
}

double Rectangle::getArea()
{
    return width * height;
}

double Rectangle::getPerimeter()
{
    return 2 * (width + height);
}
