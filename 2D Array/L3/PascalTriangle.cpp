#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m;
    cout << "Enter number of rows: ";
    cin >> m;

    vector<vector<int>> v; // No pre-allocation

    for (int i = 0; i < m; i++) {
        vector<int> row; // Create a new row

        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                row.push_back(1);
            } 
            else{
                row.push_back(v[i - 1][j - 1] + v[i - 1][j]);
            }
        }

        v.push_back(row); // Add the row to the main vector
    }

    // Print Pascal's Triangle
    for (int i = 0; i < m; i++) {
        for (int j = 0; j <= i; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
