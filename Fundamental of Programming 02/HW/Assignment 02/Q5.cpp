#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int z = 1;
    for(int i=1;i<=(2*n-1);i++){

        for(int k=1;k<=z;k++){
            cout<<"*";
        }
        cout<<endl;

        if(i<n) z++;
        else z--;
       
    }

    return 0;
}