#include <iostream>
using namespace std;
int main(){

    int x=4;
    int *ptr=&x; //ok
    int *ptr1=x;  // error

    int arr[5] ={0,1,2,3,4};
    int *ptr2 = &arr; // error
    int *ptr3 = arr; // OK works
    int *ptr4 = &arr[0]; // OK works
    int *ptr5 = arr[0]; // error

    return 0;
}