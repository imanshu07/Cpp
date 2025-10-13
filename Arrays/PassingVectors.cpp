#include <iostream>
#include <vector>
using namespace std;

void change(vector<int> a){
    a[0] = 100;
}
void change2(vector<int> &a){
    a[0] = 100;
}
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    change(v);  // no change in vector
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }

    cout<<endl;
    change2(v);  // element changed in vector
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    
    return 0;
}