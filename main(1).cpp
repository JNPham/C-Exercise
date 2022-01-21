#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {
  //Create 2 lists called list1 and list2. Store integer numbers.
  list<int> list1;
  list<int> list2;

  int arr1[] = {40, 30, 20, 10};
  int arr2[] = {15, 20, 25, 30, 35};
  //Determine the array size of arr1 and arr2
  int arr1Size = sizeof(arr1)/sizeof(arr1[0]);
  int arr2Size = sizeof(arr2)/sizeof(arr2[0]);

  //Push elements of array arr1 into list1
  for (int i = 0; i < arr1Size; i++) {
    list1.push_back(arr1[i]);
  }

  //Push elements of array arr2 into list2
  for (int i = 0; i < arr2Size; i++) {
    list2.push_back(arr2[i]);
  }

  //reverse list1: 10 20 30 40
  list1.reverse();

  //merge list2 into list1
  list1.merge(list2);

  //remove duplicate 20 and 30 from list 1
  list<int>::iterator it1;
  it1 = unique(list1.begin(), list1.end());
  list1.resize(distance(list1.begin(), it1));

  //Display the content of list1 using iterator
  list<int>::iterator it2 = list1.begin();
  cout << "Displaying list1: ";
  for (int i = 0; i < list1.size(); i++) {
    if(i == list1.size() - 1) {
      cout << *it2 << endl;
    }
    else {
      cout << *it2 << ", ";
      advance(it2, 1);
    }
  }


  //Display the list1 in reverse
  list1.reverse();
  list<int>::iterator it3 = list1.begin();
  cout << "Displaying list1 after reversal: ";
  for (int i = 0; i < list1.size(); i++) {
    if(i == list1.size() - 1) {
      cout << *it3 << endl;
    }
    else {
      cout << *it3 << ", ";
      advance(it3, 1);
    }
  }

  //Find 25 in the list. If it's found, display "Found 25"; otherwise, display "Not found 25"
  list<int>::iterator it4 = list1.begin();
  bool found = false;
  for (int i = 0; i < list1.size(); i++) {
    if(*it4 == 25) {
      cout << "Found 25" << endl;
      found = true;
      break;
    }
    else {
      advance(it4, 1);
    }
  }
  if(found == false) {
    cout << "Not found 25" << endl;
  }
  return 0;
} 