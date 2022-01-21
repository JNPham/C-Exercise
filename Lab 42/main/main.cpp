#include <iostream>
#include "array.h" 
using namespace std;

int main()
{
// Creation of an array
	Array array1(10);
	array1.insert(5);
	array1.insert(3);
	array1.insert(2);
	cout << "Array 1: " << endl;
	array1.print();
	cout << endl;
// Creation of another array    
	Array array2(20);
	for (int i = 0; i < 20; i++)
	{
		array2.insert(i * 10);
	}
	cout << "Array 2: " << endl;
	array2.print();
	cout << endl;
	return 0;
}