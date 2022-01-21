#include "Partime.h"

Partime::Partime():Staff() {
	hourperweek = 0;
}
Partime::Partime(std::string ln, std::string fn, std::string id, char s, std::string bd, double hr, int hpw) : Staff(ln, fn, id, s, bd, hr) {
	hourperweek = hpw;
};
void Partime::getData() {
	Staff::getData();
	cout << "Enter hours worked per week: " << endl;
	cin >> hourperweek;
};
void Partime::setHourPerWeek(int hpw) {
	hourperweek = hpw;
};
double Partime::monthlyEarning() {
	return Staff::getHourlyRate() * hourperweek * 4;
};
void Partime::putData() {
	//Employee::putData();
	Staff::putData();
	cout << "Hours works per month: " << hourperweek * 4 << endl;
	cout << "Monthly Salary: $" << monthlyEarning() << endl;
};