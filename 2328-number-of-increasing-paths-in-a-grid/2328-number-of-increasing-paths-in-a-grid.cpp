class Solution {
public:
    long ans=0,mod=1e9 + 7;
    int m,n;
    int dp[1001][1001];
    int dx[4]={1,-1,0,0},dy[4]={0,0,-1,1};    
    
    long solve(int &i,int &j,vector<vector<int>>& grid){
        long tmp=1;
        if(dp[i][j]!=-1)return dp[i][j];
        for(int x=0;x<4;x++){
            int ii=dx[x]+i,jj=dy[x]+j;
            if(ii<0 or jj<0 or ii==m or jj==n or grid[ii][jj]<=grid[i][j])
                continue;
            long way = solve(ii,jj,grid);
            tmp=(tmp+way)%mod;
        }
        return dp[i][j]=tmp;
    }
    
    int countPaths(vector<vector<int>>& grid) {
        m=grid.size(),n=grid[0].size();
        memset(dp,-1,sizeof dp);
        
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                ans=(ans+solve(i,j,grid))%mod;
        
        return ans;
    }
};