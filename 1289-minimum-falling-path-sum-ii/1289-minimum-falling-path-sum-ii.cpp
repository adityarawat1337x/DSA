class Solution {
public:
    /* RECURSIVE + MEMO
    int run(int i,int j,vector<vector<int>>& mat,vector<vector<long>> &dp){
        if(i==mat.size()-1){
            return mat[i][j];
        }
        
        if(dp[i][j]!=INT_MAX)
            return dp[i][j];
        
        int tmp=INT_MAX;
        
        for(int x=0;x<mat[0].size();x++){
            if(x!=j){
                int val = run(i+1,x,mat,dp);
                tmp = min(tmp,val); 
            }
        }
       
        return dp[i][j] = mat[i][j] + tmp;
    }
    
    int minFallingPathSum(vector<vector<int>>& mat) {
        int ans=INT_MAX;
        vector<vector<long>> dp(mat.size(),vector<long>(mat[0].size(),INT_MAX));
        for(int i=0;i<mat[0].size();i++){
            int val = run(0,i,mat,dp);
            ans = min(ans,val);
        }
        return ans;
    }
    */
    int minFallingPathSum(vector<vector<int>>& mat) {
        long ans=INT_MAX;
        vector<long> row(mat[0].size()+2,0);

        for(int i=1;i<=mat.size();i++){
            vector<long> tmp(mat[0].size()+2,INT_MAX);
            for(int j=1;j<=mat[0].size();j++){
                long mini = INT_MAX;
                for(int x=0;x<=mat[0].size();x++){
                    if(x!=j){
                        mini = min(mini,row[x]); 
                    }
                }
                tmp[j] = mat[i-1][j-1] + mini;
            }
            row=tmp;
        }
          for(int j=1;j<=mat[0].size();j++){
              ans=min(ans,row[j]);
          }
        
        return ans;
    }
};