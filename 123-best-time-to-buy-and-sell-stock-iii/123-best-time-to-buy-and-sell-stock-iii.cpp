class Solution {
public:
    // RECUSRSION + MEMO
    int recur(vector<int>& prices,int &k,int c,vector<vector<vector<int>>> &dp,int idx,bool buy){
        if(idx>=prices.size() or c>=k)
            return 0;
        if(dp[idx][buy][c]!=-1)
            return dp[idx][buy][c];
        
        if(buy){
            return dp[idx][buy][c] = max(recur(prices,k,c,dp,idx+1,!buy)-prices[idx],recur(prices,k,c,dp,idx+1,buy));
        }
        
        return dp[idx][buy][c] = max(recur(prices,k,c,dp,idx+1,buy),recur(prices,k,c+1,dp,idx+1,!buy)+prices[idx]);
        
    }
    
    int maxProfit(vector<int>& prices) {
        // TABULATION + DP
        int buy1=INT_MIN,buy2=INT_MIN,sell1=0,sell2=0;
        
        for(auto p:prices){
            buy1 = max(buy1,-p);
            sell1 = max(sell1,buy1+p);
            buy2 = max(buy2,sell1-p);
            sell2 = max(sell2,buy2+p);
        }
        
        return sell2;
        
        
        //RECUR + MEMO
        int k=2;
        vector<vector<vector<int>>> dp(prices.size(),vector<vector<int>>(2,(vector<int>(k,-1))));
        
        return recur(prices,k,0,dp,0,1);
    }
};