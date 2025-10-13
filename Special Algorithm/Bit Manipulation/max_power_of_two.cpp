#include <iostream>
using namespace std;
int count_set_bits(int n){
    int temp = 0;
    while(n>0){
        temp = n;
        n = (n & (n-1));
    }
    return temp;
}
int main(){
    
    cout<<count_set_bits(100); // 100 ke barabar ya usse just choti 2 ki power
    return 0;
}