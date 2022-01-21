#include "Publication.h"
#include <iostream>

using namespace std;
Publication::Publication() 
{
	title = "N/A";
	price = 0;
};
Publication::Publication(string ti, float pri) {
	title = ti;
	price = pri;
}
//Define the function getData to get title and price
void Publication::getData() {
	cout << "Enter the title: " << endl; 
	getline(cin >> ws, title);
	cout << "Enter the price: " << endl; 
	cin >> price;
};
//Define the function putData to get title and price
void Publication::putData() const {
	cout << "The title is: " << title << endl;
	cout << "The price is: $" << price << endl;
}