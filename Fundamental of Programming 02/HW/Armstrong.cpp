#include <iostream>
using namespace std;
int main(){
    cout<<1<<endl;
    for(int i=1;i<=9;i++){
        for(int j=0;j<=9;j++){
            for(int k=0;k<=9;k++){

                int arm1 =(i*100)+(j*10)+(k);
                int arm2 = (i*i*i)+(j*j*j)+(k*k*k);

                if(arm1>=500) break;

                if(arm1 == arm2){
                    cout<<arm1<<endl;
                }
            }
        }
    }
    return 0;
}