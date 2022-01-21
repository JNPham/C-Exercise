#include "Employee.h"

Employee::Employee() {
	lastname = "N/A";
	firstname = "N/A";
	IDnum = "N/A";
	sex = M;
	birthdate = "N/A";
};

Employee::Employee(std::string ln, std::string fn, std::string id, char s, std::string bd) {
	lastname = ln;
	firstname = fn;
	IDnum = id;
	sex = Sex(s);
	string yr = bd.substr(bd.length() - 2, 2);
	birthdate = bd.substr(0, bd.length()-2);
	birthdate += "19" + yr;
};

void Employee::putData(){
	cout << "ID Employee number: " << IDnum << endl;
	cout << "Employee name: " << firstname << " " << lastname << endl;
	cout << "Birth date: " << birthdate << endl;
};

void Employee::getData() {
	getLastName();
	getFirstName();
	getID();
	getGender();
	getDOB();
};

void Employee::getLastName() {
	cout << "Enter last name: " << endl;
	cin >> lastname;
};

void Employee::setLastName(string ln) {
	lastname = ln;
};

void Employee::getFirstName() {
	cout << "Enter first name: " << endl;
	cin >> firstname;
};

void Employee::setFirstName(string fn) {
	firstname = fn;
};

void Employee::getID() {
	cout << "Enter ID: " << endl;
	cin >> IDnum;
};

void Employee::setID(string id) {
	IDnum = id;
};

void Employee::getGender() {
	char gender;
	cout << "Enter gender: " << endl;
	cin >> gender;
	sex = (Sex)gender;
};

void Employee::setGender(Sex s) {
	sex = s;
};

void Employee::getDOB() {
	string bd;
	cout << "Enter birth date: " << endl;
	cin >> bd;
	string yr = bd.substr(bd.length() - 2, 2);
	birthdate = bd.substr(0, bd.length() - 2);
	birthdate += "19" + yr;
};

void Employee::setDOB(string bd) {
	birthdate = bd;
};
