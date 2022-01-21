#include "Array.h"
Array::Array(int cap)
{
	capacity = cap;
	size = 0;
	arr = new int[capacity];
}

Array::~Array() {}

void Array::moveTowardFront(int index) //when delete
{
	for (int i = index; i < size-1; i++) {
		*(arr + i) = *(arr + i + 1);
	}
}

void Array::moveTowardEnd(int index) //when insert
{
	for (int i = size; i >= index; i--) {
		*(arr + i + 1) = *(arr + i);
	}
}

void Array::insert(int value)
{
	int index = 0;
	for (int i = 0; i < size; i++) {
		if (*(arr + i) < value) {
			index = i;
			break;
		}
		else {
			index = size;
		}
	}
	moveTowardEnd(index);
	*(arr + index) = value;
	size++;
}

void Array::remove(int value)
{
	int index = 0;
	bool found = false;
	for (int i = 0; i < size; i++) {
		if (*(arr + i) == value) {
			index = i;
			found = true;
			moveTowardFront(index);
			size--;
		}
	}
	if (found == false) {
		cout << "Cannot delete " << value << " because it is not in the array" << endl;
	}
}

void Array::print() const
{
	for (int i = 0; i < size; i++) {
		cout << *(arr + i) << " ";
	}
	cout << endl;
}
