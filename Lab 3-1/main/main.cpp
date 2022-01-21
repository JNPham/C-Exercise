#include <iostream>
#include "compare.h"
using namespace std;

int main()
{   
    int x, y, z;
    cout << "Enter the first number: \n";
    cin >> x;
    cout << "Enter the second number: \n";
    cin >> y;
    cout << "Enter the third number: \n";
    cin >> z;
    cout << "The largest number is: " << largest(x, y, z);
}
