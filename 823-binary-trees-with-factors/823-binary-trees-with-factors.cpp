class Solution {
public:
    int mod = 1e9 + 7;
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        long ans=0;
        long dp[arr.size()];
        memset(dp,0,sizeof dp);
        dp[0]=1;
        
        for(int i=1;i<arr.size();i++){
            int target=arr[i];
            long l=0,r=i-1,ways=1;
            while(l<=r){
                long prod = ((long)arr[r]*arr[l]);
                if(prod>target) r--;
                else if(prod<target) l++;
                else{
                    if(l==r) ways+=((long)dp[l]*dp[r])%mod;
                    else ways+=((long)dp[l]*dp[r]*2)%mod;
                    l++,r--;
                }
            }
            dp[i]=ways;
            ans=(ans + dp[i])%mod;
        }
        
        return ans+1;
    }
};