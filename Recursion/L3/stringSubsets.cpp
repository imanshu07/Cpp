#include <iostream>
using namespace std;            // LEETCODE 78
void printSubset(string ans,string original,int idx){
    if(original.length() == idx){
        cout<<ans<<endl;
        return;
    }
    char ch = original[idx];
    printSubset(ans+ch,original,idx+1);            // Euler Tree banake visualize kr
    printSubset(ans,original,idx+1);
}
int main(){
    string str = "abc";              // to store use string vector
    printSubset("",str,0);
    return 0;
}  