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
        vector<long> row(grid[0].size()+1,INT_MAX);
        
        for(int i=1;i<=grid.size();i++){
            vector<long> tmp(grid[0].size()+1,INT_MAX);
            for(int j=1;j<=grid[0].size();j++){
                if(i==1 and j==1)
                    tmp[j]=grid[i-1][j-1];
                else
                    tmp[j] = grid[i-1][j-1] + min(row[j],tmp[j-1]);
            }
            row=tmp;
        }
        
        return row.back();
        //return minPS(grid.size()-1,grid[0].size()-1,grid,dp);
    }
};