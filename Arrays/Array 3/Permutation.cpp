#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {2, 1, 5, 3}; // Example input

    int n = v.size();
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    int idx = -1;
    for (int i = n - 2; i >= 0; i--) {  // Finding the Pivot Index
        if (v[i] < v[i + 1]) {
            idx = i;
            break;
        }
    }

    if (idx == -1) {
        reverse(v.begin(), v.end()); // If the array is in descending order, reverse it
    } 
    
    else {
        reverse(v.begin() + idx + 1, v.end()); // Sort after the pivot

        int j = -1;
        for (int i = idx + 1; i < n; i++) {
            if (v[i] > v[idx]) {  // Finding the next greater number than pivot
                j = i;
                break;
            }
        }

        if (j != -1) {  // Ensure j is found before swapping
            swap(v[idx], v[j]);  // Swap idx and j
        }
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
