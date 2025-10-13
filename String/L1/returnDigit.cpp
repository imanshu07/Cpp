#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    string s = to_string(n);     // 00012 input dalke dekh
    int d = s.length();
    cout<<"Total no of digits: "<<d<<endl;        // Phele starting mein kiya tha tab bht loop chalana pada tha

    reverse(s.begin(),s.end());
    cout<<"Reverse: "<<s;
    
    return 0;
}