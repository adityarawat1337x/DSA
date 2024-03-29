class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned int> dp(target+1,0);
      
        dp[0]=1;
      
        for(int sum=1;sum<=target;sum++){
            for(auto n:nums){
                if(n<=sum){
                     dp[sum] += dp[sum-n];
                }
            }
        }
        
        return dp[target];
    }
};