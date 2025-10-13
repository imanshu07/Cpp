#include <iostream>               // Leetcode - 78
#include <vector>
using namespace std;

void helper(vector <int>& nums ,vector<int> ans ,vector<vector<int>> &finalAns, int idx){
    
    if(idx==nums.size()){
        finalAns.push_back(ans);
        return;
    }
    helper(nums,ans,finalAns,idx+1);
    ans.push_back(nums[idx]);
    helper(nums,ans,finalAns,idx+1);
}

vector<vector<int>> subsets(vector<int>& nums){
    
    vector<int> ans;
    vector<vector<int>> finalAns;
    helper(nums,ans,finalAns,0);
    
    for(int i=0;i<finalAns.size();i++){
        for(int j=0;j<finalAns[i].size();j++){
            cout<<finalAns[i][j]<<" ";
        }
        cout<<endl;
    }
    return finalAns;
}
int main(){
    
    vector<int> nums= {1,2,3};
    subsets(nums);

    return 0;
}