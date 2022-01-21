#include<iostream>
//#include <bits/stdc++.h>
#include<stdexcept>
using namespace std;
int safeAdd(int num1, int num2)
{
    int sum = num1 + num2;
    if (num1 >= INT_MAX || num2 > INT_MAX)
    {
        throw overflow_error("Integer overflow error in safeAdd function");
    }
    return sum;
}

int main()
{
    int Array1[4] = { INT_MAX, INT_MAX, 1,42 };
    int Array2[4] = { INT_MAX,1,200, 1200 };
    for (int i = 0; i < 4; i++)
    {
        try {
            int sum = safeAdd(Array1[i],Array2[i]);
            cout << Array1[i] << "+" << Array2[i] << "=" << sum << endl;
        }
        catch(overflow_error& e ) {
            cout << Array1[i] << endl;
            cout << Array2[i] << endl;
            cout << e.what() << endl;
        }

    }
}