#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,2,3,3,3,3,3,4,4,5,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 1;
    int lo = 0;
    int hi = n-1;

    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==target){
            if(arr[mid-1]==target) hi = mid-1;
            else{
                cout<<mid;
                break;
            }
        }
        else if(arr[mid]<target) lo = mid+1;
        else hi = mid - 1;
    }
    return 0;
}