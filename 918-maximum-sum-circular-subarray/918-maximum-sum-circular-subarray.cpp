class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum=0,sum2=0,maxSum=INT_MIN,minSum=INT_MAX;
        for(auto i:nums){
            sum+=i;
            sum2+=i;
            if(sum>maxSum)
                maxSum=sum;
             if(sum2<minSum)
                minSum=sum2;
            if(sum<0)
                sum=0;
            if(sum2>0)
                sum2=0;
        }
        int maxi = *max_element(nums.begin(),nums.end());
        int sm = accumulate(nums.begin(),nums.end(),0);
        if(maxi<0)
            return maxi;
        return max({maxi,maxSum,sm-minSum});
    }
};