#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <cstring>
using namespace std;

class Employee {
public:
	enum Sex {M = 'M', F = 'F'};
	const float FACULTY_MONTHLY_SALARY = 5000.00;
	const int STAFF_MONTHLY_HOURS_WORKED = 160;
	Employee();
	Employee(std::string ln, std::string fn, std::string id, char s, std::string bd);
	virtual void putData();
	virtual void getData();
	void getLastName();
	void setLastName(string ln);
	void getFirstName();
	void setFirstName(string fn);
	void getID();
	void setID(string id);
	void getGender();
	void setGender(Sex s);
	void getDOB();
	void setDOB(string bd);
	virtual double monthlyEarning() = 0;
private:
	string lastname;
	string firstname;
	string IDnum;
	Sex sex;
	string birthdate;
};

#endif

