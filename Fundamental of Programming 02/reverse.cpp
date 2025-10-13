#include <iostream>
using namespace std;
int main(){

    int n,sum=0,b;
    cout<<"Enter a number : ";
    cin>>n;

    for(int i=0;n>0;i++){
        b = n%10;
        n = n/10;
        sum = (sum*10) + b;        
    }
    
    cout<<"The sum of given digits is : "<<sum;
    return 0;
}