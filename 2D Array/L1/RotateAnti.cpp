#include <iostream>
using namespace std;
int main(){

    cout<<"Enter the no of rows/cols: ";
    int m;
    cin>>m;
    int arr[m][m];

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for(int i = 0;i<m;i++){
        int j = 0;
        int k = m-1;
        while(j<k){
            int temp = arr[j][i];
            arr[j][i] = arr[k][i];
            arr[k][i] = temp;
            j++;
            k--;
        }
    }

    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}