#include "Person.h"
#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

class comparePersons {
  public:
    bool operator() (const person* ptrP1, const person* ptrP2) const
    { return *ptrP1 < *ptrP2; }
}; 

int main() {
    person* ptrP1 = new person("KuangThu", "Bruce", 4157300);
    person* ptrP2 = new person("Deauville", "William", 8435150);
    person* ptrP3 = new person("Wellington", "John", 9207404);
    person* ptrP4 = new person("Bartoski", "Peter", 6946473);
    person* ptrP5 = new person("Fredericks", "Roger", 7049982);
    person* ptrP6 = new person("McDonald", "Stacey", 7764987);
    person* ptrP7 = new person("KuangThu", "Bruce", 4157300);
    person* ptrP8 = new person("Deauville", "William", 8435150);

    multiset<person*, comparePersons> ptrPSet;
    multiset<person*, comparePersons>::iterator iter;
    ptrPSet.insert(ptrP1);
    ptrPSet.insert(ptrP2);
    ptrPSet.insert(ptrP3);
    ptrPSet.insert(ptrP4);
    ptrPSet.insert(ptrP5);
    ptrPSet.insert(ptrP6);
    ptrPSet.insert(ptrP7);
    ptrPSet.insert(ptrP8);

    cout << "\nNumber of entries = " << ptrPSet.size();

    iter = ptrPSet.begin();
    while (iter != ptrPSet.end()) {
        (*iter++)->display();
    };

    string searchLastName, searchFirstName;
    cout << "\n\nEnter last name of person to search for: ";
    cin >> searchLastName;
    cout << "Enter first name: ";
    cin >> searchFirstName;

    person searchPerson(searchLastName, searchFirstName, 0);

    person* sPerson = &searchPerson;
    int cntPersons = ptrPSet.count(sPerson);
    cout << "Number of persons with this name = " << cntPersons;

    iter = ptrPSet.lower_bound(sPerson);
    while (iter != ptrPSet.upper_bound(sPerson)) {
        (*iter++)->display();
    };
    cout << endl;
    return 0;
}