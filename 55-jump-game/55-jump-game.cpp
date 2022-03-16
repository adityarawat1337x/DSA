class Solution {
public:
    bool reach(vector<int>& nums,int idx,vector<int> &dp){
        if(idx>=nums.size()-1)
            return dp[idx] = 1;

        if(dp[idx]!=-1)
            return dp[idx];
        
        for(int i=1;i<=nums[idx];i++)
            if(reach(nums,idx+i,dp))
                return dp[idx] = 1;
        
        return dp[idx] = 0;
    }
    
    bool canJump(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        if(nums.size()==1)
            return true;
        int maxIdx=0;
        for(int i=0;i<nums.size();i++){
            maxIdx = max(maxIdx,i+nums[i]);
            if(nums[i]==0 and maxIdx<=i and i!=nums.size()-1)
                return false;
        }
        return true;
        return reach(nums,0,dp);
    }
};