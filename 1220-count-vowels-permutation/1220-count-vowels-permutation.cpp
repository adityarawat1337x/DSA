class Solution {
public:
    int mod=1e9+7;
    int dp[20001][5];
    int vowel[5]={'a','e','i','o','u'};
    
    long long count(int n,int prev){
        if(n==0)
            return 1LL;
        if(dp[n][prev]!=-1)
            return dp[n][prev];
        if(vowel[prev]=='a')
            return dp[n][prev] = count(n-1,1);
        if(vowel[prev]=='e')
            return dp[n][prev] = (count(n-1,0)%mod + count(n-1,2)%mod)%mod;
        if(vowel[prev]=='i')
            return dp[n][prev] = (count(n-1,0)%mod + count(n-1,1)%mod + count(n-1,3)%mod + count(n-1,4)%mod)%mod;
        if(vowel[prev]=='o')
            return  dp[n][prev] = (count(n-1,2)%mod + count(n-1,4)%mod)%mod;
        if(vowel[prev]=='u')
            return dp[n][prev] = count(n-1,0);
        return 0;
    }
    
    int countVowelPermutation(int n) {
        memset(dp,-1,sizeof dp);
        int ans=0;
        ans=(ans+count(n-1,0))%mod;
        ans=(ans+count(n-1,1))%mod;
        ans=(ans+count(n-1,2))%mod;
        ans=(ans+count(n-1,3))%mod;
        ans=(ans+count(n-1,4))%mod;
        return ans;
    }
};