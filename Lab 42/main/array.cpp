#include "array.h"
#include <iostream>
using namespace std;

Array::Array(int c) 
{	
	capacity = c; 
	size = 0;
	arr = new int[capacity];
}

void Array::insert(int num)
{
	*(arr + size) = num;
	size++;
}

void Array::print()
{
	for (int i = 0; i < size; ++i) 
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;
}