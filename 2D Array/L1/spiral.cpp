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
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int minr = 0,minc = 0;
    int maxr = m-1,maxc = n-1;
    int tne = m*n;                         // Total no of elements
    int count = 1;
    while((minr<=maxr) && (minc<=maxc)){

        // Left to Right
        for(int i=minc;i<=maxc && count<=tne;i++){
            cout<<arr[minr][i]<<" ";
            count++;
        }
        minr++;

        // Top to Bottom
        for(int i=minr;i<=maxr && count<=tne;i++){
            cout<<arr[i][maxc]<<" ";
            count++;
        }
        maxc--;

        // Right to Left
        for(int i=maxc;i>=minc && count<=tne;i--){
            cout<<arr[maxr][i]<<" ";
            count++;
        }
        maxr--;

        // Bottom to Top
        for(int i=maxr;i>=minr && count<=tne;i--){
            cout<<arr[i][minc]<<" ";
            count++;
        }
        minc++;
    }
    return 0;
}