#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<vector<int>> v = {{0,0,1,1},{1,0,1,0},{1,1,0,0}};
    int m = v.size();
    int n = v[0].size();

    for(int i=0;i<m;i++){                      // Rows jinka first column is zero unko pura flip krdo so that we get 1 at the higest place
        if(v[i][0]==0){
            for(int j=0;j<n;j++){
                v[i][j] = 1 - v[i][j];
            }
        }
    }

    for(int j=0;j<n;j++){         // i is rows & j is cols
        int noz = 0;
        int no1 = 0;
        for(int i=0;i<m;i++){
            if(v[i][j]==0){
                noz++;
            }
            else{
                no1++;
            }
        }

        if(noz>no1){
            for(int i=0;i<m;i++){         // Flips cols where noz>no1
                v[i][j] = 1-v[i][j];
            }
        }
    }

    int sum=0;
    for(int i=0;i<m;i++){
        int x=1;
        for(int j=n-1;j>=0;j--){
            sum+= v[i][j]*x;
            x*=2;
        }

    }
    cout<<sum;


    return 0;
}