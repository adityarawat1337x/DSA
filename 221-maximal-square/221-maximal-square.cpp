class Solution {
public:
    int maximalSquare(vector<vector<char>>& mat) {
        vector<vector<int>> dp(mat.size(),vector<int>(mat[0].size(),0));
        int ans=0;
        for(int i=mat.size()-1;i>-1;i--){
            if(mat[i][mat[0].size()-1]=='1'){
                dp[i][mat[0].size()-1] = 1;
                ans=1;
            }
        }
        for(int j=mat[0].size()-1;j>-1;j--){
             if(mat[mat.size()-1][j]=='1'){
                dp[mat.size()-1][j] = 1;
                ans=1;
             }
        }
        for(int i=mat.size()-2;i>-1;i--){
            for(int j=mat[i].size()-2;j>-1;j--){
                if(mat[i][j]=='0')
                    dp[i][j]=0;
                else{
                    dp[i][j] = 1 + min({dp[i+1][j+1],dp[i+1][j],dp[i][j+1]});
                    ans = max(dp[i][j],ans);
                }
            }   
        }
        
        return ans*ans;
    }
};