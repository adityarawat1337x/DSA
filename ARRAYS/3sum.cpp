#include<bits/stdc++.h>
#include<vector>

using namespace std;

void twoSum(int j,vector<int>& nums, int target,set<vector<int>>& res) {
    map<int,int> hash;
    for (int i = j; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (hash.find(complement)!=hash.end()) {
            vector<int> ans;
            ans.push_back(nums[j]);
            ans.push_back(nums[i]);
            ans.push_back(complement);
            sort(ans.begin(),ans.end());
            res.insert(ans);
        }
        hash[nums[i]]=i;
    }
}

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    set<vector<int>> res;
    sort(nums.begin(), nums.end());
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]<0)twoSum(i+1,nums,0-nums[i],res);
        else break;
    }
    for(vector<int> i :res){
        ans.push_back(i);
    }
    return ans;
}

int main(){
    vector<int> arr = {-1, 0, 1, 2, -1, -4}; //-4 -1 -1 0 1 2
    threeSum(arr);
    return 0;
}