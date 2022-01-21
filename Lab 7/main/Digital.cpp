#include "Digital.h"
#include "Publication.h"
#include "Sales.h"
#include <iostream>

Digital::Digital() {
	Publication();
	Sale();
	storageCap = 0;
}

void Digital::getData() {
	Publication::getData();
	Sale::getData();
	cout << "Enter storage capacity in MG bytes: " << endl;
	cin >> storageCap;
}

void Digital::putData() {
	Publication::putData();
	Sale::putData();
	cout << "Storage capacity in MG bytes is: " << storageCap << endl;
	cout << endl;
}