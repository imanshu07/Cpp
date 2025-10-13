#include <iostream>
#include <vector>
using namespace std;

vector<int> removeNum(vector<int> nrr, vector<int> arr, int n, int idx) {
    if (idx == n) {
        for (int i = 0; i < nrr.size(); i++) {
            cout << nrr[i] << " ";
        }
        return nrr;
    }

    if (arr[idx] != 1) {
        nrr.push_back(arr[idx]);
    }

    return removeNum(nrr, arr, n, idx + 1);
}

int main() {
    vector<int> arr = {1, 2, 1, 2, 1, 6, 7, 9, 0, 5, 1};
    int n = arr.size();
    vector<int> nrr;

    removeNum(nrr, arr, n, 0);
    return 0;
}
