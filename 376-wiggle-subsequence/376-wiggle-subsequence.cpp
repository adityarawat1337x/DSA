class Solution {
public:
    int solve(vector<int>& nums,int pos,int idx,vector<vector<int>> &memo){
        if(idx<=0)
            return 0;

        if(memo[idx][pos]!=-1)
            return memo[idx][pos];
        
        int inc=0,exc=0;
        int diff = nums[idx]-nums[idx-1];
        
        if((diff<0 and pos) or (diff>0 and !pos)) 
            inc = 1+solve(nums,!pos,idx-1,memo);
        
        exc =  solve(nums,pos,idx-1,memo);
            
        return memo[idx][pos] = max(inc,exc);
    }
    
    int wiggleMaxLength(vector<int>& nums) {
        //space optimized
        vector<int> prev(2,0),curr(2,0);
        
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<2;j++){
                int inc=0,exc=0;
                int diff = nums[i]-nums[i-1];
                if((diff<0 and j) or (diff>0 and !j)) 
                    inc = 1+ prev[!j];
                exc = prev[j];
                curr[j] = max(inc,exc);
            }
            prev=curr;
        }
        
        return 1+max(curr[0],curr[1]);
        
        //tabulation
        vector<vector<int>> dp(nums.size(),vector<int>(2,0));
        
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<2;j++){
                int inc=0,exc=0;
                int diff = nums[i]-nums[i-1];
                if((diff<0 and j) or (diff>0 and !j)) 
                    inc = 1+ dp[i-1][!j];
                exc = dp[i-1][j];
                dp[i][j] = max(inc,exc);
            }
        }
        
        return 1 + max(dp[nums.size()-1][0],dp[nums.size()-1][1]);
        
        //recursive + memo
        vector<vector<int>> memo(nums.size(),vector<int>(2,-1));
        return 1 + max(solve(nums,0,nums.size()-1,memo),solve(nums,1,nums.size()-1,memo));
    }
};