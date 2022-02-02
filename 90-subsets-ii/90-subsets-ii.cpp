class Solution {
public:
    
    void solve(vector<int>& nums, vector<vector<int>> &ans,int idx,vector<int> &v){
        ans.push_back(v);

        for(int i=idx;i<nums.size();i++){
            if(i!=idx and (nums[i]==nums[i-1]))
                continue;
                v.push_back(nums[i]);
                solve(nums,ans,i+1,v);
                v.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums){
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> v;
        solve(nums,ans,0,v);
        return ans;
    }
};