class NumMatrix {
public:
    vector<vector<int>> dp;
    NumMatrix(vector<vector<int>>& mat) {
        dp.resize(mat.size(),vector<int>(mat[0].size(),0));
      
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(i==0 and j>0){
                    dp[i][j]=mat[i][j]+dp[i][j-1];
                }else if(j==0 and i>0){
                    dp[i][j]=mat[i][j]+dp[i-1][j];
                }else if(i==j and i==0){
                      dp[0][0]=mat[0][0];
                }else{
                    dp[i][j]=mat[i][j]+dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
                }
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        if(col1==row1 and col1==0){
            return dp[row2][col2];
        }else if(col1==0){
            return dp[row2][col2] - dp[row1-1][col2];
        }else if(row1==0){
             return dp[row2][col2] - dp[row2][col1-1];
        }
        return dp[row2][col2] - dp[row1-1][col2] - dp[row2][col1-1] + dp[row1-1][col1-1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */