#include <iostream>
#include <vector>
using namespace std;
void combination(vector <int>v, int arr[], int n, int target, int idx){ // subarray wala question ka tree banao then idhr kaise aaoge wo socho hojayega easily!
    if(target==0){
        for(int i=0;i<v.size();i++){ // Try combination sum 2 on LC
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(target<0) return;
    for(int i=idx;i<n;i++){
        // f(i > idx && arr[i] == arr[i-1]) continue; for combination II to avoid duplicates
        v.push_back(arr[i]);
        combination(v,arr,n,target-arr[i],i);
        v.pop_back();
    }
}
int main(){
    int arr[] = {2,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 8;
    vector <int> v;
    combination(v,arr,n,target,0);
    return 0;
}