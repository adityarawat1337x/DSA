class Solution {
public:
    int solve(vector<vector<int>>& matrix,vector<vector<int>>& dp,int i,int j,int num) {
        if(i<0 or j<0 or i>=matrix.size() or j>=matrix[0].size() or matrix[i][j]<=num)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
            
        int a = solve(matrix,dp,i+1,j,matrix[i][j]);
        int b = solve(matrix,dp,i,j+1,matrix[i][j]);
        int c = solve(matrix,dp,i,j-1,matrix[i][j]);
        int d = solve(matrix,dp,i-1,j,matrix[i][j]);
        return dp[i][j] = 1 + max({a,b,c,d});
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int m = matrix.size(),n=matrix[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        int ans=0;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++){
                ans = max(ans,solve(matrix,dp,i,j,-1));
            }
        return ans;
    }
};