#include <iostream>
#include <cmath>
using namespace std;

int bin2Dec(const string& binaryString)
{
    int result = 0;
    int indexcount = 0;
    for (int i = binaryString.length() - 1; i >= 0; i--)
    {
        if (binaryString[i] == '1')
        {
            result += pow(2, indexcount);
        }
        indexcount++;
    }
    return result;
}

int main()
{
    string str;
    cout << "Enter a binary string: ";
    cin >> str;
    cout << "The decimal result: " << bin2Dec(str);
    return 0;
}
