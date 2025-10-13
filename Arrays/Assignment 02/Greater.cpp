#include <iostream>
using namespace std;
int main(){

    int x = 5;
    int arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int count = 0;
    for(int i=0;i<10;i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<count;

    return 0;
}