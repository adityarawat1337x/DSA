class Solution {
public:
    int solve(vector<int> &arr,int idx,int target,vector<vector<int>> &dp){
        if(idx>=arr.size() or target<0)
            return INT_MAX-1;
        
        if(target==0)
            return 0;
        
        if(dp[idx][target]!=-1)
            return dp[idx][target];
        
        int pick = (target>=arr[idx])?1+solve(arr,idx,target-arr[idx],dp):INT_MAX-1;
        int nopick = solve(arr,idx+1,target,dp);
        
        return dp[idx][target] = min(pick,nopick);
    }
    
    int numSquares(int n) {
        vector<int> arr;
        for(long long i=1;i<=100;i++){
            arr.push_back(i*i);
        }
        vector<vector<int>> dp(arr.size(),vector<int>(n+1,-1));
        
        return solve(arr,0,n,dp);
    }
};