#include <iostream>
#include <vector>
using namespace std;

static void display(vector<int> v) {
    for (auto p = v.begin(); p != v.end(); p++) {
        cout << *p << " ";
    }
    cout << endl;
}

static void reverse_vector(vector<int>& v) {
    vector<int>::iterator p1 = v.begin();
    vector<int>::reverse_iterator p2 = v.rbegin();
    while (&*p1 != &*p2)
    {
        swap(*p1, *p2);
        p1++;
        if (&*p1 == &*p2) {
            break;
        }
        p2++;
    }
}

int main()
{
    //Fill in the vector with 2, 4, 6, 8, 10, and 12
    vector<int> v1{ 2, 4, 6, 8, 10, 12 };

    //Display the vector before reverse
    cout << "Before reverse: " << endl;
    display(v1);

    // Reverse the vector use two iterators and a swap function
    reverse_vector(v1);

    //Display the vector 
    cout << "After reverse: " << endl;
    display(v1);

    //Fill in the vector with 2, 4, 6, 8, 10, 12, an 14
    vector<int> v2{ 2, 4, 6, 8, 10, 12, 14 };

    //Display the vector before reverse
    cout << "Before reverse: " << endl;
    display(v2);

    //Reverse the vector use two iterators and a swap function
    reverse_vector(v2);

    //Display the vector 
    cout << "After reverse: " << endl;
    display(v2);
    return 0;
}
