#ifndef PARTIME_H
#define PARTIME_H
#include "Staff.h"
class Partime: public Staff {
private:
	int hourperweek;
public:
	Partime();
	Partime(std::string ln, std::string fn, std::string id, char s, std::string bd, double hr, int hpw);
	void getData();
	void setHourPerWeek(int hpw);
	double monthlyEarning();
	void putData();
};
#endif // !PARTIME_H
