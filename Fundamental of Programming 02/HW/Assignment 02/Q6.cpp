#include <iostream>
using namespace std;
int main(){

    int m,n;
    cout<<"Enter two number : ";
    cin>>m>>n;

    for(int i=1;i<=m;i++){
        cout<<"*";
        for(int k=1;k<=(n-2);k++){
            if(i==1 || i==m){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"*";
        cout<<endl;
    }
    return 0;
}