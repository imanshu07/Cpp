#include <iostream>
using namespace std;
int main(){
    int arr[5] = {0,1,2,3,4};
    int *ptr = arr;
    cout<<*ptr<<endl;
    ptr++;
    cout<<*ptr<<endl;
    ptr = ptr + 3;
    cout<<*ptr;
   
}