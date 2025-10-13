#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(5); //to give input
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(4);
    v.push_back(3);
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.pop_back();

    v[5] = 0;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<"Size is "<<v.size()<<endl ;
    cout<<"Capacity is "<<v.capacity();

    vector <int> d(5,7); //intial size = 5 and each element has value 7

    return 0;
}