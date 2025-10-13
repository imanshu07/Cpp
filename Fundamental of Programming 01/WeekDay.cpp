#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter day number : ";
    cin>>x;
    switch(x){
        case 1 :
            cout<<"Monday ";
            break;
        case 2 :
            cout<<"Tuesday ";
            break;
        case 3 :
            cout<<"Wednesday";
            break;
        case 4 :
            cout<<"Thursday ";
            break;
        case 5 :
            cout<<"Friday ";
            break;
        case 6 :
            cout<<"Saturday ";
            break;
        case 7 :
            cout<<"Sunday ";
            break;
        default :
            cout<<"Invalid Number";
    }
    return 0;
}
// switch could also be used as if else but will give error but work very fine 
// i.e switch ke ander aap koi value hi dalo conditions nahi wo kaam to kr jayega mgr error dega