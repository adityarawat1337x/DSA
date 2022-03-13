class Solution {
public:
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
};