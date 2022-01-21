#include "pointerDataClass.h"

// using deep copy
pointerDataClass::pointerDataClass(int size) {
	maxSize = size;
	length = 0;
	p = new int[maxSize];
	for (int i = 0; i < maxSize; i++) {
		*(p + i) = NULL;
	}
}

//Destructor to deallocate the memory space occupied by the array p
pointerDataClass::~pointerDataClass() {
	delete[] p;
}

//the function insertAt inserts num into array p at the position specified by  
//index
void pointerDataClass::insertAt(int index, int num) {
	*(p + index) = num;
	length++;
}

//The function displayData displays all the array elements in p
void pointerDataClass::displayData() {
	for (int i = 0; i < maxSize; i++) {
		if (*(p + i) == NULL) {
			cout << "Null" << " ";
		}
		else {
			cout << *(p + i) << " ";
		}
	}
	cout << endl;
}

pointerDataClass::pointerDataClass(pointerDataClass& pdc) {
	maxSize = pdc.maxSize;
	length = pdc.length;
	p = new int[maxSize];
	for (int i = 0; i < pdc.maxSize; i++) {
		*(p + i) = *(pdc.p + i);
	}
}