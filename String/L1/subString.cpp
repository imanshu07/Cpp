#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){

    string s = "abcdef";
    cout<<s<<endl;
    cout<<s.substr(1)<<endl;
    cout<<s.substr(2,2);
    
    return 0;
}