#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    string str = "Raghav is a maths maths teacher. He is DSA DSA mentor as well.";
    stringstream ss(str);
    string temp;
    vector <string> v;
    while(ss>>temp){                // String Stream
        v.push_back(temp);
    }

    cout<<endl;
    sort(v.begin(),v.end());        // same words saath mei aagaye

    int count = 1;
    int maxCount = 1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count = 1;
        maxCount = max(maxCount,count);
    }

    count = 1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count = 1;
        if(count == maxCount){
            cout<<v[i]<<" "<<maxCount<<endl;
        }
    }

    
    
    return 0;
}