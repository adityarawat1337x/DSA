class Solution {
public:
    
    int run(string &t1, string &t2,int i,int j,vector<vector<int>> &dp){
        if(i==t1.size() || j==t2.size())
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        if(t1[i]==t2[j]){
            return dp[i][j] = 1 + run(t1,t2,i+1,j+1,dp);
        }
        
        int a = run(t1,t2,i,j+1,dp);
        int b = run(t1,t2,i+1,j,dp);
        return dp[i][j] =  max(a,b);

    }
    int longestCommonSubsequence(string t1, string t2) {
        vector<vector<int>> dp(t1.size(),vector<int>(t2.size(),-1));
        int ans = run(t1,t2,0,0,dp);
        return ans;
    }
};