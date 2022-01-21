#include "Distance.h"
#include <iostream>
#include <istream>
#include <ostream>
using namespace std;

Distance Distance::operator+(const Distance& dis2) const
{
    float total = (feet * 12 + inches) + (dis2.feet * 12 + dis2.inches);
    int ft = std::floor(total / 12);
    float in = total - 12 * ft;
    Distance local(ft, in);
    return local;
}

Distance operator-(Distance d1, Distance d2)
{
    Distance d;      
    float result = (d1.feet * 12 + d1.inches) - (d2.feet * 12 + d2.inches);
    if ((d1.feet * 12 + d1.inches) >= (d2.feet * 12 + d2.inches)) {
        d.feet = std::floor(result / 12);
    }
    else {
        d.feet = std::ceil(result / 12);
    }
    d.inches = result - 12 * d.feet;
    return d;
}

ostream& operator<<(ostream& out, const Distance& d)
{
    out << d.feet  << "'" << d.inches << "\"";
    return out;
}

istream& operator>>(istream& in, Distance& d)
{
    in >> d.feet >> d.inches;
    return in;
} 
