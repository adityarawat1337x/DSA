class Solution {
public:
    vector<vector<vector<bool>>> dp;
    bool iter(int idx,float sum,float num,float avg,vector<int>& nums){
        if(idx>=nums.size())
            return false;
        
        if(num>0 and avg==sum/num){
            return true;
        }
        
        if(dp[idx][num][sum]==false) return false;
        
        if(iter(idx+1,sum+nums[idx],num+1,avg,nums))
            return dp[idx][num][sum]=true;
        
        if(iter(idx+1,sum,num,avg,nums))
            return dp[idx][num][sum]=true;
        
        return dp[idx][num][sum]=false;
    }
    
    bool splitArraySameAverage(vector<int>& nums) {
        cin.tie(NULL);
        ios_base::sync_with_stdio(false);
        int sum = accumulate(nums.begin(),nums.end(),0);
        int n=nums.size();
        dp.resize(n, vector<vector<bool>>(n, vector<bool>(sum + 1, true)));
        return iter(0,0,0,(float)sum/n,nums);
    }
};