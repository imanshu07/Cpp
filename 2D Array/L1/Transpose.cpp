#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no of rows: ";
    cin>>m;

    int n;
    cout<<"Enter the no of cols: ";
    cin>>n;

    int arr[m][n];
    int trr[n][m];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            trr[i][j] = arr[j][i];
        }
    }

    cout<<endl;
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<trr[i][j]<<" ";
        }
        cout<<endl;
    }

}