#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
using namespace std;

class Array
{
public:
	Array(int c);
	void insert(int cap);
	void print();
private:
	int capacity;
	int size;
	int* arr;
};
#endif