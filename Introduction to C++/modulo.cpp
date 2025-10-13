#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 2;
    int c = a%b;
    cout<<c <<endl; 

    c = b%a;
    cout<<c <<endl;

    c = b%(-a);
    cout<<c <<endl;

    c = (-b)%a;
    cout<<c <<endl;

    c = (-b)%(-a);
    cout<<c <<endl;

    c = -13%2;
    cout<<c <<endl;

    c = 13%-2;
    cout<<c <<endl;
    return 0;
}