#define vi vector<int> 
class Solution {
public:
    /* RECUR + MEMO
    int minCoin(vector<int>& coins,int idx,int amount,vector<vi> &dp) {
        if(amount==0)
            return 0;
        
        if(idx<0)
            return INT_MAX-1;
        
        if(dp[idx][amount]!=-1)
            return dp[idx][amount];
        
        int noTake = minCoin(coins,idx-1,amount,dp);
        int take = INT_MAX-1;
        if(amount>=coins[idx])
            take = 1+minCoin(coins,idx,amount-coins[idx],dp);
        
        return dp[idx][amount] = min(take,noTake);
    }
    */
    /*
    TABULIZATION
    int coinChange(vector<int>& coins, int amount) {
        vector<vi> dp(coins.size()+1,vi(amount+1,-1));
        for(int i=0;i<=amount;i++)
            dp[0][i]=INT_MAX-1;
        
        for(int i=0;i<=coins.size();i++)
            dp[i][0]=0;
        
        for(int i=1;i<=coins.size();i++)
            for(int j=1;j<=amount;j++){
                int noTake = dp[i-1][j];
                int take = INT_MAX-1;
                if(j>=coins[i-1])
                    take = 1 + dp[i][j-coins[i-1]];
                dp[i][j] = min(take,noTake);
            }
        
        return dp.back().back()>=INT_MAX-1?-1:dp.back().back();
        
        //int ans =  minCoin(coins,coins.size()-1,amount,dp);
        //return ans>=INT_MAX-1?-1:ans;
    }
    */
     int coinChange(vector<int>& coins, int amount) {
        vi dp(amount+1);
        for(int i=0;i<=amount;i++)
            dp[i]=INT_MAX-1;
        
        for(int i=1;i<=coins.size();i++){
            dp[0]=0;
            
            for(int j=1;j<=amount;j++){
                int noTake = dp[j];
                int take = INT_MAX-1;
                if(j>=coins[i-1])
                    take = 1 + dp[j-coins[i-1]];
                dp[j] = min(take,noTake);
            }
        }
        return dp.back()>=INT_MAX-1?-1:dp.back();
    }
   
};