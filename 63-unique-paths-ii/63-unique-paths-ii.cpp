class Solution {
public:
    int run(vector<vector<int>>& og,int i,int j,  vector<vector<int>> &dp){
        if(i==og.size() or j==og[0].size() or og[i][j]==1)
            return 0;
        if(i==og.size()-1 and j==og[0].size()-1)
            return 1;
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        return dp[i][j] = run(og,i+1,j,dp) + run(og,i,j+1,dp);
        
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& og) {
        vector<long> row(og[0].size()+1);
        
        if(og.back().back()==1)
            return 0;
        row[og[0].size()-1]=1;
        for(int i=og.size()-1;i>-1;i--){
            vector<long> tmp(og[0].size()+1);
            for(int j=og[0].size()-1;j>-1;j--){
                if(og[i][j]==1)
                    tmp[j]=0;
                else
                    tmp[j] = row[j] + tmp[j+1];
            }
            row=tmp;
        }
            
        return row[0];
        
    }
};














