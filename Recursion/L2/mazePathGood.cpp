#include <iostream>
using namespace std;

int maze2(int row,int col){  // iss baar ulta jare hein (3,3) --> (1,1) a 3*3 matrix like this
    
    if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;
    
    int rightways = maze2(row,col-1);
    int downways = maze2(row-1,col);
    int totalways = rightways + downways; 
    
    return totalways;
} 

int main(){
    
    cout<<"Total No of Ways: "<<maze2(3,3);  // a 3*3 matrix

    return 0;
}