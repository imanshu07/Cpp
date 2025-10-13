#include <iostream>
using namespace std;
int main(){
    int x, count= 0;
    cout<<"Enter a number : ";
    cin>>x;

    if(x==0) count = 1;

    for(int i = 0;x>0;i++){
        x = x/10;
        count++;
    }

    cout<<"The number of digits in given number is : "<<count;
    return 0;
}