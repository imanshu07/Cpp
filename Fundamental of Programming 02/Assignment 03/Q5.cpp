#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        int k = 0;
        for(int j=1;j<=(2*n-1);j++){
            if(j<=n) k++;
            else k--;
            cout<<k<<" ";
            
        }
        cout<<endl;
    }

    return 0;
}