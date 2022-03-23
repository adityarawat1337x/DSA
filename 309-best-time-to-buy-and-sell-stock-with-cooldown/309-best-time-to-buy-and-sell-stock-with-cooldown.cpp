class Solution {
public:
      // RECUSRSION + MEMO
    int recur(vector<int>& prices,vector<vector<int>> &dp,int idx,bool buy){
        if(idx>=prices.size())
            return 0;
        if(dp[idx][buy]!=-1)
            return dp[idx][buy];
        
        if(buy){
            return dp[idx][buy] = max(recur(prices,dp,idx+1,!buy)-prices[idx],recur(prices,dp,idx+1,buy));
        }
        return dp[idx][buy] = max(recur(prices,dp,idx+1,buy),recur(prices,dp,idx+2,!buy)+prices[idx]);
    }
    
    int maxProfit(vector<int>& prices) {
        // TABULATION + SPACE OPTIMISATION
        
        int sell=0,buy=INT_MIN,prev=sell;
     
        for(auto p:prices){
            int prev2=prev;
            prev=sell;
            sell=max(sell,buy+p);
            buy=max(buy,prev2-p);
        }
        
        return sell;
        
        
        // RECUSRSION + MEMO
        
        vector<vector<int>> dp(prices.size(),vector<int>(2,-1));
        return recur(prices,dp,0,1);

    }
};

   //https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/discuss/75924/Most-consistent-ways-of-dealing-with-the-series-of-stock-problems