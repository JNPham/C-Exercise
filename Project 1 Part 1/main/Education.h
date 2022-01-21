#ifndef EDUCATION_H
#define EDUCATION_H
#include <iostream>
using namespace std;

class Education {
private:
	string degree;
	string major;
	int research;
public:
	Education();
	Education(string deg, string mj, int re);
	void getDegree();
	void getMajor();
	void getResearch();
	void setDegree(string deg);
	void setMajor(string mj);
	void setResearch(int re);
};
#endif

