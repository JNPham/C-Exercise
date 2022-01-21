#include<iostream>
using namespace std;
int main()
{
	long value1 = 200000;
	long value2;
	long* longPtr;
	longPtr = &value1;
	cout << "The value of the object pointed to by longPtr: " << *longPtr << endl;
	value2 = *longPtr;
	cout << "The value of value2: " << value2 << endl;
	cout << "The address of value1: " << &value1 << endl;
	cout << "The address stored in longPtr: " << longPtr << endl;
}