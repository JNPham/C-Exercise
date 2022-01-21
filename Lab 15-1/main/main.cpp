#include <iostream>
#include <list>
using namespace std;

static void display(list<int> l) {
    for (auto p = l.begin(); p != l.end(); p++) {
        cout << *p << " ";
    }
    cout << endl;
}

static void reverse_list(list<int> &l) {
    list<int>::iterator p1 = l.begin();
    list<int>::iterator p2 = l.end();
    p2--;
    while (p1 != p2)
    {
        swap(*p1, *p2);
        p1++;
        if (p1 == p2) {
            break;
        }
        p2--;
    }
}

int main()
{
    //Fill in the list with 2, 4, 6, 8, 10, and 12
    list<int> l1 {2, 4, 6, 8, 10, 12};
    
    //Display the list before reverse
    cout << "Before reverse: " << endl;
    display(l1);
    
    // Reverse the list use two iterators and a swap function
    reverse_list(l1);
    
    //Display the list 
    cout << "After reverse: " << endl;
    display(l1);

    //Fill in the list with 2, 4, 6, 8, 10, 12, an 14
    list<int> l2 {2, 4, 6, 8, 10, 12, 14};

    //Display the list before reverse
    cout << "Before reverse: " << endl;
    display(l2);

    //Reverse the list use two iterators and a swap function
    reverse_list(l2);

    //Display the list 
    cout << "After reverse: " << endl;
    display(l2);
    return 0;
}

