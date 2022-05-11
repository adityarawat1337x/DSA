class Solution {
public:
    int count(int idx,int num,int n,vector<vector<int>> &dp){
        if(idx==0 and num==n)
            return 1;
        if(idx<0 or num>n)
            return 0;
        if(dp[idx][num]!=-1)
            return dp[idx][num];
        int pick = count(idx,num+1,n,dp);
        int nopick = count(idx-1,num,n,dp);
        return dp[idx][num] = pick+nopick;
    }
    
    int countVowelStrings(int n) {
        vector<vector<int>> dp(5,vector<int>(n+1,-1));
        return count(4,0,n,dp);
    }
};