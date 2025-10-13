#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n){
    if(n==1) return false;
    int fac = 0;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            fac = i;
            cout<<fac<<endl;
            return false;
        }
    }
    return true;
}
int main(){
    cout<<boolalpha<<isPrime(1001)<<endl;
    return 0;
}