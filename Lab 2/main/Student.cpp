#include "Student.h"
#include <iostream>
using namespace std;

Student::Student() {};
Student::Student(string nm, int sc) 
{
	name = nm;
	score = sc;
	char temp[] = { 'F','F','F','F','F','F','D','C','B','A','A' };
	grade = temp[score / 10];
};
Student::~Student() {};
void Student::print() 
{
	cout << name << "     " << score << "     " << grade << endl;
};