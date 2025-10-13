#include <iostream>
#include <vector>
using namespace std;
vector<int> merge(vector<int>&arr1,vector<int>&arr2){

    int n = arr1.size();
    int m = arr2.size();
    vector<int> res(m+n);
    int i = 0; // Arr1                                       
    int j = 0; // Arr2
    int k = 0; // Res  

    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            res[k] = arr1[i];
            i++;
        }
        else{
            res[k] = arr2[j];
            j++;
        }
        k++;
    }

    if(i==n){
        while(j<m){
            res[k] = arr2[j];
            k++;
            j++;
        }
    }

    if(j==m){
        while(i<n){
            res[k] = arr1[i];
            k++;
            i++;
        }
    }
    return res;
}
int main(){
    vector <int> arr1;
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);
    for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }
    cout<<"    ";

    vector <int> arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(8);
    arr2.push_back(10);
    arr2.push_back(12);
    for(int i=0;i<arr2.size();i++){
        cout<<arr2[i]<<" ";
    }
    cout<<"    "<<endl;

    vector<int> v = merge(arr1,arr2);
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }

    return 0;
}