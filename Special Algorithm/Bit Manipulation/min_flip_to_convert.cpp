#include <iostream>
using namespace std;
int main(){
    int x = 32; // 100000
    int y = 23; // 010111
    cout<<__builtin_popcount(x^y); // 5
    return  0;
}