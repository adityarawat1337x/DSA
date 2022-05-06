class Solution {
public:
    int combi(int i,int j){
        int n =j-i;
        return ((n+1)*n)/2;
    }
    
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ans=0;
        int i=0,j=0,last=0;
        long long prod=1;
        for(i=0,j=0;j<nums.size();j++){
            prod*=nums[j];
            while(i<=j and prod>=k){
                prod/=nums[i++];
            }
            ans+=j-i+1;
        }
        
        return ans;
    }
};
