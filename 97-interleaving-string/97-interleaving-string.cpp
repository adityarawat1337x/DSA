class Solution {
public:
    bool solve(string &s1, string &s2, string &s3,int i,int j,int p,vector<vector<int>> &dp){
        if(i==s1.size() and j==s2.size() and p==s3.size())
            return true;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        bool op1=false,op2=false;
        
        if(s1[i]==s3[p])
             op1 = solve(s1,s2,s3,i+1,j,p+1,dp);
        
        if(s2[j]==s3[p])
             op2 = solve(s1,s2,s3,i,j+1,p+1,dp);
        
        
        return dp[i][j] = op1 or op2;
    }
    
    bool isInterleave(string s1, string s2, string s3) {
        int on=0,tw=0,th=0;
        vector<vector<int>> dp(s1.size()+1,vector<int>(s2.size()+1,-1));
        if(s1.size()+s2.size()!=s3.size())
            return false;
        return solve(s1,s2,s3,0,0,0,dp);
    }
};