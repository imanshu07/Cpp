#include <iostream>
#include <climits>
using namespace std;
int main(){

    int arr[8]={0,1,2,3,4,5,6,7};

    int a = INT_MAX;
    for(int i=0;i<=7;i++){
        if(arr[i]<a) a=arr[i];                        
    }
    cout<<"Second smallest among all is "<<a;
    return 0;
}