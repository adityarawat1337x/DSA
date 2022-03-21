#define vi vector<int> 
class Solution {
public:
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
    
    int coinChange(vector<int>& coins, int amount) {
        vector<vi> dp(coins.size(),vi(amount+1,-1));
        int ans =  minCoin(coins,coins.size()-1,amount,dp);
        return ans>=INT_MAX-1?-1:ans;
    }
};