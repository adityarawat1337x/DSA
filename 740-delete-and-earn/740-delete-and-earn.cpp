class Solution {
public:

    int solve(int idx,vector<int> &mp,vector<int> &dp){
        if(idx>=mp.size())
            return 0;
       
        if(dp[idx]!=-1)
            return dp[idx];
        
        int pick = mp[idx] + solve(idx+2,mp,dp);
        int noPick = solve(idx+1,mp,dp);
        return dp[idx] = max(pick,noPick);
        
    }
    int deleteAndEarn(vector<int>& nums) {
        int maxi = *max_element(nums.begin(),nums.end());
        vector<int> mp(maxi+1);
        vector<int> dp(maxi+1,-1);
        
        for(auto i:nums){
            mp[i]+=i;
        }
        return solve(1,mp,dp);
    }
};