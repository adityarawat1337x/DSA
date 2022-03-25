class Solution {
public:
    int rec(vector<vector<int>>& costs,int idx,int a,int b,int &n,vector<vector<long long>> &dp){
         if (idx==costs.size() and a==b)
            return 0;
        
        if(idx>=costs.size() or a>n or b>n)
            return 1e9;
        
        if(dp[a][b]!=INT_MAX)
            return dp[a][b];
        
        long long ans=0;
        long long chooseA = rec(costs,idx+1,a+1,b,n,dp);
        long long chooseB = rec(costs,idx+1,a,b+1,n,dp);
   
        return dp[a][b] = min(costs[idx][0]+chooseA,costs[idx][1]+chooseB);
    }
    
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n = costs.size()/2;
        vector<vector<long long>> dp(n+2,vector<long long>(n+2,0));
        
        //TABULATION
         for(int i=n+1;i>=0;i--)
            for(int j=n+1;j>=0;j--)
                if(i>n or j>n)
                    dp[i][j]=1e9;
                else if(i==j and i==n)
                    dp[i][j]=0;
            
    
        for(int i=n;i>=0;i--){
            for(int j=n;j>=0;j--){
                if(i==j and i==n)
                    dp[i][j]=0;
                else
                    dp[i][j] = min(costs[i+j][0]+dp[i+1][j],costs[i+j][1]+dp[i][j+1]);
            }
        }
        
        return dp[0][0];
        //RECUR + MEMO
        vector<vector<long long>> memo(n+1,vector<long long>(n+1,INT_MAX));
        
        return rec(costs,0,0,0,n,memo);
    }
};