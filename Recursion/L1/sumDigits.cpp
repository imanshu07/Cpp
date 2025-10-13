#include <iostream>
using namespace std;
int sum(int n){
    if(n==0) return 0;
    int lastdigit = n%10;
    int remaning = n/10;
    return sum(remaning) + lastdigit;
}
int main(){
    int n = 12345;
    cout<<sum(n);
    return 0;
}
