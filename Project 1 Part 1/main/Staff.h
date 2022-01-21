#ifndef STAFF_H
#define STAFF_H
#include "Employee.h"
class Staff : public Employee {
private:
	double hourlyrate;
public:
	Staff();
	Staff(std::string ln, std::string fn, std::string id, char s, std::string bd, double hr);
	void getData();
	double getHourlyRate();
	void setData(double hr);
	double monthlyEarning();
	void putData();
};
#endif 
