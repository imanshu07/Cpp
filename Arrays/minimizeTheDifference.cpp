#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[10] = {1,1,1,10,3,2,6,9,9,8};
    int k = 2;
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr + n);
    int ans = arr[n - 1] - arr[0]; // largest - smallest just to compare 

    for (int i = 1; i < n; i++) {
        int max_ = max(arr[n-1] - k, arr[i-1] + k); // adjacent ke pairs banake max
        int min_ = min(arr[0] + k, arr[i] - k); // adjacent ke pairs banake min 
        if (min_ < 0) continue;                    // adding -k on largest and +k and ulta for min 
        ans = min(ans, max_ - min_);
    }

    cout << ans; 
    return 0;
}
