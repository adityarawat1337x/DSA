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
        int yes =0,no=0;
        
        if(t1[i]==t2[j])
            yes = solve(t1,t2,i-1,j-1,dp) + solve(t1,t2,i-1,j,dp);
        else {
             no = solve(t1,t2,i-1,j,dp);
        }
        return dp[i][j] =yes+no;
    }
    
    int numDistinct(string t1, string t2) {
        //RECUR + MEMO
        vector<vector<int>> memo(t1.size(),vector<int>(t2.size(),-1));
        return solve(t1,t2,t1.size()-1,t2.size()-1,memo);
    }
};