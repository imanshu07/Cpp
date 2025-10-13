#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int z = 1;
    for(int i=1;i<=(2*n-1);i++){

        if(i<=4){
            for(int j=1;j<=n-i;j++){
                cout<<" ";
            }
        }
        else{
            for(int j=1;j<=i-n;j++){
                cout<<" ";
            }
        }
        
        for(int k=1;k<=z;k++){
            cout<<"*";
        }
        cout<<endl;

        if(i<n) z++;
        else z--;
       
    }

    return 0;
}