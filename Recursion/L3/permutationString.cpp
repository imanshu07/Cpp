#include <iostream>
#include <string>
using namespace std;
void permutations(string ans, string original){
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<original.length();i++){
        char ch = original[i];
        string left = original.substr(0,i);
        string right = original.substr(i+1); // left right is imp for like ch = b, left = a, right = c abb socho ye nahi hote to kya eror aata?
        permutations(ans+ch,left+right);
    }
}
int main(){
    string str = "abc";
    permutations("",str);

    return 0;
}