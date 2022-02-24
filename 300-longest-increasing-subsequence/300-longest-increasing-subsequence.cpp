class Solution {
public:

    int lengthOfLIS(vector<int>& nums) {
        if(nums.size()<=1){
            return nums.size();
        }
        vector<int>  dp;
        dp.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]>dp.back())
                dp.push_back(nums[i]);
            else{
                auto bound = lower_bound(dp.begin(),dp.end(),nums[i]);
                dp[bound-dp.begin()]=nums[i];
            }
        }
        
        return dp.size();
    }
};