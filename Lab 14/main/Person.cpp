#include "Person.h"
#include <iostream>
#include <set>
#include <string>
using namespace std;

person::person() {
    lastName = "blank";
    firstName = "blank";
    phoneNumber = 0;
}

person::person(string lana, string fina, long pho) {
    lastName = lana;
    firstName = fina;
    phoneNumber = pho;
}

void person::display() const {
    cout << endl << lastName << ",\t" << firstName << "\t\tPhone: " << phoneNumber;
}

bool operator<(const person& p1, const person& p2) {
    if (p1.lastName == p2.lastName) {
        return (p1.firstName < p2.firstName) ? true : false;
    }
    return (p1.lastName < p2.lastName) ? true : false;
}

bool operator==(const person& p1, const person& p2) {
    return (p1.lastName == p2.lastName && p1.firstName == p2.firstName) ? true : false;
}