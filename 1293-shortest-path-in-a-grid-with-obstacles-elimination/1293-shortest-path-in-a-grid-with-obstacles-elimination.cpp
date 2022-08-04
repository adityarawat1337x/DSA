class Solution {
public:
    int dy[4]={0, 0,1,-1}
       ,dx[4]={-1,1,0,0};
    
    int shortestPath(vector<vector<int>>& grid, int K) {
        
        int n=grid[0].size(),m=grid.size(),x,y,sz,r,c,k;
        vector<vector<int>> kay(m,vector<int>(n,-1));
        queue<pair<int,int>> q;
        
        q.push({0,K});
        int lvl=0;
        
        while(!q.empty()){
            sz=q.size();
            while(sz--){
                x=q.front().first/n,y=q.front().first%n,k=q.front().second;
                q.pop();
                 if(x==m-1 and y==n-1){
                        return lvl;
                    }             
                for(int i=0;i<4;i++){
                    r=x+dx[i],c=y+dy[i];
                    
                    if(r==m-1 and c==n-1){
                        return lvl+1;
                    }
                    
                    if(r<0 or c<0 or r==m or c==n)
                        continue;
                    
                    if(grid[r][c]==1 and k>0 and kay[r][c]<k-1){
                        q.push({r*n+c,k-1});
                        kay[r][c]=k-1;
                    }
                    else if(grid[r][c]==0  and kay[r][c]<k){
                        q.push({r*n+c,k});
                        kay[r][c]=k;
                    }
                }
            }
            lvl++;
        }
        return -1;
    }
};
