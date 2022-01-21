#include "Publication.h"
#include "Sales.h"
#include "Book.h"

Book::Book() {
	Publication();
	Sale();
	pageCount = 0;
}

void Book::getData() {
	Publication::getData();
	Sale::getData();
	cout << "Enter page count of the book: " << endl;
	cin >> pageCount;
}

void Book::putData() {
	Publication::putData();
	Sale::putData();
	cout << "Page count of the book is: " << pageCount << endl;
	cout << endl;
}
