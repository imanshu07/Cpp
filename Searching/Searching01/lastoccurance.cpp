#include <iostream>
#include <vector>
using namespace std;

    int findFirst(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size() - 1, ans = -1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target) {
                ans = mid;
                hi = mid - 1;
            } else if (nums[mid] < target) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        return ans;
    }

    int findLast(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size() - 1, ans = -1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target) {
                ans = mid;
                lo = mid + 1;
            } else if (nums[mid] < target) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        return ans;
    }

int main(){
    vector<int> nums = {1,2,2,3,3,3,3,3,4,4,5,8,9};

    int target = 3;
    for(int ele:nums){
        cout<<ele<<" ";
    }
    cout<<endl;

    int first = findFirst(nums, target);
    int last = findLast(nums, target);
    cout<<"First - "<<first<<endl<<"Last - "<<last;

}


