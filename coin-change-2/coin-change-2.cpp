class Solution {
public:
    vector<vector<int>>dp{5001, vector<int>(5001, -1)};
    
    int change(int amount, vector<int>& coins,int index=0) {
        if(amount==0)
            return 1;
        if(index>=coins.size() || amount<0)
            return 0;
        if(dp[index][amount]!=-1)
            return dp[index][amount];
        int include = change(amount-coins[index],coins,index);
        int exclude = change(amount,coins,index+1);
        return dp[index][amount]=(exclude+include);
    }
};