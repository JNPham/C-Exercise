#include <iostream>
#include "pointerDataClass.h"

//Use shallow copy
int main()
{
	pointerDataClass list1(10);
	list1.insertAt(0, 50);
	list1.insertAt(4, 30);
	list1.insertAt(8, 60);
	cout << "List1: " << endl;
	list1.displayData();
	cout << "List 2: " << endl;
	pointerDataClass list2(list1);
	list2.displayData();
	list1.insertAt(4, 100);
	cout << "List1: (after insert 100 at indext 4) " << endl;
	list1.displayData();
	cout << "List 2: " << endl;
	list2.displayData();
	return 0;
}