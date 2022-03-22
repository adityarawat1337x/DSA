class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1){
            if(k>=n)
                return k&1?-1:nums[0];
            else return nums[0];
        }
        if(k==0)
             if(nums.size()>=0)
                return nums[0];
             else return -1;
        if(k==1)
            if(nums.size()>=2)
                return nums[1];
            else
                return -1;
         if(k==2)
            if(nums.size()>=3)
                return max(nums[0],nums[2]);
            else
                return -1;
        int ans = *max_element(nums.begin(),nums.end());
        
        if(k>nums.size())
            return ans;
        
        return max(*max_element(nums.begin(),nums.begin()+k-1),nums[k]);
        } 
};