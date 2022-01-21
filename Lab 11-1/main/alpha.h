#ifndef ALPHA_H
#define ALPHA_H

#include <iostream>
using namespace std;
class alpha
{
private:
	int data;
public:
	alpha();
	alpha(int n);
	~alpha() {};
	void display();
	alpha(alpha& a);
	alpha& operator=(alpha& a);
	void setData(int n); //testing purpose
};
#endif ALPHA_H