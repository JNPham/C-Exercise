#ifndef PUBLICATION_DIGITAL_H
#define PUBLICATION_DIGITAL_H
#include "Publication.h"
#include "Sales.h"

class Digital : public Publication, public Sale {
private:
	int storageCap;
public:
	Digital();
	void getData();
	void putData();
};
#endif //PUBLICATION_DIGITAL_H
