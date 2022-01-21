#include <iostream>
#include "alpha.h"
using namespace std;

int main()
{
	alpha a1(37);
	alpha a2;

	a2 = a1;
	cout << "\na2=";
	a2.display(); //display a2
	//a1.setData(40); //testing
	//cout << "\na2=";
	//a2.display(); //display a2 again
	alpha a3(a1); //invoke copy constructor
	cout << "\na3=";
	a3.display(); //display a3
	alpha a4 = a1;
	cout << "\na4=";
	a4.display();
	cout << endl;
	return 0;
}