#include <iostream>
using namespace std;
// void skip(string ans,string original){
//     if(original.length()==0){
//         cout<<ans;
//         return;
//     }
//     char ch = original[0];
//     if(ch=='a') skip(ans,original.substr(1)); o(n^2) due to this!
//     else skip(ans+ch,original.substr(1));
// }

void skip(string ans,string original,int idx){ // Just very better O(n)
    if(original.length()==idx){
        cout<<ans;
        return;
    }
    char ch = original[idx];
    if(ch=='a') skip(ans,original,idx+1);
    else skip(ans+ch,original,idx+1);
}

int main(){
    string s = "anshu bhandari";
    skip("",s,0);
    return 0;
}