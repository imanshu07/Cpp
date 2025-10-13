#include <iostream>
using namespace std;
int stair(int n){

    if(n==2) return 2;
    if(n==1 || n==0) return 1;    // Base Cases


    return stair(n-1) + stair(n-2) + stair(n-3);

}
int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n; 
    
    cout<<"Total no of ways: "<<stair(n);
    return 0;
}