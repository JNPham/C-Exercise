#ifndef FACULTY_H
#define FACULTY_H
#include "Employee.h"
#include "Education.h"

class Faculty: public Employee {
public:
	enum Level{AS, AO, FU};
	Faculty();
	Faculty(std::string ln, std::string fn, std::string id, char s, std::string bd, std::string lv, std::string deg, std::string mj, int re);
	void getData();
	void setLevel(std::string lv);
	double monthlyEarning();
	void putData();
private:
	Level level;
	Education edu;
};
#endif // !FACULTY_H

