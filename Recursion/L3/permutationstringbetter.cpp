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
        string next = original;
        next.erase(i,1);
        permutations(ans+ch,next);
    }
}
int main(){
    string str = "abc";
    permutations("",str);

    return 0;
}