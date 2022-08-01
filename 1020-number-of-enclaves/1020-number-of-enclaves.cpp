class Solution {
public:
    int dx[4]={1,-1,0,0},dy[4]={0,0,-1,1};
    void dfs(int r,int c,vector<vector<int>> &grid){
        if(r<0 or c<0 or r>=grid.size() or c>=grid[0].size() or grid[r][c]==0)
            return;
        grid[r][c]=0;
        for(int x=0;x<4;x++)
            dfs(r+dx[x],c+dy[x],grid);
    }
    
    
    int numEnclaves(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            dfs(i,0,grid);
        }
        for(int i=0;i<grid.size();i++){
            dfs(i,grid[0].size()-1,grid);
        }
         for(int i=0;i<grid[0].size();i++){
            dfs(0,i,grid);
        }
        for(int i=0;i<grid[0].size();i++){
            dfs(grid.size()-1,i,grid);
        }
        int cnt=0;
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[0].size();j++)
                cnt+=grid[i][j];
        return cnt;
    }
};