#include <iostream>
using namespace std;

int maze(int sr,int sc,int er,int ec){  // starting row/cols & ending rows/cols
    
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    
    int rightways = maze(sr,sc+1,er,ec);
    int downways = maze(sr+1,sc,er,ec);
    int totalways = rightways + downways; 
    
    return totalways;
} 

void printpath(int sr,int sc,int er,int ec,string s){
    
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return;
    }
    
    printpath(sr,sc+1,er,ec,s+'R');
    printpath(sr+1,sc,er,ec,s+'D');

}
int main(){
    
    cout<<"Total No of Ways: "<<maze(0,0,2,2);  // a 3*3 matrix
    cout<<endl<<endl;
    printpath(0,0,2,2,"");

    return 0;
}