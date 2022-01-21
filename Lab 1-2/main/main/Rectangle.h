#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle
{
public:
    Rectangle();
    Rectangle(double w, double h);
    double getWidth() const;
    double getHeight() const;
    double changeWidth(double x);
    double changeHeight(double x);
    double getArea();
    double getPerimeter();
private:
    double width;
    double height;
};
#endif
