#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<"  ";
        }

        int alpha = 64 + i;
        
        for(int j=1;j<=(2*i-1);j++){

            cout<<(char)alpha<<" ";

            if(j<i) alpha--;
            else alpha++; 

        }
        cout<<endl;
    }
    return 0;
}