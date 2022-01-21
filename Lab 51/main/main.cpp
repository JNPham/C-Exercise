/******************************************************
 * The application file to test the sorted array class *
 ******************************************************/
#include "Array.h"

int main()
{
	// Declaration of any array of capacity 20
	Array array(20);
	// Inserting some elements and printing array
	array.insert(15);
	array.insert(13);
	array.insert(10);
	array.insert(14);
	array.insert(11);
	array.insert(17);
	array.insert(14);
	cout << "Printing array after insertions: " << endl;
	array.print();
	cout << endl;
	// Removing two elements and printing array    
	array.remove(13);
	array.remove(11);
	cout << "Printing array after removals: " << endl;
	array.print();
	cout << endl;
	// Inserting two more elements and printing array
	array.insert(8);
	array.insert(22);
	cout << "Printing array after more insertion" << endl;
	array.print();
	cout << endl;
	// Try to remove an element, which is not in the array
	array.remove(31); 
	return 0;
}