class Solution {
public:
    //RECURSION + MEMO
    int solve(string &t1,string &t2,int i,int j,vector<vector<int>> &dp){
        if(i<0 and j<0)
            return 0;
        if(j<0 or i<0)
            return max(j,i)+1;
        int ans=0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(t1[i]==t2[j])
            return dp[i][j] = solve(t1,t2,i-1,j-1,dp);
        int rep = solve(t1,t2,i-1,j-1,dp);
        int del = solve(t1,t2,i-1,j,dp);
        int ins = solve(t1,t2,i,j-1,dp);
        return dp[i][j] = 1 + min({rep,del,ins});
    }
    
    int minDistance(string t1, string t2) {
        //TABULATION + SPACE OPTI
        vector<int> curr(t2.size()+1,0),prev(t2.size()+1,0);
        
         for(int i=0;i<=t1.size();i++){
            for(int j=0;j<=t2.size();j++){
                if(i==0 or j==0){
                    curr[j]=max(i,j);
                    continue;
                }
                if(t1[i-1]==t2[j-1])
                     curr[j] = prev[j-1];
                else
                    curr[j] = 1 + min({ curr[j-1], prev[j], prev[j-1]});
            }
            prev=curr;
        }   
        
        return curr.back();
        
        //TABULATION
        vector<vector<int>> dp(t1.size()+1,vector<int>(t2.size()+1,0));
        for(int i=0;i<=t1.size();i++){
            for(int j=0;j<=t2.size();j++){
                if(i==0 or j==0){
                    dp[i][j]=max(i,j);
                    continue;
                }
                if(t1[i-1]==t2[j-1])
                     dp[i][j] = dp[i-1][j-1];
                else
                    dp[i][j] = 1 + min({ dp[i][j-1], dp[i-1][j], dp[i-1][j-1]});
            }  
        }       
        
        return dp.back().back();
        //RECUR + MEMO
        vector<vector<int>> memo(t1.size(),vector<int>(t2.size(),-1));
        return solve(t1,t2,t1.size()-1,t2.size()-1,memo);
    }
};