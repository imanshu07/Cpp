#include <iostream>
#include <cmath>
using namespace std;
void findFactor(int n){
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0) cout<<i<<" ";
    }
    for(int i=sqrt(n);i>=1;i--){
        if(n%i==0) cout<<n/i<<" ";      // TC = (root n)
    }
}
int main(){
    findFactor(60);
    return 0;
}