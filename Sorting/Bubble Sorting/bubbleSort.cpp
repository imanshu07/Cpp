#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    int arr[6] = {-4,0,3,2,1,26};
    int n = 6;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // bubble sort  (Stable sorting)
    for(int i=0;i<n-1;i++){         // n-1 passes
        // traverse
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag==true) break;
    }

    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}