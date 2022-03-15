class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto i:nums)
            sum+=i;
        if(sum%2)
            return false;
        int target = sum/2;
        
        vector<vector<bool>> dp(nums.size(),vector<bool>(target+1,0));
        
        for(int i=0;i<dp.size();i++)
            dp[i][0]=1;
        //dp[0][nums[0]]=1;
        
        for(int i=1;i<dp.size();i++)
            for(int j=1;j<=target;j++){
                bool no = dp[i-1][j];
                bool yes = false;
                if(nums[i]<=j){
                    yes = dp[i-1][j-nums[i]];
                }
                dp[i][j] = yes or no;
            }
            
        
        return dp.back().back();
    }
};