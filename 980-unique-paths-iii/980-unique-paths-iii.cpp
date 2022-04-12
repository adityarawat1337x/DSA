class Solution {
public:
    int solve(vector<vector<int>> &grid,int i,int j,vector<vector<int>> &dp,int cnt){
        if(i>=grid.size() or j>=grid[0].size() or i<0 or j<0 or grid[i][j]==-1)
            return 0;
        
        if(grid[i][j]==2 and cnt==-1)
            return 1;
        
        //if(dp[i][j]!=-1)
          //  return dp[i][j];
        int tmp = grid[i][j];
        grid[i][j]=-1;
        
        int ans = 
            solve(grid,i-1,j,dp,cnt-1)+
            solve(grid,i,j-1,dp,cnt-1)+
            solve(grid,i+1,j,dp,cnt-1)+
            solve(grid,i,j+1,dp,cnt-1);
        
        grid[i][j]=tmp;
        return dp[i][j] = ans;
    }
    
    int uniquePathsIII(vector<vector<int>>& grid) {
        vector<vector<int>> dp(grid.size(),vector<int>(grid[0].size(),-1));
        int cnt=0;
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[i].size();j++)
                if(grid[i][j]==0)
                    cnt++;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1)
                    return solve(grid,i,j,dp,cnt);
            }
        }
        
        return 0;
    }
};