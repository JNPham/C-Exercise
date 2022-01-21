#ifndef DISTANCE_H
#define DISTANCE_H
#include <istream>
#include <ostream>

class Distance //English Distance class
{
private:
	int feet;
	float inches;
public: //constructor (no args)
	Distance() : feet(0), inches(0.0)
	{ } //constructor (two args)
	Distance(int ft, float in) : feet(ft), inches(in)
	{ }
	//Distance(float allc);
	Distance operator+(const Distance & dis2) const;
	friend Distance operator-(Distance d1, Distance d2);
	friend std::ostream& operator<<(std::ostream& out, const Distance& d); 
	friend std::istream & operator>>(std::istream & in, Distance & d);
};

#endif // !DISTANCE_H
