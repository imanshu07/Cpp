#include <iostream>
using namespace std;             // Leet code 240

int main() {
    int matrix[5][5] = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };

    int row = sizeof(matrix) / sizeof(matrix[0]);       // 5
    int col = sizeof(matrix[0]) / sizeof(matrix[0][0]); // 5

    int target;
    cout<<"Enter a Target: ";
    cin>>target;
    
    int i = 0, j = col - 1;

    while (i < row && j >= 0){
        if (matrix[i][j] == target) {
            cout << "Found" << endl;
            return 0; // Exit early
            } 
        else if (matrix[i][j] > target) {
            j--;
            } 
        else {
            i++;
            }
    }

    cout << "Not Found" << endl;
    return 0;
}
