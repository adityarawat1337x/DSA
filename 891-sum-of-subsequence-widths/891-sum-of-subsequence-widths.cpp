class Solution {
public:
    int sumSubseqWidths(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long maxi=0,mini=0;
        long mod=1e9 + 7,power=1;
        int n=nums.size()-1;

        for(int i=0;i<nums.size();i++,power=power*2%mod){
            maxi = (maxi + (long)((power-1)*nums[i]));
            maxi=maxi%mod;
            mini = (mini + (long)((power-1)*nums[n-i]));
            mini=mini%mod;
        }
 
        
        return (maxi-mini+mod)%mod;
    }
};