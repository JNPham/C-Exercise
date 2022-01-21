#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Enter the power n of (x+y)^n: " << endl;
    cin >> n;
    vector<vector<int>> pascal_tria(n+1, vector<int>(n+1));
    for (int i = 0; i < n+1; i++) {
        cout << "Coefficients of (x + y)^" << i << " =====> ";
        for (int j = 0; j < i+1; j++) {
            if (i == j or j==0) { pascal_tria[i][j] = 1; }
            else {
                pascal_tria[i][j] = pascal_tria[i - 1][j - 1] + pascal_tria[i - 1][j];
            }
            cout << pascal_tria[i][j] << " ";
        }
        cout << endl;
    }
}

