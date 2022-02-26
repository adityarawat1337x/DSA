class Solution {
public:
    int rob(vector<int>& nums) {
        int n  = nums.size();
        vector<int> dp(n,0);
        dp[0]=nums[0];
        
        for(int i=1;i<n;i++){
            int nt = dp[i-1];
            int t = (i>1)?dp[i-2]:0;
            t+=nums[i];
            dp[i] = max(t,nt);
        }
        
        return dp.back();
    }
};