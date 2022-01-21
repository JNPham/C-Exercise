#ifndef PERSON_H
#define PERSON_H

#include<iostream>

using namespace std;

class person {
private:
	string lastName;
	string firstName;
	long phoneNumber;
public:
	person();
	person(string lana, string fina, long pho);
	friend bool operator <(const person&, const person&);
	friend bool operator==(const person&, const person&);
	void display() const;
};
#endif
