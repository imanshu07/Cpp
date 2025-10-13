#include <iostream>
using namespace std;
void display(int a[]){     // techincally int a[] is also int *a same meaning hai no error
    int size = sizeof(a)/sizeof(a[0]); // smjho why?? and also ki pass by refrence is used when array is passed in function
}                                      // always size pass kro with array to avoid error  
int main(){
    int arr[5] = {0,1,2,3,4};
    display(arr);

    return 0;
}