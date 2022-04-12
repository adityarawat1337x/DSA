class Solution {
public:
    int solve(vector<vector<int>> &grid,int i,int j,int &cnt){
        if(i>=grid.size() or j>=grid[0].size() or i<0 or j<0 or grid[i][j]==-1)
            return 0;
        
        if(grid[i][j]==2 and cnt==-1)
            return 1;
        
        int tmp = grid[i][j];
        grid[i][j]=-1;
        cnt--;
        int ans = 
            solve(grid,i-1,j,cnt)+
            solve(grid,i,j-1,cnt)+
            solve(grid,i+1,j,cnt)+
            solve(grid,i,j+1,cnt);
        cnt++;
        grid[i][j]=tmp;
        return ans;
    }
    
    int uniquePathsIII(vector<vector<int>>& grid) {
        int cnt=0;
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[i].size();j++)
                if(grid[i][j]==0)
                    cnt++;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1)
                    return solve(grid,i,j,cnt);
            }
        }
        
        return 0;
    }
};