#include <iostream>
using namespace std;
void odd(int a,int b){
    if(a>b) odd(b,a);
    if(a%2==0) a = a+1;
    else a = a+2;
    for(a;a<b;a=a+2){
        cout<<a<<" ";    
    }
}
int main(){

    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;

    odd(a,b);

    return 0;
}