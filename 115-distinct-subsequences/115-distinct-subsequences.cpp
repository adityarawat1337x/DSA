class Solution {
public:
     //RECURSION + MEMO
    int solve(string &t1,string &t2,int i,int j,vector<vector<int>> &dp){
        if(j<0)
            return 1;
        if(i<0)
            return 0;
        int ans=0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        if(t1[i]==t2[j])
            dp[i][j] = solve(t1,t2,i-1,j-1,dp) + solve(t1,t2,i-1,j,dp);
        else {
             dp[i][j] = solve(t1,t2,i-1,j,dp);
        }
        return dp[i][j];
    }
    
    int numDistinct(string t1, string t2) {
        //TABULATION
        vector<vector<double>> dp(t1.size()+1,vector<double>(t2.size()+1,1));
        for(int i=1;i<=t1.size();i++){
            for(int j=1;j<=t2.size();j++){
                dp[0][j]=0;
                if(t1[i-1]==t2[j-1])
                     dp[i][j] = dp[i-1][j-1]+dp[i-1][j];
                else
                    dp[i][j] = dp[i-1][j];
            }  
        }       
        
        return dp.back().back();
        
        //RECUR + MEMO
        vector<vector<int>> memo(t1.size(),vector<int>(t2.size(),-1));
        return solve(t1,t2,t1.size()-1,t2.size()-1,memo);
    }
};