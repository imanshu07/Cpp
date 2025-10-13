#include <iostream>
using namespace std;

void hanoi(int n,char a,char b,char c){         
    
    if(n==0) return;
    hanoi(n-1,a,c,b);
    cout<<a<<" -> "<<c<<endl;
    hanoi(n-1,b,a,c); 

}

int main(){

    int n;
    cout<<"Enter a number: ";              //Minimum moves 2^n - 1 
    cin>>n;

    hanoi(n,'A','B','C');     // Starting Helper Destination
    
    return 0;
}