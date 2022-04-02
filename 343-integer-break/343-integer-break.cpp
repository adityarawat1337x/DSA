class Solution {
public:
    long long solve(vector<int> &arr,int idx,int target,vector<vector<int>> &dp){
        if(idx>=arr.size() or target<0)
            return INT_MIN;
        
        if(target==0)
            return 1;
        
        if(dp[idx][target]!=INT_MAX)
            return dp[idx][target];
        
        long long pick = (target>=arr[idx])?arr[idx]*solve(arr,idx,target-arr[idx],dp):INT_MIN;
        long long nopick = solve(arr,idx+1,target,dp);
        
        return dp[idx][target] = max(pick,nopick);
    }
    int integerBreak(int n) {
        
        vector<int> arr;
        for(long long i=1;i<n;i++){
            arr.push_back(i);
        }
        vector<vector<int>> dp(arr.size(),vector<int>(n+1,INT_MAX));
        
        return solve(arr,0,n,dp);
        
    }
};