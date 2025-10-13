#include <iostream>
#include <vector>
using namespace std;
int main(){

    int m;
    cout<<"Enter the no of rows in 1st Matrix: ";
    cin>>m;
    int n;
    cout<<"Enter the no of cols in 1st Matrix: ";
    cin>>n;

    int p;
    cout<<"Enter the no of rows in 2nd Matrix: ";
    cin>>p;
    int q;
    cout<<"Enter the no of cols in 2nd Matrix: ";
    cin>>q;

    if(n==p){
        int a[m][n];
        int b[p][q];
        int res[m][q];

        cout<<"Enter 1st Matrix: "<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }

        cout<<"Enter 2nd Matrix: "<<endl;
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j] = 0;
                for(int k=0;k<p;k++){   // common tak n or p dono chalenge
                    res[i][j] += a[i][k] * b[k][j]; 
                }  
            }
        }

        cout<<endl<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }

    }
    else{
        cout<<"Matrix can't be multiplied";
    }


    return 0;
}