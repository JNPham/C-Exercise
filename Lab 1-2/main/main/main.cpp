#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    double w1, h1, w2, h2;
    cout << "Enter the first rectangle's width: " << endl;
    cin >> w1;
    cout << "Enter the first rectangle's height: " << endl;
    cin >> h1;
    cout << "Enter the second rectangle's width: " << endl;
    cin >> w2;
    cout << "Enter the first rectangle's height: " << endl;
    cin >> h2;
    Rectangle rec1(w1, h1);
    Rectangle rec2(w2, h2);

    cout << "First rectangle's width is " << rec1.getWidth() << endl;
    cout << "First rectangle's height is " << rec1.getHeight() << endl;
    cout << "First rectangle's area is " << rec1.getArea() << endl;
    cout << "First rectangle's perimeter is " << rec1.getPerimeter() << endl;
    cout << "--------------------------------------\n";
    cout << "Second rectangle's width is " << rec2.getWidth() << endl;
    cout << "Second rectangle's height is " << rec2.getHeight() << endl;
    cout << "Second rectangle's area is " << rec2.getArea() << endl;
    cout << "Second rectangle's perimeter is " << rec2.getPerimeter() << endl;
    return 0;
}
