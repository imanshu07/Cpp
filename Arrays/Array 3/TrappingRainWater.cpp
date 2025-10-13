#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = height.size();
    int prev[n];
    prev[0] = -1;
    int next[n];

    //Previous Greatest Element
    int max = height[0];
    for(int i=1;i<n;i++){
        prev[i] = max;
        if(max<height[i]) max = height[i];        
    }

    //Next Greatest Element
    next[n-1] = -1; 
    max = height[n-1];
    for(int i=n-2;i>=0;i--){
        next[i] = max;
        if(max<height[i]) max = height[i];        
    }

    // Minium Array
    int mini[n];
    for(int i=0;i<n;i++){
        mini[i] = min(prev[i],next[i]);
    }

    //Calculation Water 
    int water = 0;
    for(int i=1;i<n-1;i++){
        if(height[i]<mini[i]){
            water += (mini[i]-height[i]); // pura question ek array se bhi ho sakhta socho?
        }
    }
    cout<<water;

    return 0;
}