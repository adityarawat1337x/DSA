class Solution {
public:
    int dx[4]={0,0,-1,1},dy[4]={-1,1,0,0};
    vector<vector<int>> grid,vis;
    vector<pair<int,int>> clr;
    int old;
    void dfs(int &row,int &col,int &color){
        if(vis[row][col] or grid[row][col]!=old)
            return;
        
        vis[row][col]=1;
        
        for(int i=0;i<4;i++){
            int x = dx[i]+row,y=dy[i]+col;
            if((x<0 or y<0 or x==grid.size() or y==grid[0].size())){
                clr.push_back({row,col});
            }else if(grid[x][y]!=old){
                clr.push_back({row,col});
            }
        }
        
        for(int i=0;i<4;i++){
            int x = dx[i]+row,y=dy[i]+col;
            if(!(x<0 or y<0 or x==grid.size() or y==grid[0].size()))
                dfs(x,y,color);
        }
    }
    
    vector<vector<int>> colorBorder(vector<vector<int>>& graph, int row, int col, int color) {
        grid=graph;
        vis.resize(graph.size(),vector<int>(graph[0].size(),0));
        old=grid[row][col];
        dfs(row,col,color);
        for(auto &[i,j]:clr)
            grid[i][j]=color;
        return grid;
    }
};