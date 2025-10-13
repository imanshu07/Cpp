#include <iostream>
using namespace std;
int area(int a){
    int area = (22*a*a)/7;
    return area;    
}
int main(){

    int n;
    cout<<"Enter the radius : ";
    cin>>n;

    cout<<"The area is : "<<area(n);

    return 0;
}