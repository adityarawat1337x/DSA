class Solution {
public:
    int rec(vector<vector<int>>& costs,int idx,int a,int b,int &n,vector<vector<vector<long long>>> &dp){
         if (idx==costs.size() and a==b)
            return 0;
        
        if(idx>=costs.size() or a>n or b>n)
            return 1e9;
        
        if(dp[idx][a][b]!=INT_MAX)
            return dp[idx][a][b];
        
        long long ans=0;
        long long chooseA = rec(costs,idx+1,a+1,b,n,dp);
        long long chooseB = rec(costs,idx+1,a,b+1,n,dp);
        
   
        return dp[idx][a][b] = min(costs[idx][0]+chooseA,costs[idx][1]+chooseB);
    }
    
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n = costs.size()/2;
        vector<vector<vector<long long>>> dp(costs.size(),vector<vector<long long>> (n+1,vector<long long>(n+1,INT_MAX)));
        
        return rec(costs,0,0,0,n,dp);
    }
};