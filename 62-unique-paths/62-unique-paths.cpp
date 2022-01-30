class Solution {
public:
    int valid(int i,int j,int m ,int n){
        if(i<0 or j<0 or i>=m or j>=n)
            return false;
        return true;
    }
    int uniquePaths(int m, int n) {
        int ans=0,dp[m][n];
        memset(dp,0,sizeof(dp));
        dp[m-1][n-1]=1;
        for(int i=m-1;i>-1;i--){
            for(int j=n-1;j>-1;j--){
                if(valid(i+1,j,m,n))
                    dp[i][j]+=dp[i+1][j];
                
            
                if(valid(i,j+1,m,n))
                    dp[i][j]+=dp[i][j+1];
                
            }
        }
    
        return dp[0][0];
    }
};