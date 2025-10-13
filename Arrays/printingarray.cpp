#include <iostream>
using namespace std;
int main(){
    int arr[] = {4,2,6,1,7};

    int *ptr=arr;
    for(int i=0;i<5;i++){
        cout<<*ptr<<" ";       // interesting way to print 
        ptr++;
    }
    cout<<endl;

    for(int i=0;i<5;i++){
        cout<<i[arr]<<" ";       // ptr[i] , i[arr], i[ptr] all gives same result  
        ptr++;
    }

    return 0;
}