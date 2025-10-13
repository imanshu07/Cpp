#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    for(int i=1;i<=(2*n-1);i++){
        if(i<=n){
            for(int j=1;j<=(n-1);j++){
                cout<<"  ";
            }
            for(int k=1;k<=i;k++){
                cout<<"* ";
            }
            cout<<endl;
        }
        else{

        }
    }
    return 0;
}