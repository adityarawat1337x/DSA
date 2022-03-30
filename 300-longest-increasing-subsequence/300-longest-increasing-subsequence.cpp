class Solution {
public:

    int lengthOfLIS(vector<int>& nums) {
        
        vector<int> dp(nums.size(),0);
        dp[0]=1;
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i] and dp[i]<dp[j]){
                    dp[i]=dp[j];
                }
            }
            dp[i]++;
        }
        
        return *max_element(dp.begin(),dp.end());
    }
};