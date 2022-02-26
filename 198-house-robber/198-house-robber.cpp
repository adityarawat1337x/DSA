class Solution {
public:
    int solv(int idx,vector<int>& nums,vector<int>& dp)
    {
        if(idx==0)
            return nums[idx];
        if(idx<0)
            return 0;
        if(dp[idx]!=-1)
            return dp[idx];
        
        int pick = nums[idx] + solv(idx-2,nums,dp);
        int nopick = solv(idx-1,nums,dp);
        
        return dp[idx] = max(pick,nopick);
    }
    
    int rob(vector<int>& nums) {
        int n  = nums.size();
        vector<int> dp(n,-1);
        return solv(n-1,nums,dp);
    }
};