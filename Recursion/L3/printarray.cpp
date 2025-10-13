#include <iostream>
using namespace std;
void display(int arr[],int n){
    if(n==-1) return;
    display(arr,n-1);
    cout<<arr[n]<<endl;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    return 0;
}