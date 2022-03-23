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
    
    int maxProfit(int k,vector<int>& prices) {
        //RECUR + MEMO
        vector<vector<vector<int>>> dp(prices.size(),vector<vector<int>>(2,(vector<int>(k,-1))));
        return recur(prices,k,0,dp,0,1);
    }
};