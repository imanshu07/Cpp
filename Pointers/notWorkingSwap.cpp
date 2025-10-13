#include <iostream>
using namespace std;
int swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
    return(a,b);
}
int main(){
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
}