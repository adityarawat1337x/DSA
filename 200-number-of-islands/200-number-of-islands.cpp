class Solution {
public:
    int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
    
    void dfs(vector<vector<char>>& grid,int &i,int &j){
        if(i<0 or j<0 or i==grid.size() or j==grid[0].size() or grid[i][j]=='0')
            return;
        grid[i][j]='0';
        
        for(int k=0;k<4;k++){
            int x=i+dir[k][0],y=j+dir[k][1];
            dfs(grid,x,y);
        }
    }
    
    int numIslands(vector<vector<char>>& grid){
        int n=grid.size(),m=grid[0].size();
        int cnt=0;
        for(int i=0;i<n;i++)
             for(int j=0;j<m;j++)
                if(grid[i][j]=='1'){
                    dfs(grid,i,j);
                    cnt++;
                }
        
        return cnt;
    }
};