#ifndef PUBLICATION_SALE_H
#define PUBLICATION_SALE_H
#include <iostream>
using namespace std;

class Sale {
public:
    Sale();
    //Declare functions getData and putData
    void getData();
    void putData();
private:    
    //Declare an array to store sales for three months
    float saleArray[3];
};
#endif //PUBLICATION_SALE_H
