class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX,ans=-1;
        for(int i=0;i<prices.size();i++){
            if(mini>prices[i])
                mini=prices[i];
            if(prices[i] - mini > ans)
                ans = prices[i] - mini;
        }
        
        return ans;
    }
};