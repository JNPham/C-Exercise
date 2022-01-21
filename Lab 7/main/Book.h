//Class Book is created from classes Publication and Sales

#ifndef PUBLICATION_BOOK_H
#define PUBLICATION_BOOK_H
#include "Publication.h"
#include "Sales.h"
class Book: public Publication, public Sale {
private:
	int pageCount;
public:
	Book();
	void getData();
	void putData();
};
#endif //PUBLICATION_BOOK_H