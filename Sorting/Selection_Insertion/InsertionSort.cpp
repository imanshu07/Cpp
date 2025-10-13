#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main(){

    int arr[] = {5,2,3,1,4};
    int n=5;
    for(int ele:arr ){
        cout<<ele<<" ";
    }

    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
       
    }

    cout<<endl;
    for(int ele:arr ){
        cout<<ele<<" ";
    }
}
