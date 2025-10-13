#include <iostream>
using namespace std;
int main(){

    int arr [] = {1,2,3,4,5,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    // formation of prefix sum
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    // check if any x exist
    int idx = -1;
    for(int i=0;i<n;i++){         // 0 to x = x+1 to n-1  
        if(2*arr[i] == arr[n-1]){ // arr[x] = arr[n-1] - arr[x]; // ye mat puchna x kyu likha hai not x+1 😔
            idx = i;
            break;
        }
    }
    if(idx!=-1) cout<<"Yes it can be partitioned at index: "<<idx;
    else cout<<"Cannot be partitioned";
    return 0;
}