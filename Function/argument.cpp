#include <iostream>
using namespace std;
void fun(int x=8,float y=3.1){
    cout<<x<<" "<<y;
    cout<<endl;
}
int main(){
    fun(7.7);        // first argument integer changed despite calling float
    fun(4);             
    fun();          // nothing called so randon values printed
    fun(4,6);       // called values printed integer dala to dura bhi integer hi print hua
    fun(7.4,7.7);
}