#ifndef STUDENT_H
#define STUDENT_H
#include <string>;

class Student
{
private:
	std::string name;
	int score;
	char grade;
public:
	Student();
	Student(std::string name, int score);
	~Student();
	void print();
};
#endif 
