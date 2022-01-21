#include "Education.h"
#include <iostream>
#include <string>
using namespace std;

Education::Education() {
	degree = "N/A";
	major = "N/A";
	research = 0;
};
Education::Education(string deg, string mj, int re) {
	degree = deg;
	major = mj;
	research = re;
};
void Education::getDegree() {
	cout << "Enter degree (MS or PhD): " << endl;
	cin >> degree;
};
void Education::getMajor() {
	cout << "Enter major: " << endl;
	getline(cin >> ws, major);
};
void Education::getResearch() {
	cout << "Enter number or researches: " << endl;
	cin >> research;
};
void Education::setDegree(string deg) {
	degree = deg;
};
void Education::setMajor(string mj) {
	major = mj;
};
void Education::setResearch(int re) {
	research = re;
};