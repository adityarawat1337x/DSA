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
        vector<vector<int>> dp(t1.size()+1,vector<int>(t2.size()+1,0));
        
        for(int i=1;i<=t1.size();i++){
            for(int j=1;j<=t2.size();j++){
                if(t1[i-1]==t2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        int ans = dp.back().back();
        return ans;
    }
};