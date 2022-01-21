#ifndef PUBLICATION_PUBLICATION_H
#define PUBLICATION_PUBLICATION_H
#include <iostream>
#include <string>
using namespace std;

class Publication {

public:
	//Declare two functions getData and putData
	Publication();
	Publication(string ti, float pri);
	void getData();
	void putData() const;
private:
	//Declare title and price
	std::string title;
	float price;
};
#endif //PUBLICATION_PUBLICATION_H
