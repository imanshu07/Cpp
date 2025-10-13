#include <iostream>
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

    int product = 1;
    for(int i=0;i<n;i++){
        product = product*arr[i];
    }

    cout<<"Product of all elements is "<<product;
    return 0;
}