#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;

    int multi = a*b;

    while(b>0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    cout<<"GCD : "<<a<<endl;
    cout<<"LCM : "<<multi/a;
    return 0;
}