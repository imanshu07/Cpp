#include <iostream>    // Leetcode 14
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(){

    vector<string> v;
    v.push_back("Ansh");
    v.push_back("Anshu");
    v.push_back("Anshul");            // Compare first and last khel khatam
    
    sort(v.begin(),v.end());          // string size == 1 then return that string only in leetcode

    string first = v[0];
    string last = v[2];
    string s = "";                     // If nothing common
    
    for(int i=0;i<min(first.size(),last.size());i++){
        if(first[i]==last[i]){
            s += first[i];
        }
    }

    cout<<"Common Prefix: "<<s;

    return 0;
}