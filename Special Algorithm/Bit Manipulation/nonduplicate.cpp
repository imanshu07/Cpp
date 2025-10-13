#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,1,2,3,3,4,4,8,8};
    int n = sizeof(arr)/sizeof(arr[0]);   // x^0 = x also x^x = 0 (it's commutative)
    int res = 0;
    for(int i=0;i<n;i++){
        res = res ^ arr[i];
    }
    cout<<res; //non duplicate element
}