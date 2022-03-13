class Solution {
public:
    int minPS(int i,int j,vector<vector<int>> &grid,vector<vector<long>> &dp){
        if(i<0 or j<0)
            return INT_MAX;
        if(i==0 and j==0)
            return grid[i][j];
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int left = minPS(i,j-1,grid,dp);
        int up = minPS(i-1,j,grid,dp);
        
        return dp[i][j] = grid[i][j] + min(left,up);
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<long>> dp(grid.size(),vector<long>(grid[0].size(),-1));
        return minPS(grid.size()-1,grid[0].size()-1,grid,dp);
    }
};