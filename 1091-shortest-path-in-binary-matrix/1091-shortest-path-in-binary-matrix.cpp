class Solution {
public:
    int dir[8][2] = {{1,1},{0,1},{1,0},{1,-1},{-1,1},{0,-1},{-1,0},{-1,-1}};
    
    bool valid(int i,vector<vector<int>>& grid,pair<int,int> x){
        if(x.first+dir[i][0]>-1 and x.first+dir[i][0]<grid.size() and x.second+dir[i][1]>=0 and x.second+dir[i][1]<grid.size() and grid[x.first+dir[i][0]][x.second+dir[i][1]]==0)return true;
        return false;
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        q.push({0,0});
        int n=grid.size();
        int ans=INT_MAX;
        if(grid[0][0]==1 or grid[n-1][n-1]==1)
            return -1;
        grid[0][0]=1;
        while(q.size()){
            auto x = q.front();
            q.pop();

            if(x.first==n-1 and x.second==n-1){
                return grid[x.first][x.second];
            }
            
            for(int i=0;i<8;i++){
                if(valid(i,grid,x)){
                        q.push({x.first+dir[i][0],x.second+dir[i][1]});
                        grid[x.first+dir[i][0]][x.second+dir[i][1]]=grid[x.first][x.second]+1;
                    }
                }
            }
        
        return -1;
    }
};