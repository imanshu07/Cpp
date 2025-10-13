#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the marks : ";
    cin>>marks;

    // conditions ? true : false - Ternary operators
    marks>=33 ? cout<<"Pass" : cout<<"Fail";

    return 0;
}