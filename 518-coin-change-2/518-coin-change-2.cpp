#define vi vector<int>
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vi dp(amount+1);
        for(int i=0;i<=amount;i++)
            dp[i]=0;
        
        for(int i=1;i<=coins.size();i++){
            dp[0]=1;
            for(int j=1;j<=amount;j++){
                int noTake = dp[j];
                int take = 0;
                if(j>=coins[i-1])
                    take = dp[j-coins[i-1]];
                dp[j] = take+noTake;
            }
        }
        return dp.back();
    }
};