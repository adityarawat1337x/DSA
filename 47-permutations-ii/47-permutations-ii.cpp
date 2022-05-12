class Solution {
public:
    void next(vector<int> &v,vector<int> &nums, set<vector<int>> &ans, int n){
        if(v.size()==n){
            ans.insert(v);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==-11  or (i>0 and nums[i]==nums[i-1]))
                continue;
            v.push_back(nums[i]);
            int tmp=nums[i];
            nums[i]=-11;
            next(v,nums,ans,n);
            nums[i]=tmp;
            v.pop_back();
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> ans;
        vector<vector<int>> res;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(i>0 and nums[i]==nums[i-1])
                continue;
            v.push_back(nums[i]);
            int tmp=nums[i];
            nums[i]=-11;
            next(v,nums,ans,nums.size());
            nums[i]=tmp;
            v.pop_back();
        }
        for(auto i:ans)
            res.push_back(i);
        return res;
    }
};