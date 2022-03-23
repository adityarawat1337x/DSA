class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=0,sell=INT_MIN,prev=buy;
        for(auto p:prices){
            int prev2=prev;
            prev=buy;
            buy=max(buy,sell+p);
            sell=max(sell,prev2-p);
        }
        
        return buy;
    }
};