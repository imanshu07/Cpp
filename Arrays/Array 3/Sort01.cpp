#include <iostream>
#include <vector>
using namespace std;
void sort01(int i,int j, vector<int> &v){
    while(i<j){
        if(v[j]==1) j--;
        if(v[i]==0) i++;
        if(i>j) break;         // if you don't want to use break to phir ya to else if use krlo ya phir neeche wale if ko upr le aao
        if(v[i]==1 && v[j]==0){
            v[i] = 0;
            v[j] = 1;
            i++;
            j--;
        }        
    }
}
int main(){

    vector <int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    int j = v.size()-1;
    int i = 0;
    sort01(i,j,v);

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    return 0;
}