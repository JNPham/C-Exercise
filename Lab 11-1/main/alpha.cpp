#include "alpha.h"

alpha::alpha() {
	data = 0;
}

alpha::alpha(int n) {
	data = n;
}

void alpha::display() {
	cout << data;
}

alpha::alpha(alpha& a) {
	data = a.data;
}

alpha& alpha::operator=(alpha& a) {
	data = a.data;
	return *this;
}
void alpha::setData(int n) {
	data = n;
}