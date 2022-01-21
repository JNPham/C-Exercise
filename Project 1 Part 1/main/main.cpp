#include <iostream>
#include "Education.h"
#include "Employee.h"
#include "Faculty.h"
#include "Staff.h"
#include "Partime.h"
#include <vector>
#include <typeinfo>
#include <fstream>

int main()
{
	float partTimeMonthlyEarning = 0.00;
	float facultyMonthlyEarning = 0.00;
	float staffMonthlyEarning = 0.00;
	float employeeMonthlyEarning = 0.00;

	vector<Employee*> employees;
	employees.push_back(new Staff("Allen", "Paita", "123", 'M', "2/23/59", 50.00));
	employees.push_back(new Staff("Zapata", "Steven", "456", 'F', "7/12/64", 35.00));
	employees.push_back(new Staff("Rios", "Enrique", "789", 'M', "6/2/70", 40.00));
	employees.push_back(new Faculty("Johnson", "Anne", "243", 'F', "4/27/62", "Full", "Ph.D", "Engineering", 3));
	employees.push_back(new Faculty("Bouris", "William", "791", 'F', "3/14/75", "Associate", "Ph.D", "English", 1));
	employees.push_back(new Faculty("Andrade", "Christopher", "623", 'F', "5/22/80", "Assistant", "MS", "Physical Education", 0));
	employees.push_back(new Partime("Guzman", "Augusto", "455", 'F', "8/10/77", 35.00, 30));
	employees.push_back(new Partime("Depirro", "Martin", "678", 'F', "9/15/87", 30.00, 15));
	employees.push_back(new Partime("Aldaco", "Marque", "945", 'M', "11/24/88", 20.00, 35));
	for (int i = 0; i < employees.size(); i++) {
		cout << i + 1 << ".";
		employees[i]->putData();
		auto& type = *employees[i];
		string employeeType = typeid(type).name();
		//cout << "Empl type: " << employeeType << endl;
		if (employeeType == "class Partime") {
			partTimeMonthlyEarning += employees[i]->monthlyEarning();
		}
		else if (employeeType == "class Faculty") {
			facultyMonthlyEarning += employees[i]->monthlyEarning();
		}
		else if (employeeType == "class Staff") {
			staffMonthlyEarning += employees[i]->monthlyEarning();
		}
		else {
		}
		employeeMonthlyEarning += employees[i]->monthlyEarning();

		cout << endl;
	}

	cout << "Total monthly salary for all the part-time staff: $" << partTimeMonthlyEarning << endl;

	cout << "Total monthly salary for faculty: $" << facultyMonthlyEarning << endl;

	cout << "Total monthly salary for all staff: $" << staffMonthlyEarning << endl;

	cout << "Total monthly salary for all employees: $" << employeeMonthlyEarning << endl;
	
	bool cont = true;
	char c;
	while (cont) {
		cout << endl;
		cout << "--------------------------------------------------" << endl;
		cout << "Choose a feature: " << endl;
		cout << "'a' -- add data for an employee \n"
			 << "'d' --display data for all employees \n"
			 << "'w' --write all employee data to file \n"
			 << "'r' --read all employee data from file \n"
			 << "'x' --exit" << endl;
		cin >> c;
		if (c == 'a') {
			cout << "Adding option: " << endl;
			cout << " 'f' to add a Faculty \n"
				 << " 's' to add a Staff \n"
				 << " 'p' to add a Part-time \n";
			char addChoice;
			cin >> addChoice;
			if (addChoice == 'f') {
				Faculty temp = Faculty();
				temp.getData();
				employees.push_back(&temp);
			}
			else if (addChoice == 's') {
				Staff temp = Staff();
				temp.getData();
				employees.push_back(&temp);
				//employees[employees.size()-1]->getData();
				//employees[employees.size() - 1]->putData();
			}
			else if (addChoice == 'p') {
				Partime temp = Partime();
				temp.getData();
				employees.push_back(&temp);
			}
			else {
				cout << "Invalid input" << endl;
			}
		}
		else if (c == 'd'){
			for (int i = 0; i < employees.size(); i++) {
				cout << i + 1 << ".";
				employees[i]->putData();
				cout << endl;
			}
		}
		else if (c == 'w'){
			ofstream outfile("fdata.txt");
			if (!outfile) {
				cout << "Can't open file\n";
			}
			for (int i = 0; i < employees.size(); i++) {
				//outfile << employees[i];
				int size = 0;
				if (typeid(employees[i]) == typeid(Faculty)) {
					size = sizeof(Faculty);
				}
				else if (typeid(employees[i]) == typeid(Staff)) {
					size = sizeof(Staff);
				}
				else if (typeid(employees[i]) == typeid(Partime)) {
					size = sizeof(Partime);
				}
				outfile.write(reinterpret_cast<char*>(employees[i]), size);
				outfile << endl;
				if (!outfile) {
					cout << "Can't write to file\n";
				}
			}
			cout << "File written\n";
		}
		else if (c == 'r'){

		}
		else if (c == 'x') {
			cont = false;
		}
		else {
			cout << "Invalid input" << endl;
		}
	};
	return 0;
}