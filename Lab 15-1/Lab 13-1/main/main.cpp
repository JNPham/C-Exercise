#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int col = 10;
    int row = 10;
    vector<vector<int>> table(row, vector<int>(col));
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            cout << i * j << "  ";
        }
        cout << endl;
    }
}

