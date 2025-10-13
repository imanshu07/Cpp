#include <iostream>
#include <climits>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<" Arr["<<i<<"] : ";
        cin>>arr[i];
        cout<<endl;
    }

    int a = INT_MAX;
    for(int i=0;i<=n;i++){
        if(arr[i]<a) a=arr[i];                        
    }
    cout<<"Smallest among all is "<<;
    return 0;
}