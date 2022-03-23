class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sell = 0, buy = INT_MIN;
        
        for(auto p:prices){
            int prev=sell;
            sell = max(sell,buy+p);
            buy = max(buy,prev-p);
        }
        
        return sell;
    }
};