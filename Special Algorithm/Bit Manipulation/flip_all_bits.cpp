#include <iostream>
using namespace std;
int maxPower(int n){
    n = n | (n>>1);
    n = n | (n>>2);
    n = n | (n>>4);
    n = n | (n>>8);
    return n; // at the end 11111.. hi to bachega
}
int main(){
    int n = 13; // 1101 ^ 1111(15) = 0010 (2)
    cout<<(n^maxPower(n));
    return 0;
}