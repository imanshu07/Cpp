#include <iostream>
using namespace std;
int main(){
    int n;
    int n1=0,n2=0,n5=0,n10=0,n20=0,n50=0,n100=0,n200=0,n500=0;
    cout<<"Enter a amount : ";
    cin>>n;
    switch(1){
        case 1:
        n500 = n/500;
        n -= (500*n500);

        case 2:
        n200 = n/200;
        n -= (200*n200);

        case 3:
        n100 = n/100;
        n -= (100*n100);

        case 4:
        n50 = n/50;
        n -= (50*n50);

        case 5:
        n20 = n/20;
        n -= (20*n20);

        case 6:
        n10 = n/10;
        n -= (10*n10);

        case 7:
        n5 = n/5;
        n -= (5*n5);

        case 8:
        n2 = n/2;
        n -= (2*n2);

        case 9:
        n1 = n/1;
        n -= (1*n1);

    }
    int T = n500 + n200 + n100 + n50 + n20 + n10 + n5 + n2 + n1;  
    cout<<"Total Notes : "<<T;
    return 0;
}