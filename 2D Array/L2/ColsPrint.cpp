#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no of rows/cols in the matrix: ";
    cin>>m;

    int arr[m][m];
    cout<<"Enter the elements in the matrix: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    cout<<endl<<endl;
    for(int i=0;i<m;i++){
        if(i%2==0){         // i = 0,2,4,6
            for(int j=0;j<m;j++) cout<<arr[j][i]<<" ";
        }
        else{
            for(int j=m-1;j>=0;j--){       // i = 1,3,5,7
                cout<<arr[j][i]<<" ";
            }
        }
    }
    return 0;
}