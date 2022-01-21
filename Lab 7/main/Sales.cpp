#include "Sales.h"
#include <iostream>
using namespace std;

Sale::Sale() {
	for (int i = 0; i < 3; i++) {
		saleArray[i] = 0;
	}
}

void Sale::getData() {
	for (int i = 0; i < 3; i++) {
		cout << "Enter sale amount: " << endl;
		cin >> saleArray[i];
	}
}

void Sale::putData() {
	cout << "Three months of sales are: " << endl;
	for (int i = 0; i < 3; i++) {
		cout << '$' << saleArray[i] << endl;
	}
}
