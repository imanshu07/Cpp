#include <iostream>
using namespace std;
int max_power_of_two(int n){
    n = n | (n>>1);
    n = n | (n>>2);
    n = n | (n>>4);
    n = n | (n>>8);
    return (n+1)>>1;        // (n+1)/2
}
int main(){
    cout<<max_power_of_two(24); //11000
    return 0;
}