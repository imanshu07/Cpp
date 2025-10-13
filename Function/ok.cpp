#include <iostream>
using namespace std;
int fact(int a){
    int m = 1;
    for(int k=2;k<=a;k++){
        m = m*k;
    }
    return m;
}

int combination(int a,int b){
    int ncr = fact(a)/(fact(b)*fact(a-b));
    return ncr;
}
int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    for(int i=0;i<=n;i++){
        for(int z=1;z<=(n-i);z++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}