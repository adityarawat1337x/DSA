class Solution {
public:
    int solve(int n, vector<int>& cuts,int i,int j, vector<vector<int>> &dp){
        if(i+1==j)
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int ans=INT_MAX;
        for(int low=i+1;low<j;low++)
            ans = min(ans,(cuts[j]-cuts[i]) + solve(n,cuts,low,j,dp) +  solve(n,cuts,i,low,dp));
        
        return dp[i][j] = ans;
    }
    
    int minCost(int n, vector<int>& cuts) {
        ios_base::sync_with_stdio(false);
        vector<vector<int>> dp(102,vector<int>(102,-1));
        cuts.push_back(0);
        cuts.push_back(n);
        sort(cuts.begin(),cuts.end());
        return solve(n,cuts,0,cuts.size()-1,dp);
    }
};