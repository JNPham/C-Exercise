#include "Staff.h"
#include "Employee.h"
#include <iostream>
using namespace std;

Staff::Staff():Employee() {
	hourlyrate = 0;
};

Staff::Staff(std::string ln, std::string fn, std::string id, char s, std::string bd, double hr):Employee(ln, fn, id, s, bd) {
	hourlyrate = hr;
}

void Staff::getData() {
	Employee::getData();
	cout << "Enter hourly rate: " << endl;
	cin >> hourlyrate;
}


double Staff::getHourlyRate() {
	return hourlyrate;
}

void Staff::setData(double hr) {
	hourlyrate = hr;
}

double Staff::monthlyEarning() {
	return hourlyrate * STAFF_MONTHLY_HOURS_WORKED;
}

void Staff::putData() {
	Employee::putData();
	cout << "Full Time" << endl;
	cout << "Monthly Salary: $" << monthlyEarning() << endl;
}