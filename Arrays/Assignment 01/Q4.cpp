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

    for(int i=0;i<n;i++){
        int a = arr[i];
        for(int j=0;j<=i;j++){
            
        }
    }
    return 0;
}