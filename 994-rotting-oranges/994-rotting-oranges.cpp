class Solution {
public:
    int dir[4][2] = {{-1,0},{0,-1},{1,0},{0,1}};
    
    bool valid(vector<vector<int>>& grid,int &i,int &j){
        if(i<0 or j<0 or i==grid.size() or j==grid[0].size() or grid[i][j]==0 or grid[i][j]==2)
            return false;
        return true;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int min=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==2)
                    q.push({i,j});
            }
        }
        pair<int,int> lim ={-1,-1};
        q.push(lim);
        
        while(!(q.size()<=1 and q.front()==lim)){
            if(q.front()==lim){
                q.pop();
                min++;
                q.push(lim);
            }
            
            auto idx = q.front();
            q.pop();
            
            for(int i=0;i<4;i++){
                int x = idx.first+dir[i][0],y = idx.second+dir[i][1];
                if(valid(grid,x,y)){
                    grid[x][y]=2;
                    q.push({x,y});
                }
            }
        }    
        
         for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1)
                    return -1;
            }
        }
        
        return min;
    }
};