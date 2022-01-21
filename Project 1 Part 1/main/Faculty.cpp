#include "Faculty.h"

Faculty::Faculty():Employee(), edu() {
	level = AS;
};
Faculty::Faculty(std::string ln, std::string fn, std::string id, char s, std::string bd, std::string lv, std::string deg, std::string mj, int re) :
				Employee(ln, fn, id, s, bd) , edu(deg, mj, re) {
	if (lv == "Assistant") {
		level = AS;
	}
	else if (lv == "Associate") {
		level = AO;
	}
	else if (lv == "Full") {
		level = FU;
	}
};
void Faculty::getData() {
	Employee::getData();
	cout << "Enter level: " << endl; 
	string temp;
	cin >> temp;
	if (temp == "Assistant") {
		level = AS;
	}
	else if (temp == "Associate") {
		level = AO;
	}
	else {
		level = FU;
	}
	edu.getDegree();
	edu.getMajor();
	edu.getResearch();
};

void Faculty::setLevel(string lv) {
	if (lv == "Assistant") {
		level = AS;
	}
	else if (lv == "Associate") {
		level = AO;
	}
	else if (lv == "Full") {
		level = FU;
	}
};

double Faculty::monthlyEarning() {
	switch (level) {
	case AS:
		return Employee::FACULTY_MONTHLY_SALARY;
	case AO:
		return 1.2 * Employee::FACULTY_MONTHLY_SALARY;
	case FU:
		return 1.4 * Employee::FACULTY_MONTHLY_SALARY;
	}
};
void Faculty::putData() {
	Employee::putData();
	switch (level) {
	case AS:
		cout << "Assistant Professor" << endl;
		break;
	case AO:
		cout << "Associate Professor" << endl;
		break;
	case FU:
		cout << "Full Professor" << endl;
		break;
	}
	cout << "Monthly Salary: $" << monthlyEarning() << endl;
};
