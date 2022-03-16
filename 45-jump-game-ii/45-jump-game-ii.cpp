class Solution {
public:
 
    int reach(vector<int>& nums,int idx,vector<int> &dp){
        if(idx>=nums.size()-1)
            return 0;

        if(dp[idx]!=-1)
            return dp[idx];
        
        int ans=INT_MAX-1;
        for(int i=1;i<=nums[idx];i++)
            ans = min(ans,reach(nums,idx+i,dp));
        
        return dp[idx] = 1+ans;
    }
    
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return reach(nums,0,dp);
    }
};