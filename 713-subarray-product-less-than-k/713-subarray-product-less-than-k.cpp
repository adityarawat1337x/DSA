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
            if(prod>=k){
                ans+=combi(i,j)-combi(i,last);
                last=j;
            }
            while(i<=j and prod>=k){
                prod/=nums[i++];
            }
        }
         ans+=combi(i,j)-combi(i,last);
        
        return ans;
    }
};
