class Solution {
public:
    int run(int i,int j,vector<vector<int>>& mat,vector<vector<long>> &dp){
        if(j<0 or j==mat[0].size())
            return INT_MAX;
        
        if(i==mat.size()-1){
            return mat[i][j];
        }
        
        if(dp[i][j]!=INT_MAX)
            return dp[i][j];
        
        int left = run(i+1,j-1,mat,dp);        
        int right = run(i+1,j+1,mat,dp);
        int down = run(i+1,j,mat,dp);
        return dp[i][j] = mat[i][j] + min({right,left,down});
    }
    
    int minFallingPathSum(vector<vector<int>>& mat) {
        int ans=INT_MAX;
        vector<vector<long>> dp(mat.size(),vector<long>(mat[0].size(),INT_MAX));
        for(int i=0;i<mat[0].size();i++)
            ans = min(ans,run(0,i,mat,dp));
        return ans;
    }
};