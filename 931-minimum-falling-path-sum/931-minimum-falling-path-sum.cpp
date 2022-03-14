class Solution {
public:
    /*RECURSION + MEMO
    int run(int i,int j,vector<vector<int>>& mat,vector<vector<long>> &dp){
        if(j<0 or j==mat[0].size())
            return INT_MAX;
        
        if(i==mat.size()-1){
            return mat[i][j];
        }
        
        if(dp[i][j]!=INT_MAX)
            return dp[i][j];
        
        int left = run(i+1,j-1,mat,dp);        
        int right = run(i+1,j+1,mat,dp);
        int down = run(i+1,j,mat,dp);
        return dp[i][j] = mat[i][j] + min({right,left,down});
    }
    
    int minFallingPathSum(vector<vector<int>>& mat) {
        int ans=INT_MAX;
        vector<vector<long>> dp(mat.size(),vector<long>(mat[0].size(),INT_MAX));
        for(int i=0;i<mat[0].size();i++)
            ans = min(ans,run(0,i,mat,dp));
        return ans;
    }
    */
  
    
    int minFallingPathSum(vector<vector<int>>& mat) {
        long ans=INT_MAX;
        vector<long> row(mat[0].size()+2,0);

        for(int i=1;i<=mat.size();i++){
             vector<long> tmp(mat[0].size()+2,INT_MAX);
            for(int j=1;j<=mat[0].size();j++){
                int up = row[j];        
                int right =row[j+1];
                int left = row[j-1];
                tmp[j] = mat[i-1][j-1] + min({right,left,up});
            }
            row=tmp;
        }
          for(int j=1;j<=mat[0].size();j++){
              ans=min(ans,row[j]);
          }
        
        return ans;
    }
};