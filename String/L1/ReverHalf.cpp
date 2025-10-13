#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter a String: ";
    getline(cin,s);
    int n = s.length(); // indexing 0 1 2 3 4 5 6

    reverse(s.begin(),s.begin()+n/2);                  
    cout<<s;
    return 0;
}