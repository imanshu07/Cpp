#include <iostream>
using namespace std;
int main(){

    int arr[] = {0,1,3,4,6,7,8,9,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int lo = 0,hi = n-1;
    int ans = -1;

    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==mid) lo = mid+1;
        else{
            ans = mid;
            hi = mid-1;
        }
    }

    cout<<ans;
    return 0;
}