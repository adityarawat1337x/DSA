class Solution {
public:

    int nthUglyNumber(int n) {
        if(n==1)
            return 1;
        vector<long long> dp(n,0);
        dp[0]=1;
        int i=1;
        long long  p1=0,p2=0,p3=0;
        while(i<n){
            dp[i] = min({2*dp[p1],3*dp[p2],5*dp[p3]});
            if(dp[i]==2*dp[p1])
                p1++;
            if(dp[i]==3*dp[p2])
                p2++;
            if(dp[i]==5*dp[p3])
                p3++;
            i++;
        }
        
        return dp[n-1];
    }
};