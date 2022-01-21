#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
using namespace std;

// Class definition
class Array
{
private:
	int* arr;
	int capacity;
	int size;
	void moveTowardFront(int index);
	void moveTowardEnd(int index);
public:
	Array(int capacity);
	~Array();
	void insert(int value);
	void remove(int value);
	void print() const;
};
#endif

