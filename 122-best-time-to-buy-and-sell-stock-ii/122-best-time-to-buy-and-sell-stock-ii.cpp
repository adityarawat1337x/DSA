class Solution {
public:
    /* RECUSRSION + MEMO
    int recur(vector<int>& prices,vector<vector<int>> &dp,int idx,bool buy){
        if(idx>=prices.size())
            return 0;
        if(dp[idx][buy]!=-1)
            return dp[idx][buy];
        
        if(buy){
            return dp[idx][buy] = max(recur(prices,dp,idx+1,!buy)-prices[idx],recur(prices,dp,idx+1,buy));
        }
        return dp[idx][buy] = max(recur(prices,dp,idx+1,buy),recur(prices,dp,idx+1,!buy)+prices[idx]);
    }
    
    */
    
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> dp(prices.size(),vector<int>(2,-1));
        
        //TABULATION + SPACE OPTIMIZATION
        int sell=0,buy=INT_MIN;
        for(auto p:prices){
            buy = max(buy,sell-p);
            sell = max(sell,buy+p);
        }
        return sell;
        //return recur(prices,dp,0,1);
    }
};