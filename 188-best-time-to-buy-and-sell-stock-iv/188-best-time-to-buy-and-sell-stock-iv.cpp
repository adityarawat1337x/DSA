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
        // TABULATION + DP
        if(k==0)
            return 0;
        vector<int> buy(k,INT_MIN),sell(k,0);
        int prevsell=0,prevbuy=0;
            
        for(auto p:prices){
            for(int i=0;i<k;i++){
                if(i==0)
                    buy[i] = max(buy[i],-p);
                else
                    buy[i] = max(buy[i],prevsell-p);
                prevbuy=buy[i];
                sell[i] = max(sell[i],prevbuy+p);
                prevsell=sell[i];
            }
        }
        
        return sell[k-1];
        
        
        //RECUR + MEMO
        vector<vector<vector<int>>> dp(prices.size(),vector<vector<int>>(2,(vector<int>(k,-1))));
        return recur(prices,k,0,dp,0,1);
    }
};