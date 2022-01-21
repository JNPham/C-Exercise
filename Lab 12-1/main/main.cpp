#include <vector>
#include<algorithm>
#include<numeric>//for accumulator operations
#include <iostream>
using namespace std;

void display(vector<double> &v) {
    for (vector<double>::iterator i = v.begin();
                                  i != v.end();
                                  ++i)
    {
        cout << *i << " ";
    }
    cout << endl;
}

int main()
{   // an array of doubles
    double arr[] = { 1.1, 2.2, 3.3, 2.2, 4.4 };
    
    //Determine the array size
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    
    // initialize vector v1 to array arr
    vector<double> v1(arr, arr + arrSize);
    
    //Display the contents of vector v1
    cout << "Display vector v1: "<< endl;
    display(v1);
    
    // Sorting the Vector in Ascending order
    sort(v1.begin(), v1.end());
    
    //Display the content of vector v1 after sorting
    cout << "After sorting: " << endl;
    display(v1);
    
    // Reversing the Vector v1
    reverse(v1.begin(), v1.end());

    //Display the content of vector v1
    cout << "After reversing: " << endl;
    display(v1);

    //Display the maximum element of vector v1
    cout << "Maximum element of vector v1: " << *max_element(v1.begin(),v1.end()) << endl;

    //Display the minimum element of vector v1
    cout << "Minimum element of vector v1: " << *min_element(v1.begin(),v1.end()) <<endl;

    //Display the accumulation of all elements in vector v1
    // Starting the summation from 0
    double sum1 = accumulate(v1.begin(), v1.end(), 0.0);
    cout << "Accumulation of all elements in vector v1: " << sum1 << endl;

    // Counts the occurrences of 2.2 from 1st to last element
    //Display the counts
    const int count_num = count(v1.begin(),v1.end(), 2.2);
    cout << "The occurrences of 2.2 is: " << count_num << endl;

    // Delete second element of vector
    v1.erase(v1.begin() + 1);

    //Display the v1 after erasing the element
    cout << "After deleting: " << endl;
    display(v1);

    //Remove the duplicate occurrences
    v1.erase(unique(v1.begin(), v1.end()), v1.end());
    cout << "After removing duplicates: " << endl;
    display(v1);
    
    return 0;
}