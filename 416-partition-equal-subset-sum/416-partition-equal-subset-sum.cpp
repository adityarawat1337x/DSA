class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto i:nums)
            sum+=i;
        if(sum%2)
            return false;
        int target = sum/2;
        
        vector<vector<bool>> dp(target+1,vector<bool>(nums.size(),0));
        
        for(int i=0;i<dp[0].size();i++)
            dp[0][i]=1;
        
    for(int i=1;i<=target;i++)
        for(int j=1;j<dp[0].size();j++){
            bool no = dp[i][j-1];
            bool yes = false;
            if(nums[j]<=i){
                yes = dp[i-nums[j]][j-1];
            }
            dp[i][j] = yes or no;
        }
        
        return dp.back().back();
    }
};