#include <iostream>
#include <vector>
using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a = *b ;
    *b = temp;
}
int main(){

    vector <int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    int low = 0, mid = 0, high = v.size()-1;
    
    while(mid<=high){
        if(v[mid]==2){
            swap(&v[mid],&v[high]);
            high--;
        }
        else if(v[mid]==0){
            swap(&v[mid],&v[low]);
            low++;
            mid++;
        }
        else mid++;
    }

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }


    return 0;
}