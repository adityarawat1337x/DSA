class Solution {
public:

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
};