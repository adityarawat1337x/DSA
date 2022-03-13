class Solution {
public:
    
    
    /* RECURSIVE + MEMO
    int run(int i,int j,vector<vector<int>>& triangle,vector<vector<long>>& dp){
        if(i==triangle.size()-1)
            return triangle[i][j];
        
        if(j>=triangle[i].size())
            return INT_MAX;
        
        if(dp[i][j]!=INT_MAX)
            return dp[i][j];
        
        int down = run(i+1,j,triangle,dp);
        int downRight = run(i+1,j+1,triangle,dp);
        
        return dp[i][j] = triangle[i][j] + min(down,downRight);
    }
    
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<long>> dp(triangle.size(),vector<long>(triangle.back().size(),INT_MAX));
        return run(0,0,triangle,dp);
    }
    */
/* TABULATION
 int minimumTotal(vector<vector<int>>& tri) {
    vector<vector<long>> dp(tri.size()+1,vector<long>(tri.back().size()+1,0));
        for(int i=tri.size()-1;i>-1;i--){
            for(int j=tri[i].size()-1;j>-1;j--){
                dp[i][j] = tri[i][j] + min(dp[i+1][j],dp[i+1][j+1]);
            }
        }
     
     return dp[0][0];
    }
*/    
    
int minimumTotal(vector<vector<int>>& tri) {
   vector<long> row(tri.back().size()+1,0);
        for(int i=tri.size()-1;i>-1;i--){
            vector<long> tmp(tri.back().size()+1,0);
            for(int j=tri[i].size()-1;j>-1;j--){
                tmp[j] = tri[i][j] + min(row[j],row[j+1]);
            }
            row=tmp;
        }
     
     return row[0];
    }
};





