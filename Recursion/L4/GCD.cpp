#include <iostream>
using namespace std;

int GCD(int a,int b){     // TC is log(a+b) mat pucho kaise!
    if(a==0) return b;
    else return GCD(b%a,a);
}
int main(){
    int a = 10000;
    int b = 10001;
    cout<<GCD(a,b);
    return 0;
}