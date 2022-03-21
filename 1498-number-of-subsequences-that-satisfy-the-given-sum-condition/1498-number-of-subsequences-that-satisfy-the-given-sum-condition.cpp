class Solution {
public:
    int power(long long x,long  long n,long long mod){
        if(n==0)
            return 1;
        if(n&1)
            return (x%mod * power((x%mod*x%mod)%mod,n/2,mod)%mod)%mod;
        
        return power((x%mod*x%mod)%mod,n/2,mod)%mod;
    }
    
    //pow(x,n) = x* (x*x,n/2)
        
    int numSubseq(vector<int>& nums, int target) {
        long mod = 1e9 + 7;
        sort(nums.begin(),nums.end());
        
        long long ans=0;
        int i=0,j=nums.size()-1;
        while(i<=j){
            while(i<=j and nums[i]+nums[j]>target)
                j--;
            if( i<=j){
                ans = (ans%mod + power(2,j-i,mod))%mod;
            }
            i++;
        }
        return ans;
    }
};