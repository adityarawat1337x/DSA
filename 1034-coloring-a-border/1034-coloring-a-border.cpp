class Solution {
public:
 
    
    int dx[4]={0,0,-1,1},dy[4]={-1,1,0,0};
    vector<vector<int>> grid,vis;
    int old;
   bool invalid(int &x,int &y){
        return (x<0 or y<0 or x==grid.size() or y==grid[0].size());
    }
    void dfs(int &row,int &col,int &color){
        vis[row][col]=1;

        for(int i=0;i<4;i++){
            int x = dx[i]+row,y=dy[i]+col;
            if(!invalid(x,y) and !vis[x][y] and grid[x][y]==old){
                 dfs(x,y,color);
            }else if(invalid(x,y) or (!invalid(x,y) and grid[x][y]!=old and !vis[x][y])){
                grid[row][col]=color;
            }
        }
    }
    
    vector<vector<int>> colorBorder(vector<vector<int>>& graph, int row, int col, int color) {
        grid=graph;
        vis.resize(graph.size(),vector<int>(graph[0].size(),0));
        old=grid[row][col];
        dfs(row,col,color);
        return grid;
    }
};