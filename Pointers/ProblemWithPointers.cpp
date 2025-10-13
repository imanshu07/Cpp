#include <iostream>
using namespace std;
int main(){
    int x,y;
    char ch,dn;
    int *p1 = &x;
    int *p2 = &y;
    
    char *p3 = &ch;  // no error
    int *p4 = &dn;   // error
    return 0;
}